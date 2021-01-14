/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIAnimationController.h>

@interface SBDismissOverlaysAnimationController : SBUIAnimationController {

	unsigned long long _dismissOptions;

}

@property (nonatomic,readonly) unsigned long long dismissOptions;              //@synthesize dismissOptions=_dismissOptions - In the implementation block
+(unsigned long long)_overlaysToDismissForOptions:(unsigned long long)arg1 ;
+(BOOL)willDismissOverlaysForDismissOptions:(unsigned long long)arg1 ;
-(BOOL)_canBeInterrupted;
-(id)animationSettings;
-(void)_startAnimation;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(id)initWithTransitionContextProvider:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)dismissOptions;
@end

