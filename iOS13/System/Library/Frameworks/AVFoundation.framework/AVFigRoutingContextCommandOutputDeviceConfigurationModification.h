/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputDeviceConfigurationModification.h>

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
-(void)dealloc;
-(void)setDeviceName:(id)arg1 ;
-(CFDictionaryRef)routingContextCommandPayload;
-(void)setDevicePassword:(id)arg1 ;
-(void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:(BOOL)arg1 ;
-(void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;
-(void)addPeerToHomeGroup:(id)arg1 ;
-(void)removePeerWithIDFromHomeGroup:(id)arg1 ;
@end

