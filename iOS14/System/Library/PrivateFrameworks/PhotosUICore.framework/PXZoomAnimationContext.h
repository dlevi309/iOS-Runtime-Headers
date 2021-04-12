/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXNonuniformTransform, PXRegionOfInterest;


@protocol PXZoomAnimationContext <NSObject>
@property (nonatomic,readonly) long long animationType; 
@property (nonatomic,readonly) double animationDuration; 
@property (nonatomic,readonly) double fromAlpha; 
@property (nonatomic,readonly) PXNonuniformTransform * fromTransform; 
@property (nonatomic,readonly) PXRegionOfInterest * fromRegionOfInterest; 
@property (nonatomic,readonly) double toAlpha; 
@property (nonatomic,readonly) PXNonuniformTransform * toTransform; 
@property (nonatomic,readonly) PXRegionOfInterest * toRegionOfInterest; 
@property (getter=isMatchingRegionsOfInterest,nonatomic,readonly) BOOL matchingRegionsOfInterest; 
@property (nonatomic,readonly) BOOL keepsSourceRegionOfInterestContent; 
@required
-(double)animationDuration;
-(double)toAlpha;
-(double)fromAlpha;
-(long long)willBeginAnimation;
-(void)didEndAnimation:(long long)arg1;
-(PXNonuniformTransform *)fromTransform;
-(PXRegionOfInterest *)fromRegionOfInterest;
-(PXNonuniformTransform *)toTransform;
-(PXRegionOfInterest *)toRegionOfInterest;
-(BOOL)isMatchingRegionsOfInterest;
-(long long)animationType;
-(BOOL)keepsSourceRegionOfInterestContent;
-(void)registerCleanupHandler:(/*^block*/id)arg1;

@end

