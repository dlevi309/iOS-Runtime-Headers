/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPlaying;
-(id)initWithDuration:(double)arg1 ;
-(double)duration;
-(void)dealloc;
-(void)playSound;
-(void)stopSound;
-(void)_sync_playSound;
-(void)_sync_stopSound;
-(void)_reallyPlaySound;
-(void)_reallyStopSound;
-(BOOL)playsOnce;
@end

