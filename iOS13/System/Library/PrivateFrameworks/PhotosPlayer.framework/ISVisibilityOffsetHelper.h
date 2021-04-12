/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <libobjc.A.dylib/ISVisibilityOffsetComputer.h>

@class UIScrollView;

@interface ISVisibilityOffsetHelper : NSObject <ISVisibilityOffsetComputer> {

	long long _direction;
	double _maximumDistance;
	double _maximumDistanceLag;
	UIScrollView* __scrollView;
	CGPoint __targetContentOffset;

}

@property (setter=_setScrollView:,nonatomic,retain) UIScrollView * _scrollView;                         //@synthesize _scrollView=__scrollView - In the implementation block
@property (assign,setter=_setTargetContentOffset:,nonatomic) CGPoint _targetContentOffset;              //@synthesize _targetContentOffset=__targetContentOffset - In the implementation block
@property (assign,nonatomic) long long direction;                                                       //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double maximumDistance;                                                    //@synthesize maximumDistance=_maximumDistance - In the implementation block
@property (assign,nonatomic) double maximumDistanceLag;                                                 //@synthesize maximumDistanceLag=_maximumDistanceLag - In the implementation block
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(UIScrollView *)_scrollView;
-(CGPoint)_targetContentOffset;
-(void)setMaximumDistance:(double)arg1 ;
-(double)maximumDistance;
-(CGRect)visibleRectForScrollView:(id)arg1 ;
-(void)_setScrollView:(id)arg1 ;
-(void)computeVisibilityOffsetsInScrollView:(id)arg1 withTargetContentOffset:(CGPoint)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)getVisibility:(BOOL*)arg1 offset:(double*)arg2 targetVisibilityOffset:(double*)arg3 forView:(id)arg4 ;
-(CGRect)boundsForView:(id)arg1 inScrollView:(id)arg2 ;
-(void)_updateDirectionIfNeeded;
-(ISVisibilityRange)_visibilityRangeForRect:(CGRect)arg1 ;
-(double)maximumDistanceLag;
-(void)setMaximumDistanceLag:(double)arg1 ;
-(void)_setTargetContentOffset:(CGPoint)arg1 ;
@end

