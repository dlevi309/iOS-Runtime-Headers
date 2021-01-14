/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)livePhotoMode;
-(void)setLivePhotoMode:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CAMLivePhotoAnimationCache *)_animationCache;
-(void)set_animationCache:(CAMLivePhotoAnimationCache *)arg1 ;
-(BOOL)shouldUseOutline;
-(id)imageNameForCurrentState;
-(BOOL)canAnimate;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(BOOL)shouldShowSlashForCurrentState;
-(void)preloadAnimationFrames;
-(void)setLivePhotoMode:(long long)arg1 animated:(BOOL)arg2 ;
-(id)imageAnimationFramesForCurrentState;
@end

