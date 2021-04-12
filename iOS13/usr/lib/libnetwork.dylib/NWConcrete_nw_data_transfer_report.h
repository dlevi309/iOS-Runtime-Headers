/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_data_transfer_report.h>

@class NWConcrete_nw_connection, NSString;

@interface NWConcrete_nw_data_transfer_report : NSObject <OS_nw_data_transfer_report> {

	unsigned long long start_time;
	unsigned long long duration_milliseconds;
	NWConcrete_nw_connection* connection;
	os_unfair_lock_s lock;
	unsigned path_count;
	unsigned allocated_path_count;
	int state;
	nw_data_transfer_path_report primary_path;
	nw_data_transfer_path_report* secondary_paths;
	unsigned collection_in_progress : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
@end

