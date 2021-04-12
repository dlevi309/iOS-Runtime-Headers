/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIAnimationController.h>

@interface SBDismissOverlaysAnimationController : SBUIAnimationController {

	unsigned long long _dismissOptions;

}

@property (nonatomic,readonly) unsigned long long dismissOptions;              //@synthesize dismissOptions=_dismissOptions - In the implementation block
+(BOOL)willDismissOverlaysForDismissOptions:(unsigned long long)arg1 ;
+(unsigned long long)_overlaysToDismissForOptions:(unsigned long long)arg1 ;
-(BOOL)_canBeInterrupted;
-(id)animationSettings;
-(void)_startAnimation;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(id)initWithTransitionContextProvider:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)dismissOptions;
@end

