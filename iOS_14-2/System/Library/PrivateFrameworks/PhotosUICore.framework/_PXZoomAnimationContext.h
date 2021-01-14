/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXZoomAnimationContext.h>

@protocol OS_dispatch_group;
@class PXNonuniformTransform, PXRegionOfInterest, NSObject, NSMutableArray, NSString;

@interface _PXZoomAnimationContext : NSObject <PXZoomAnimationContext> {

	NSObject*<OS_dispatch_group> _animationGroup;
	NSMutableArray* _cleanupHandlers;
	BOOL _matchingRegionsOfInterest;
	BOOL _keepsSourceRegionOfInterestContent;
	long long _animationType;
	double _animationDuration;
	double _fromAlpha;
	PXNonuniformTransform* _fromTransform;
	PXRegionOfInterest* _fromRegionOfInterest;
	double _toAlpha;
	PXNonuniformTransform* _toTransform;
	PXRegionOfInterest* _toRegionOfInterest;
	/*^block*/id __allAnimationsCompletionHandler;

}

@property (setter=_setAllAnimationsCompletionHandler:,nonatomic,copy) id _allAnimationsCompletionHandler;              //@synthesize _allAnimationsCompletionHandler=__allAnimationsCompletionHandler - In the implementation block
@property (assign,nonatomic) long long animationType;                                                                  //@synthesize animationType=_animationType - In the implementation block
@property (assign,nonatomic) double animationDuration;                                                                 //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) double fromAlpha;                                                                         //@synthesize fromAlpha=_fromAlpha - In the implementation block
@property (nonatomic,retain) PXNonuniformTransform * fromTransform;                                                    //@synthesize fromTransform=_fromTransform - In the implementation block
@property (nonatomic,retain) PXRegionOfInterest * fromRegionOfInterest;                                                //@synthesize fromRegionOfInterest=_fromRegionOfInterest - In the implementation block
@property (assign,nonatomic) double toAlpha;                                                                           //@synthesize toAlpha=_toAlpha - In the implementation block
@property (nonatomic,retain) PXNonuniformTransform * toTransform;                                                      //@synthesize toTransform=_toTransform - In the implementation block
@property (nonatomic,retain) PXRegionOfInterest * toRegionOfInterest;                                                  //@synthesize toRegionOfInterest=_toRegionOfInterest - In the implementation block
@property (assign,getter=isMatchingRegionsOfInterest,nonatomic) BOOL matchingRegionsOfInterest;                        //@synthesize matchingRegionsOfInterest=_matchingRegionsOfInterest - In the implementation block
@property (assign,nonatomic) BOOL keepsSourceRegionOfInterestContent;                                                  //@synthesize keepsSourceRegionOfInterestContent=_keepsSourceRegionOfInterestContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)animationDuration;
-(id)init;
-(double)toAlpha;
-(void)setAnimationType:(long long)arg1 ;
-(double)fromAlpha;
-(long long)willBeginAnimation;
-(void)didEndAnimation:(long long)arg1 ;
-(PXNonuniformTransform *)fromTransform;
-(PXRegionOfInterest *)fromRegionOfInterest;
-(PXNonuniformTransform *)toTransform;
-(PXRegionOfInterest *)toRegionOfInterest;
-(BOOL)isMatchingRegionsOfInterest;
-(long long)animationType;
-(void)notifyWhenAllAnimationsCompleted:(/*^block*/id)arg1 ;
-(void)setFromAlpha:(double)arg1 ;
-(void)setFromTransform:(PXNonuniformTransform *)arg1 ;
-(void)setFromRegionOfInterest:(PXRegionOfInterest *)arg1 ;
-(void)setToAlpha:(double)arg1 ;
-(void)setToTransform:(PXNonuniformTransform *)arg1 ;
-(void)setToRegionOfInterest:(PXRegionOfInterest *)arg1 ;
-(void)setMatchingRegionsOfInterest:(BOOL)arg1 ;
-(void)setKeepsSourceRegionOfInterestContent:(BOOL)arg1 ;
-(id)_allAnimationsCompletionHandler;
-(void)_setAllAnimationsCompletionHandler:(/*^block*/id)arg1 ;
-(void)cleanup;
-(BOOL)keepsSourceRegionOfInterestContent;
-(void)registerCleanupHandler:(/*^block*/id)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
@end

