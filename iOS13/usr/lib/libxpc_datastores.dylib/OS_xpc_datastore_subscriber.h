/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

