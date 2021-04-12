/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBIconAccessoryView.h>

@protocol SBIconListLayout;
@class SBFParallaxSettings, NSString, UIImageView, SBIconAccessoryImage, SBDarkeningImageView;

@interface SBIconBadgeView : UIView <PTSettingsKeyObserver, SBIconAccessoryView> {

	NSString* _text;
	UIImageView* _incomingTextView;
	BOOL _displayingAccessory;
	SBIconAccessoryImage* _backgroundImage;
	SBDarkeningImageView* _backgroundView;
	SBIconAccessoryImage* _textImage;
	UIImageView* _textView;
	SBFParallaxSettings* _parallaxSettings;
	id<SBIconListLayout> _listLayout;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SBFParallaxSettings * parallaxSettings;              //@synthesize parallaxSettings=_parallaxSettings - In the implementation block
@property (nonatomic,retain) id<SBIconListLayout> listLayout;                     //@synthesize listLayout=_listLayout - In the implementation block
+(CGPoint)_textOffset;
+(id)backgroundImageCache;
+(id)_checkoutImageForText:(id)arg1 font:(id)arg2 highlighted:(BOOL)arg3 ;
+(double)_textPadding;
+(id)_createImageForText:(id)arg1 font:(id)arg2 highlighted:(BOOL)arg3 ;
-(id)init;
-(void)dealloc;
-(void)prepareForReuse;
-(CGSize)badgeSize;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)font;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_applyParallaxSettings;
-(void)setListLayout:(id<SBIconListLayout>)arg1 ;
-(id<SBIconListLayout>)listLayout;
-(CGPoint)accessoryCenterForIconBounds:(CGRect)arg1 ;
-(void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 animator:(id)arg3 ;
-(void)setParallaxSettings:(SBFParallaxSettings *)arg1 ;
-(BOOL)displayingAccessory;
-(void)configureForIcon:(id)arg1 infoProvider:(id)arg2 ;
-(void)setAccessoryBrightness:(double)arg1 ;
-(SBFParallaxSettings *)parallaxSettings;
-(void)_clearText;
-(id)_checkoutBackgroundImage;
-(void)_configureAnimatedForText:(id)arg1 highlighted:(BOOL)arg2 animator:(id)arg3 ;
-(void)_resizeForTextImage:(id)arg1 ;
-(CGPoint)layoutOffset;
-(CGSize)intrinsicContentSizeForTextImage:(id)arg1 ;
-(void)_crossfadeToTextImage:(id)arg1 animator:(id)arg2 ;
-(void)_zoomInWithTextImage:(id)arg1 animator:(id)arg2 ;
-(void)_zoomOutWithAnimator:(id)arg1 ;
@end

