/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CBFilter.h>

@interface CBProxFilter : CBFilter {

	float _proxReleaseTime;
	BOOL _proxHasJustBeenRemoved;
	float _proxTriggerDelay;
	BOOL _triggered;

}

@property (assign,getter=isTriggered,nonatomic) BOOL triggered;              //@synthesize triggered=_triggered - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setTriggered:(BOOL)arg1 ;
-(id)handleALSEvent:(id)arg1 ;
-(id)handleProximityEvent:(id)arg1 ;
-(id)filterEvent:(id)arg1 ;
-(BOOL)isTriggered;
@end

