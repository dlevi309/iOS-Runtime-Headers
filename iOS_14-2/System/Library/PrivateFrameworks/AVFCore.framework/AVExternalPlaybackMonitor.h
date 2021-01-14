/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVExternalPlaybackMonitorInternal;

@interface AVExternalPlaybackMonitor : NSObject {

	AVExternalPlaybackMonitorInternal* _ivars;

}

@property (getter=isAirPlayVideoActive,readonly) BOOL airPlayVideoActive; 
@property (getter=isAirPlayVideoPlaying,readonly) BOOL airPlayVideoPlaying; 
+(void)initialize;
+(id)longFormVideoExternalPlaybackMonitor;
-(id)init;
-(BOOL)isAirPlayVideoPlaying;
-(id)initWithFigRoutingSessionManager:(OpaqueFigRoutingSessionManagerRef)arg1 ;
-(BOOL)isAirPlayVideoActive;
-(id)description;
-(void)dealloc;
@end

