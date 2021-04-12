/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLPUTimedAnimationGroup.h>

@class CALayer;

@interface QLPULayerAnimationGroup : QLPUTimedAnimationGroup {

	BOOL _areTrackedAnimationsPaused;
	CALayer* _referenceLayer;

}

@property (nonatomic,readonly) CALayer * referenceLayer;              //@synthesize referenceLayer=_referenceLayer - In the implementation block
-(id)init;
-(double)currentTime;
-(id)initWithReferenceLayer:(id)arg1 ;
-(CALayer *)referenceLayer;
-(void)updateAnimations;
@end

