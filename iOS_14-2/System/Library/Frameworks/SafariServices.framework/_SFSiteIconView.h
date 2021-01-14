/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _SFSiteIconViewUpdateObserver;
@class UIImageView, UIView, UILabel, UIColor, _SFHairlineBorderView, WebBookmark, UIImage;

@interface _SFSiteIconView : UIView {

	UIImageView* _imageView;
	UIView* _backgroundView;
	UILabel* _monogramLabel;
	long long _state;
	id _touchIconRequestToken;
	UIColor* _preferredBackgroundColor;
	UIImageView* _shadowView;
	_SFHairlineBorderView* _borderView;
	BOOL _modernImageIsTransparent;
	BOOL _shouldUseModernStyling;
	BOOL _shouldShowDropShadow;
	WebBookmark* _bookmark;
	UIImage* _leadingImage;
	id<_SFSiteIconViewUpdateObserver> _updateObserver;

}

@property (nonatomic,retain) WebBookmark * bookmark;                                               //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,retain) UIImage * leadingImage;                                               //@synthesize leadingImage=_leadingImage - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic,__weak) id<_SFSiteIconViewUpdateObserver> updateObserver;              //@synthesize updateObserver=_updateObserver - In the implementation block
@property (assign,nonatomic) BOOL shouldUseModernStyling;                                          //@synthesize shouldUseModernStyling=_shouldUseModernStyling - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDropShadow;                                            //@synthesize shouldShowDropShadow=_shouldShowDropShadow - In the implementation block
-(id)_effectiveBackgroundColor;
-(void)setBookmark:(WebBookmark *)arg1 ;
-(WebBookmark *)bookmark;
-(void)_setMonogramWithString:(id)arg1 backgroundColor:(id)arg2 ;
-(void)_setState:(long long)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShouldShowDropShadow:(BOOL)arg1 ;
-(void)_setGlyph:(id)arg1 withBackgroundColor:(id)arg2 ;
-(id)_glyphConfiguration;
-(CGRect)_imageFrame;
-(id)_tintedFolderImage;
-(void)_updateMonogramLabelSizeAndFont;
-(void)_updateSiteIconViewWithTouchIconResponse:(id)arg1 ;
-(UIImage *)image;
-(UIImage *)leadingImage;
-(void)_cancelTouchIconRequest;
-(BOOL)shouldShowDropShadow;
-(long long)_inferredIconSize;
-(void)layoutSubviews;
-(double)_monogramFontSize;
-(BOOL)shouldUseModernStyling;
-(void)setLeadingImage:(UIImage *)arg1 ;
-(void)_setSiteIcon:(id)arg1 withBackgroundColor:(id)arg2 ;
-(void)_updateGlyphConfiguration;
-(void)_setImage:(id)arg1 withBackgroundColor:(id)arg2 ;
-(void)updateBookmarkData;
-(id<_SFSiteIconViewUpdateObserver>)updateObserver;
-(void)_displayDefaultFolderIcon;
-(void)setUpdateObserver:(id<_SFSiteIconViewUpdateObserver>)arg1 ;
-(void)setShouldUseModernStyling:(BOOL)arg1 ;
-(void)dealloc;
@end

