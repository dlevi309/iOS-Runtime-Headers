/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 processIdentifier:(int)arg3 ;
-(id)takeListenerEndpointForHostIdentifier:(id)arg1 ;
-(id)debugDescription;
-(void)removeListenerEndpointsForProcessIdentifier:(int)arg1 ;
@end

