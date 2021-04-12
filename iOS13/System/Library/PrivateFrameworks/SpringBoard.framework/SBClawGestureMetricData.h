/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBAWDMetricData.h>

@interface SBClawGestureMetricData : SBAWDMetricData {

	BOOL _didPressLock;
	BOOL _didPressVolumeUp;
	BOOL _didPressVolumeDown;
	BOOL _didTriggerSOS;
	unsigned long long _duration;

}

@property (assign,nonatomic) BOOL didPressLock;                        //@synthesize didPressLock=_didPressLock - In the implementation block
@property (assign,nonatomic) BOOL didPressVolumeUp;                    //@synthesize didPressVolumeUp=_didPressVolumeUp - In the implementation block
@property (assign,nonatomic) BOOL didPressVolumeDown;                  //@synthesize didPressVolumeDown=_didPressVolumeDown - In the implementation block
@property (assign,nonatomic) BOOL didTriggerSOS;                       //@synthesize didTriggerSOS=_didTriggerSOS - In the implementation block
@property (assign,nonatomic) unsigned long long duration;              //@synthesize duration=_duration - In the implementation block
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setDidPressLock:(BOOL)arg1 ;
-(void)setDidPressVolumeUp:(BOOL)arg1 ;
-(void)setDidPressVolumeDown:(BOOL)arg1 ;
-(void)setDidTriggerSOS:(BOOL)arg1 ;
-(BOOL)didPressLock;
-(BOOL)didPressVolumeUp;
-(BOOL)didPressVolumeDown;
-(BOOL)didTriggerSOS;
@end

