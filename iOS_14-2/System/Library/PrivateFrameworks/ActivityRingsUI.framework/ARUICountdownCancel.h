/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ARUICountdownDefaultAnimation.h>
#import <libobjc.A.dylib/ARUICountdownAnimation.h>

@interface ARUICountdownCancel : ARUICountdownDefaultAnimation <ARUICountdownAnimation>
+(id)identifier;
-(id)timingFunction;
-(BOOL)cancelable;
-(double)delay;
-(id)identifier;
-(double)duration;
-(void)cancel;
-(void)applyToCountdownView:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

