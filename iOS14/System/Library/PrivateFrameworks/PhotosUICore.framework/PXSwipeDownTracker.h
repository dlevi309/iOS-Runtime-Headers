/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXChangeDirectionNumberFilter, PXInitialHysteresisNumberFilter;

@interface PXSwipeDownTracker : NSObject {

	BOOL _didStartTracking;
	CGPoint _initialTouchLocation;
	CGPoint _initialCenter;
	CGRect _initialBounds;
	CGAffineTransform _initialTransform;
	BOOL _shouldFinishDismissal;
	unsigned long long _options;
	double _dismissalProgress;
	double _finalAnimationDuration;
	double _finalAnimationSpringDamping;
	PXChangeDirectionNumberFilter* _verticalDirectionFilter;
	PXInitialHysteresisNumberFilter* _horizontalTranslationFilter;
	CGPoint _trackedCenter;
	CGRect _trackedBounds;
	PXDisplayVelocity _trackedVelocity;
	CGAffineTransform _trackedTransform;

}

@property (assign,nonatomic) CGPoint trackedCenter;                                                      //@synthesize trackedCenter=_trackedCenter - In the implementation block
@property (assign,nonatomic) CGRect trackedBounds;                                                       //@synthesize trackedBounds=_trackedBounds - In the implementation block
@property (assign,nonatomic) CGAffineTransform trackedTransform;                                         //@synthesize trackedTransform=_trackedTransform - In the implementation block
@property (assign,nonatomic) PXDisplayVelocity trackedVelocity;                                          //@synthesize trackedVelocity=_trackedVelocity - In the implementation block
@property (assign,nonatomic) double dismissalProgress;                                                   //@synthesize dismissalProgress=_dismissalProgress - In the implementation block
@property (assign,nonatomic) BOOL shouldFinishDismissal;                                                 //@synthesize shouldFinishDismissal=_shouldFinishDismissal - In the implementation block
@property (nonatomic,retain) PXChangeDirectionNumberFilter * verticalDirectionFilter;                    //@synthesize verticalDirectionFilter=_verticalDirectionFilter - In the implementation block
@property (nonatomic,retain) PXInitialHysteresisNumberFilter * horizontalTranslationFilter;              //@synthesize horizontalTranslationFilter=_horizontalTranslationFilter - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                               //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) double finalAnimationDuration;                                            //@synthesize finalAnimationDuration=_finalAnimationDuration - In the implementation block
@property (nonatomic,readonly) double finalAnimationSpringDamping;                                       //@synthesize finalAnimationSpringDamping=_finalAnimationSpringDamping - In the implementation block
-(id)initWithOptions:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)options;
-(void)setDismissalProgress:(double)arg1 ;
-(void)setShouldFinishDismissal:(BOOL)arg1 ;
-(void)setTrackedCenter:(CGPoint)arg1 ;
-(void)setTrackedBounds:(CGRect)arg1 ;
-(void)setTrackedTransform:(CGAffineTransform)arg1 ;
-(void)setTrackedVelocity:(PXDisplayVelocity)arg1 ;
-(PXChangeDirectionNumberFilter *)verticalDirectionFilter;
-(void)setVerticalDirectionFilter:(PXChangeDirectionNumberFilter *)arg1 ;
-(PXInitialHysteresisNumberFilter *)horizontalTranslationFilter;
-(void)setHorizontalTranslationFilter:(PXInitialHysteresisNumberFilter *)arg1 ;
-(void)trackGestureTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(double)dismissalProgress;
-(void)startTrackingCenter:(CGPoint)arg1 bounds:(CGRect)arg2 transform:(CGAffineTransform)arg3 withInitialGestureLocation:(CGPoint)arg4 ;
-(BOOL)shouldFinishDismissal;
-(CGPoint)trackedCenter;
-(CGRect)trackedBounds;
-(CGAffineTransform)trackedTransform;
-(PXDisplayVelocity)trackedVelocity;
-(double)finalAnimationDuration;
-(double)finalAnimationSpringDamping;
@end

