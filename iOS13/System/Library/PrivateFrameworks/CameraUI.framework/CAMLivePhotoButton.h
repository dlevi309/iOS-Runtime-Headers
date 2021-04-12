/*
* Generated on Monday, March 1, 2021 at 2:33:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMExpandableMenuButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@class UIImageView, CAMLivePhotoAnimationCache, NSString;

@interface CAMLivePhotoButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider> {

	BOOL _allowsAutomaticMode;
	UIImageView* __imageView;
	CAMLivePhotoAnimationCache* __animationCache;

}

@property (nonatomic,readonly) UIImageView * _imageView;                                //@synthesize _imageView=__imageView - In the implementation block
@property (nonatomic,retain) CAMLivePhotoAnimationCache * _animationCache;              //@synthesize _animationCache=__animationCache - In the implementation block
@property (assign,nonatomic) long long livePhotoMode; 
@property (assign,nonatomic) BOOL allowsAutomaticMode;                                  //@synthesize allowsAutomaticMode=_allowsAutomaticMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)enablingAnimationDuration;
-(UIImageView *)_imageView;
-(void)reloadData;
-(id)headerView;
-(void)setSelectedIndex:(long long)arg1 ;
-(id)_availableModes;
-(void)_updateBaseImage;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(long long)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(void)finishExpansionAnimated:(BOOL)arg1 ;
-(long long)livePhotoMode;
-(id)imageForAccessibilityHUD;
-(void)interruptEnablingAnimation;
-(void)preloadEnablingAnimation;
-(void)setAllowsAutomaticMode:(BOOL)arg1 needsReloadData:(BOOL)arg2 ;
-(void)setLivePhotoMode:(long long)arg1 ;
-(void)performEnablingAnimation;
-(id)_currentBaseImage;
-(long long)modeForIndex:(long long)arg1 ;
-(long long)indexForMode:(long long)arg1 ;
-(BOOL)allowsAutomaticMode;
-(CAMLivePhotoAnimationCache *)_animationCache;
-(void)set_animationCache:(CAMLivePhotoAnimationCache *)arg1 ;
-(void)_loadAnimationCacheIfNeeded;
-(void)_updateAnimationImages;
-(void)setAllowsAutomaticMode:(BOOL)arg1 ;
-(void)prepareHeaderViewForExpanding:(BOOL)arg1 ;
@end

