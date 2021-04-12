/*
* Generated on Thursday, January 14, 2021 at 2:29:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithName:(const char*)arg1 ;
-(void)dealloc;
-(id)copyCurrentStateWithReqType:(unsigned long long)arg1 ;
@end

