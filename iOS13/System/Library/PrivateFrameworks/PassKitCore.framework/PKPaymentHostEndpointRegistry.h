/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PKPaymentHostEndpointRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _registrySerialQueue;
	NSMutableDictionary* _hostIdentifierToEndpointMap;
	NSMutableDictionary* _processIdentifierToHostIdentifiersMap;

}
-(id)init;
-(id)debugDescription;
-(void)addListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 processIdentifier:(int)arg3 ;
-(id)takeListenerEndpointForHostIdentifier:(id)arg1 ;
-(void)removeListenerEndpointsForProcessIdentifier:(int)arg1 ;
@end

