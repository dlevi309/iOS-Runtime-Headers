/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXZoomAnimationContext.h>

@protocol PXZoomAnimationContext;
@class PXNonuniformTransform, UIView, PXRegionOfInterest, NSString;

@interface _PXTransformedViewContentZoomAnimationContext : NSObject <PXZoomAnimationContext> {

	double _fromAlpha;
	PXNonuniformTransform* _fromTransform;
	double _toAlpha;
	PXNonuniformTransform* _toTransform;
	UIView* _transformedView;
	id<PXZoomAnimationContext> _context;

}

@property (nonatomic,readonly) UIView * transformedView;                                                       //@synthesize transformedView=_transformedView - In the implementation block
@property (nonatomic,readonly) id<PXZoomAnimationContext> context;                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) long long animationType; 
@property (nonatomic,readonly) double animationDuration; 
@property (nonatomic,readonly) double fromAlpha;                                                               //@synthesize fromAlpha=_fromAlpha - In the implementation block
@property (nonatomic,readonly) PXNonuniformTransform * fromTransform;                                          //@synthesize fromTransform=_fromTransform - In the implementation block
@property (nonatomic,readonly) PXRegionOfInterest * fromRegionOfInterest; 
@property (nonatomic,readonly) double toAlpha;                                                                 //@synthesize toAlpha=_toAlpha - In the implementation block
@property (nonatomic,readonly) PXNonuniformTransform * toTransform;                                            //@synthesize toTransform=_toTransform - In the implementation block
@property (nonatomic,readonly) PXRegionOfInterest * toRegionOfInterest; 
@property (getter=isMatchingRegionsOfInterest,nonatomic,readonly) BOOL matchingRegionsOfInterest; 
@property (nonatomic,readonly) BOOL keepsSourceRegionOfInterestContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)animationDuration;
-(double)toAlpha;
-(id<PXZoomAnimationContext>)context;
-(double)fromAlpha;
-(long long)willBeginAnimation;
-(void)didEndAnimation:(long long)arg1 ;
-(PXNonuniformTransform *)fromTransform;
-(PXRegionOfInterest *)fromRegionOfInterest;
-(PXNonuniformTransform *)toTransform;
-(PXRegionOfInterest *)toRegionOfInterest;
-(BOOL)isMatchingRegionsOfInterest;
-(UIView *)transformedView;
-(long long)animationType;
-(id)initWithTransformedView:(id)arg1 context:(id)arg2 ;
-(BOOL)keepsSourceRegionOfInterestContent;
-(void)registerCleanupHandler:(/*^block*/id)arg1 ;
@end

