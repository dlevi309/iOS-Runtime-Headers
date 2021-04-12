/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libxpc_datastores.dylib
*/

#import <libxpc_datastores.dylib/libxpc_datastores.dylib-Structs.h>
#import <libobjc.A.dylib/XDS_xpc_datastore_object.h>

@protocol OS_xpc_object;
@class OS_xds_local_cache, NSObject, NSString;

@interface OS_xpc_datastore_object : NSObject <XDS_xpc_datastore_object> {

	unsigned long long ds_type;
	unsigned long long max_size;
	char* ds_name;
	os_unfair_lock_s lock;
	OS_xds_local_cache* local_data;
	NSObject*<OS_xpc_object> conn;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithName:(const char*)arg1 ;
-(id)copyCurrentStateWithReqType:(unsigned long long)arg1 ;
@end

