#ifndef EXT4_SUPER_BLOCK_HEADER_GAURD
#define EXT4_SUPER_BLOCK_HEADER_GAURD

struct ext4_super_block {
/*00*/	__le32 s_inodes_count; //Total inode count.
/*04*/	__le32 s_blocks_count_lo; //Total block count.
/*08*/	__le32 s_r_blocks_count_lo; //This number of blocks can only be allocated by the super-user.
/*0C*/	__le32 s_free_blocks_count_lo; //Free block count.
/*10*/	__le32 s_free_inodes_count; //Free inode count.
/*14*/	__le32 s_first_data_block; //First data block. This must be at least 1 for 1k-block filesystems and is typically 0 for all other block sizes.
/*18*/	__le32 s_log_block_size; //Block size is 2 ^ (10 + s_log_block_size).
/*1C*/	__le32 s_log_cluster_size; //Cluster size is 2 ^ (10 + s_log_cluster_size) blocks if bigalloc is enabled. Otherwise s_log_cluster_size must equal s_log_block_size.
/*20*/	__le32 s_blocks_per_group; //Blocks per group.
/*24*/	__le32 s_clusters_per_group; //Clusters per group, if bigalloc is enabled. Otherwise s_clusters_per_group must equal s_blocks_per_group.
/*28*/	__le32 s_inodes_per_group; //Inodes per group.
/*2C*/	__le32 s_mtime; //Mount time, in seconds since the epoch.
/*30*/	__le32 s_wtime; //Write time, in seconds since the epoch.
/*34*/	__le16 s_mnt_count; //Number of mounts since the last fsck.
/*36*/	__le16 s_max_mnt_count; //Number of mounts beyond which a fsck is needed.
/*38*/	__le16 s_magic; //Magic signature is 0xEF53 for ext4
/*3A*/	__le16 s_state; //File system state. 0x0001=>Cleanly Umounted; 0x0002=>Errors Detected; 0x0001=>Orphans Being Recovered;
/*3C*/	__le16 s_errors; //Behaviour when detecting errors. 1=> Continue; 2=> Remount read-only; 3=> Panic;
/*3E*/	__le16 s_minor_rev_level; //Minor revision level.
/*40*/	__le32 s_lastcheck; //Time of last check, in seconds since the epoch.
/*44*/	__le32 s_checkinterval; //Maximum time between checks, in seconds.
/*48*/	__le32 s_creator_os; Creator OS. 0=>Linux; 1=>Hurd; 2=>Masix; 3=>FreeBSD; 4=>Lites; 0x0000046E=>Windux;
/*50*/	__le16 s_def_resuid; 
		__le32 
		__le32 
		__le32 
		__le32 
		__le32 
		__le32 
		__le32 
		__le32 
		__le32 
		__le32 
		__le32 
		__le32 
		__le32 
		__le32 
		__le32 
		__le32 
		__le32 
		__le32 
	
}