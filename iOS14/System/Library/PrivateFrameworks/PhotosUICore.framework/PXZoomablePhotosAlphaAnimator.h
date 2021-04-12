/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>

@class PXDisplayLink, NSArray;

@interface PXZoomablePhotosAlphaAnimator : PXObservable {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	PXDisplayLink* _displayLink;
	double _lastTickTime;
	double _currentDirection;
	double _directionAnchorColumnIndex;
	double _columnIndexDelta;
	double _columnIndexVelocity;
	long long _layerCount;
	PXAlphaLayer* _layers[10];
	PXAlphaTransitionInfo* _transitionInfos[9];
	BOOL _isPerformingChangesWithoutAnimation;
	BOOL _isAnimating;
	BOOL _isBeingMutated;
	NSArray* _allowedColumns;
	double _columnIndex;
	double _targetColumnIndex;
	double _presentationColumnIndex;
	long long _maxColumnsForAspectFit;
	double _autoFadeAmount;
	double _presentationAutoFadeAmount;
	double _autoFadeColumnIndex;

}

@property (assign,nonatomic) double presentationColumnIndex;                  //@synthesize presentationColumnIndex=_presentationColumnIndex - In the implementation block
@property (assign,nonatomic) double presentationAutoFadeAmount;               //@synthesize presentationAutoFadeAmount=_presentationAutoFadeAmount - In the implementation block
@property (assign,nonatomic) double autoFadeColumnIndex;                      //@synthesize autoFadeColumnIndex=_autoFadeColumnIndex - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                                //@synthesize isAnimating=_isAnimating - In the implementation block
@property (nonatomic,readonly) NSArray * allowedColumns;                      //@synthesize allowedColumns=_allowedColumns - In the implementation block
@property (nonatomic,readonly) double columnIndex;                            //@synthesize columnIndex=_columnIndex - In the implementation block
@property (nonatomic,readonly) double targetColumnIndex;                      //@synthesize targetColumnIndex=_targetColumnIndex - In the implementation block
@property (nonatomic,readonly) long long maxColumnsForAspectFit;              //@synthesize maxColumnsForAspectFit=_maxColumnsForAspectFit - In the implementation block
@property (nonatomic,readonly) double autoFadeAmount;                         //@synthesize autoFadeAmount=_autoFadeAmount - In the implementation block
@property (nonatomic,readonly) BOOL isBeingMutated;                           //@synthesize isBeingMutated=_isBeingMutated - In the implementation block
-(BOOL)isBeingMutated;
-(double)columnIndex;
-(double)presentationColumnIndex;
-(id)init;
-(void)_updateTransitionInfo;
-(void)setColumnIndex:(double)arg1 ;
-(void)setMaxColumnsForAspectFit:(long long)arg1 ;
-(void)didPerformChanges;
-(NSArray *)allowedColumns;
-(void)setIsAnimating:(BOOL)arg1 ;
-(PXAlphaTransitionInfo*)_transitionInfoForValue:(double)arg1 ;
-(void)_invalidatePresentationValue;
-(double)_targetColumnIndex;
-(id)description;
-(void)setPresentationAutoFadeAmount:(double)arg1 ;
-(void)setTargetColumnIndex:(double)arg1 ;
-(void)_updatePresentationValue;
-(void)setAutoFadeAmount:(double)arg1 ;
-(void)setAllowedColumns:(NSArray *)arg1 ;
-(double)targetColumnIndex;
-(void)setPresentationColumnIndex:(double)arg1 ;
-(void)_resetAnimatedValues;
-(long long)maxColumnsForAspectFit;
-(void)_tick:(id)arg1 ;
-(void)setAutoFadeColumnIndex:(double)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(double)presentationAutoFadeAmount;
-(BOOL)isAnimating;
-(void)performChangesWithAnimation:(BOOL)arg1 changeBlock:(/*^block*/id)arg2 ;
-(double)autoFadeAmount;
-(double)autoFadeColumnIndex;
-(void)dealloc;
@end

