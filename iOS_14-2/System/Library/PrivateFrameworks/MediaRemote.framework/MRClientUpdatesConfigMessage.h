/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRClientUpdatesConfigMessage : MRProtocolMessage {

	NSArray* _subscribedPlayerPaths;

}

@property (nonatomic,copy) NSArray * subscribedPlayerPaths;              //@synthesize subscribedPlayerPaths=_subscribedPlayerPaths - In the implementation block
@property (nonatomic,readonly) BOOL nowPlayingUpdates; 
@property (nonatomic,readonly) BOOL artworkUpdates; 
@property (nonatomic,readonly) BOOL volumeUpdates; 
@property (nonatomic,readonly) BOOL keyboardUpdates; 
@property (nonatomic,readonly) BOOL outputDeviceUpdates; 
@property (nonatomic,readonly) BOOL systemEndpointUpdates; 
-(id)initWithNowPlayingUpdates:(BOOL)arg1 artworkUpdates:(BOOL)arg2 volumeUpdates:(BOOL)arg3 keyboardUpdates:(BOOL)arg4 outputDeviceUpdates:(BOOL)arg5 systemEndpointUpdates:(BOOL)arg6 subscribedPlayerPaths:(id)arg7 ;
-(unsigned long long)type;
-(BOOL)nowPlayingUpdates;
-(BOOL)artworkUpdates;
-(BOOL)volumeUpdates;
-(BOOL)keyboardUpdates;
-(BOOL)outputDeviceUpdates;
-(BOOL)systemEndpointUpdates;
-(NSArray *)subscribedPlayerPaths;
-(void)setSubscribedPlayerPaths:(NSArray *)arg1 ;
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
@end

