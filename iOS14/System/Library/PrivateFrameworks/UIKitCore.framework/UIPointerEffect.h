/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITargetedPreview, NSValue;

@interface UIPointerEffect : NSObject <NSCopying> {

	UITargetedPreview* _preview;

}

@property (nonatomic,copy) UITargetedPreview * preview;                          //@synthesize preview=_preview - In the implementation block
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) unsigned long long constrainedAxes; 
@property (nonatomic,readonly) NSValue * overrideSlipPoints; 
@property (nonatomic,readonly) CGPoint slipFactor; 
@property (nonatomic,readonly) double maxSlip; 
@property (nonatomic,readonly) double parallaxAmount; 
@property (nonatomic,readonly) double scaleUpPoints; 
@property (nonatomic,readonly) double defaultPointerCornerRadius; 
@property (nonatomic,readonly) double scaleUpAnimationResponse; 
@property (nonatomic,readonly) double scaleUpAnimationDampingRatio; 
@property (nonatomic,readonly) double dampedAnimationResponse; 
@property (nonatomic,readonly) double dampedAnimationDampingRatio; 
@property (nonatomic,readonly) BOOL useSoftShadow; 
+(id)effectWithPreview:(id)arg1 ;
-(UITargetedPreview *)preview;
-(double)maxSlip;
-(unsigned long long)options;
-(id)settings;
-(void)setPreview:(UITargetedPreview *)arg1 ;
-(unsigned long long)hash;
-(CGPoint)slipFactor;
-(double)parallaxAmount;
-(double)scaleUpPoints;
-(BOOL)useSoftShadow;
-(double)defaultPointerCornerRadius;
-(double)scaleUpAnimationResponse;
-(double)scaleUpAnimationDampingRatio;
-(double)dampedAnimationResponse;
-(double)dampedAnimationDampingRatio;
-(NSValue *)overrideSlipPoints;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)constrainedAxes;
@end

