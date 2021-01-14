/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)livePhotoMode;
-(void)setLivePhotoMode:(long long)arg1 ;
-(id)imageForAccessibilityHUD;
-(UIImageView *)_imageView;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(id)_availableModes;
-(CAMLivePhotoAnimationCache *)_animationCache;
-(void)prepareHeaderViewForExpanding:(BOOL)arg1 ;
-(void)set_animationCache:(CAMLivePhotoAnimationCache *)arg1 ;
-(BOOL)allowsAutomaticMode;
-(void)setAllowsAutomaticMode:(BOOL)arg1 ;
-(void)finishExpansionAnimated:(BOOL)arg1 ;
-(long long)indexForMode:(long long)arg1 ;
-(void)setSelectedIndex:(long long)arg1 ;
-(void)preloadEnablingAnimation;
-(long long)modeForIndex:(long long)arg1 ;
-(void)interruptEnablingAnimation;
-(id)_currentBaseImage;
-(void)reloadData;
-(void)setAllowsAutomaticMode:(BOOL)arg1 needsReloadData:(BOOL)arg2 ;
-(void)performEnablingAnimation;
-(long long)numberOfMenuItems;
-(void)_updateBaseImage;
-(void)_updateAnimationImages;
-(void)_loadAnimationCacheIfNeeded;
-(id)headerView;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
@end

