/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <libobjc.A.dylib/STKSound.h>

@class BSTimer, NSString;

@interface STKBaseSound : NSObject <STKSound> {

	BSTimer* _timer;
	double _duration;
	BOOL _playsOnce;
	BOOL _isPlaying;

}

@property (nonatomic,readonly) double duration;                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL playsOnce;                      //@synthesize playsOnce=_playsOnce - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying;                      //@synthesize isPlaying=_isPlaying - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)duration;
-(BOOL)isPlaying;
-(id)initWithDuration:(double)arg1 ;
-(void)playSound;
-(void)stopSound;
-(void)_sync_playSound;
-(void)_sync_stopSound;
-(void)_reallyPlaySound;
-(void)_reallyStopSound;
-(BOOL)playsOnce;
@end

