/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceConfigurationModification.h>

@class NSString;

@interface AVFigRoutingContextCommandOutputDeviceConfigurationModification : NSObject <AVOutputDeviceConfigurationModification> {

	CFDictionaryRef _payload;

}

@property (nonatomic,readonly) CFDictionaryRef routingContextCommandPayload;              //@synthesize payload=_payload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)setDevicePassword:(id)arg1 ;
-(CFDictionaryRef)routingContextCommandPayload;
-(void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:(BOOL)arg1 ;
-(void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;
-(void)addPeerToHomeGroup:(id)arg1 ;
-(void)removePeerWithIDFromHomeGroup:(id)arg1 ;
-(void)setDeviceName:(id)arg1 ;
-(void)dealloc;
@end

