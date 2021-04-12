/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKitUI.framework/ShazamKitUI
*/

#import <QuartzCore/CALayer.h>

@class NSArray, CAMediaTimingFunction;

@interface SHTaggingViewInnerCirclesLayer : CALayer {

	NSArray* _innerCircleLayers;

}

@property (nonatomic,retain) NSArray * innerCircleLayers;                                    //@synthesize innerCircleLayers=_innerCircleLayers - In the implementation block
@property (nonatomic,readonly) CAMediaTimingFunction * inOutSineTimingFunction; 
@property (nonatomic,readonly) CAMediaTimingFunction * linearTimingFunction; 
-(void)layoutSublayers;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(CAMediaTimingFunction *)linearTimingFunction;
-(void)setupSublayers;
-(id)buildInnerCircleLayers;
-(void)setInnerCircleLayers:(NSArray *)arg1 ;
-(NSArray *)innerCircleLayers;
-(void)addCoreAnimationToInnerCircleLayer:(id)arg1 withStartOffset:(double)arg2 ;
-(void)addScaleNullAnimationToInnerCircleLayer:(id)arg1 ;
-(id)innerCircleCoreAnimation;
-(id)innerCircleScaleNullAnimation;
-(CAMediaTimingFunction *)inOutSineTimingFunction;
-(void)startTaggingAnimation;
@end

