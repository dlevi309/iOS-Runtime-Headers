/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


#import <QuickLook/QuickLook-Structs.h>
@class QLPXChangeDirectionNumberFilter, QLPXInitialHysteresisNumberFilter;

@interface QLPXSwipeDownTracker : NSObject {

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
	QLPXChangeDirectionNumberFilter* _verticalDirectionFilter;
	QLPXInitialHysteresisNumberFilter* _horizontalTranslationFilter;
	CGPoint _trackedCenter;
	CGRect _trackedBounds;
	QLPXDisplayVelocity _trackedVelocity;
	CGAffineTransform _trackedTransform;

}

@property (assign,nonatomic) CGPoint trackedCenter;                                                        //@synthesize trackedCenter=_trackedCenter - In the implementation block
@property (assign,nonatomic) CGRect trackedBounds;                                                         //@synthesize trackedBounds=_trackedBounds - In the implementation block
@property (assign,nonatomic) CGAffineTransform trackedTransform;                                           //@synthesize trackedTransform=_trackedTransform - In the implementation block
@property (assign,nonatomic) QLPXDisplayVelocity trackedVelocity;                                          //@synthesize trackedVelocity=_trackedVelocity - In the implementation block
@property (assign,nonatomic) double dismissalProgress;                                                     //@synthesize dismissalProgress=_dismissalProgress - In the implementation block
@property (assign,nonatomic) BOOL shouldFinishDismissal;                                                   //@synthesize shouldFinishDismissal=_shouldFinishDismissal - In the implementation block
@property (nonatomic,retain) QLPXChangeDirectionNumberFilter * verticalDirectionFilter;                    //@synthesize verticalDirectionFilter=_verticalDirectionFilter - In the implementation block
@property (nonatomic,retain) QLPXInitialHysteresisNumberFilter * horizontalTranslationFilter;              //@synthesize horizontalTranslationFilter=_horizontalTranslationFilter - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                                 //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) double finalAnimationDuration;                                              //@synthesize finalAnimationDuration=_finalAnimationDuration - In the implementation block
@property (nonatomic,readonly) double finalAnimationSpringDamping;                                         //@synthesize finalAnimationSpringDamping=_finalAnimationSpringDamping - In the implementation block
-(id)init;
-(unsigned long long)options;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(CGPoint)trackedCenter;
-(CGAffineTransform)trackedTransform;
-(QLPXDisplayVelocity)trackedVelocity;
-(double)finalAnimationSpringDamping;
-(void)startTrackingCenter:(CGPoint)arg1 bounds:(CGRect)arg2 transform:(CGAffineTransform)arg3 withInitialGestureLocation:(CGPoint)arg4 ;
-(double)dismissalProgress;
-(void)trackGestureTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)setTrackedCenter:(CGPoint)arg1 ;
-(void)setTrackedBounds:(CGRect)arg1 ;
-(void)setTrackedTransform:(CGAffineTransform)arg1 ;
-(QLPXChangeDirectionNumberFilter *)verticalDirectionFilter;
-(void)setVerticalDirectionFilter:(QLPXChangeDirectionNumberFilter *)arg1 ;
-(QLPXInitialHysteresisNumberFilter *)horizontalTranslationFilter;
-(void)setHorizontalTranslationFilter:(QLPXInitialHysteresisNumberFilter *)arg1 ;
-(void)setTrackedVelocity:(QLPXDisplayVelocity)arg1 ;
-(void)setDismissalProgress:(double)arg1 ;
-(void)setShouldFinishDismissal:(BOOL)arg1 ;
-(BOOL)shouldFinishDismissal;
-(CGRect)trackedBounds;
-(double)finalAnimationDuration;
@end

