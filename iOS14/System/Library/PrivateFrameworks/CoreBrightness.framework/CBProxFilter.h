/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTriggered:(BOOL)arg1 ;
-(id)init;
-(id)handleProximityEvent:(id)arg1 ;
-(id)filterEvent:(id)arg1 ;
-(BOOL)isTriggered;
-(id)handleALSEvent:(id)arg1 ;
-(void)dealloc;
@end

