/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMControlStatusIndicator.h>

@class CAMLivePhotoAnimationCache;

@interface CAMLivePhotoStatusIndicator : CAMControlStatusIndicator {

	long long _livePhotoMode;
	CAMLivePhotoAnimationCache* __animationCache;

}

@property (nonatomic,retain) CAMLivePhotoAnimationCache * _animationCache;              //@synthesize _animationCache=__animationCache - In the implementation block
@property (assign,nonatomic) long long livePhotoMode;                                   //@synthesize livePhotoMode=_livePhotoMode - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canAnimate;
-(long long)livePhotoMode;
-(BOOL)shouldUseOutline;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(void)preloadAnimationFrames;
-(void)setLivePhotoMode:(long long)arg1 ;
-(CAMLivePhotoAnimationCache *)_animationCache;
-(void)set_animationCache:(CAMLivePhotoAnimationCache *)arg1 ;
-(id)imageAnimationFramesForCurrentState;
@end

