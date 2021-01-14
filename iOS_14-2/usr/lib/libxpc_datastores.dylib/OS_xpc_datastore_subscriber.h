/*
* Generated on Thursday, January 14, 2021 at 2:29:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libxpc_datastores.dylib
*/

#import <libxpc_datastores.dylib/OS_xpc_datastore_object.h>
#import <libobjc.A.dylib/XDS_xpc_datastore_subscriber.h>

@class NSString;

@interface OS_xpc_datastore_subscriber : OS_xpc_datastore_object <XDS_xpc_datastore_subscriber> {

	unsigned recvp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)copyCurrentStateWithReqType:(unsigned long long)arg1 ;
@end

