/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_service_connector.h>

@protocol OS_nw_listener, OS_nw_parameters, OS_dispatch_queue, OS_nw_array, OS_nw_dictionary, OS_xpc_object;
@class NSObject, NSString;

@interface NWConcrete_nw_service_connector : NSObject <OS_nw_service_connector> {

	NSObject*<OS_nw_listener> listener;
	unsigned state;
	NSObject*<OS_nw_parameters> clientParameters;
	NSObject*<OS_dispatch_queue> serviceConnectorQueue;
	unsigned long long uniqueID;
	unsigned short localPortHBO;
	unsigned char retryCounterForAddressInUse;
	/*^block*/id serviceAvailableBlock;
	NSObject*<OS_nw_array> pendingUnverifiedIncomingRequests;
	NSObject*<OS_nw_dictionary> pendingIncomingRequests;
	NSObject*<OS_nw_dictionary> activeConnections;
	NSObject*<OS_nw_dictionary> activeOutgoingRequests;
	NSObject*<OS_xpc_object> remotePubKeys;
	unsigned char localPrivKey[32];
	unsigned char localPubKey[32];
	unsigned useLargeUUIDForTesting : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)dealloc;
@end

