/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface _UIContentViewAnimationStateUpdatingLayer : CALayer {

	/*^block*/id _progressHandler;
	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
+(id)layerForView:(id)arg1 withUpdateHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(double)progress;
-(id)initWithLayer:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)animationCompletedWithPosition:(long long)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

