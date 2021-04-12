/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVExternalPlaybackMonitorInternal;

@interface AVExternalPlaybackMonitor : NSObject {

	AVExternalPlaybackMonitorInternal* _ivars;

}

@property (getter=isAirPlayVideoActive,readonly) BOOL airPlayVideoActive; 
@property (getter=isAirPlayVideoPlaying,readonly) BOOL airPlayVideoPlaying; 
+(void)initialize;
+(id)longFormVideoExternalPlaybackMonitor;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isAirPlayVideoActive;
-(id)initWithFigRoutingSessionManager:(OpaqueFigRoutingSessionManagerRef)arg1 ;
-(BOOL)isAirPlayVideoPlaying;
@end

