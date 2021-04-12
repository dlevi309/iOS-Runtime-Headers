/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBIconObserver.h>
#import <libobjc.A.dylib/SBIconProgressViewDelegate.h>
#import <libobjc.A.dylib/SBHIconImageCacheObserver.h>
#import <libobjc.A.dylib/SBReusableView.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class UIImageView, SBIconProgressView, SBIcon, NSString, SBIconView, SBHIconImageCache, UIImage;

@interface SBIconImageView : UIView <SBIconObserver, SBIconProgressViewDelegate, SBHIconImageCacheObserver, SBReusableView, BSDescriptionProviding> {

	UIImageView* _overlayView;
	SBIconProgressView* _progressView;
	BOOL _paused;
	BOOL _showsSquareCorners;
	BOOL _jittering;
	SBIcon* _icon;
	NSString* _location;
	SBIconView* _iconView;
	SBHIconImageCache* _iconImageCache;
	double _brightness;
	double _overlayAlpha;

}

@property (nonatomic,copy) NSString * location;                               //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double overlayAlpha;                             //@synthesize overlayAlpha=_overlayAlpha - In the implementation block
@property (nonatomic,readonly) SBIcon * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic,__weak) SBIconView * iconView;                    //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) SBHIconImageCache * iconImageCache;              //@synthesize iconImageCache=_iconImageCache - In the implementation block
@property (assign,nonatomic) double brightness;                               //@synthesize brightness=_brightness - In the implementation block
@property (nonatomic,readonly) UIImage * displayedImage; 
@property (assign,getter=isPaused,nonatomic) BOOL paused;                     //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) BOOL showsSquareCorners;                         //@synthesize showsSquareCorners=_showsSquareCorners - In the implementation block
@property (assign,getter=isJittering,nonatomic) BOOL jittering;               //@synthesize jittering=_jittering - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(BOOL)isPaused;
-(void)prepareForReuse;
-(NSString *)location;
-(double)brightness;
-(void)setBrightness:(double)arg1 ;
-(id)snapshot;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CGRect)visibleBounds;
-(SBIcon *)icon;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(SBIconView *)iconView;
-(void)setIconView:(SBIconView *)arg1 ;
-(id)contentsImage;
-(void)_clearProgressView;
-(void)progressViewCanBeRemoved:(id)arg1 ;
-(SBIconImageInfo)iconImageInfo;
-(SBHIconImageCache *)iconImageCache;
-(void)setIconImageCache:(SBHIconImageCache *)arg1 ;
-(void)setIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateImageAnimated:(BOOL)arg1 ;
-(void)setShowsSquareCorners:(BOOL)arg1 ;
-(void)setProgressAlpha:(double)arg1 ;
-(void)iconViewLegibilitySettingsDidChange;
-(void)setJittering:(BOOL)arg1 ;
-(void)iconViewFolderIconImageCacheDidChange;
-(void)setProgressState:(long long)arg1 paused:(BOOL)arg2 percent:(double)arg3 animated:(BOOL)arg4 ;
-(UIImage *)displayedImage;
-(void)iconImageDidUpdate:(id)arg1 ;
-(BOOL)showsSquareCorners;
-(BOOL)isJittering;
-(void)clearCachedImages;
-(id)squareContentsImage;
-(void)_updateOverlayImage;
-(void)_updateOverlayAlpha;
-(void)_updateProgressMask;
-(id)squareDarkeningOverlayImage;
-(id)darkeningOverlayImage;
-(id)_currentOverlayImage;
-(id)_iconBasicOverlayImage;
-(id)_iconSquareOverlayImage;
-(double)overlayAlpha;
-(void)iconImageCache:(id)arg1 didUpdateImageForIcon:(id)arg2 ;
-(void)setOverlayAlpha:(double)arg1 ;
-(id)_generateSquareContentsImage;
@end

