/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateAnimations;
-(CALayer *)referenceLayer;
-(id)initWithReferenceLayer:(id)arg1 ;
@end

