/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(WebBookmark *)bookmark;
-(void)setBookmark:(WebBookmark *)arg1 ;
-(void)_setState:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setLeadingImage:(UIImage *)arg1 ;
-(UIImage *)leadingImage;
-(void)updateBookmarkData;
-(void)_cancelTouchIconRequest;
-(id)_effectiveBackgroundColor;
-(void)_updateMonogramLabelSizeAndFont;
-(CGRect)_imageFrame;
-(void)_setSiteIcon:(id)arg1 withBackgroundColor:(id)arg2 ;
-(void)_displayDefaultFolderIcon;
-(void)_updateSiteIconViewWithTouchIconResponse:(id)arg1 ;
-(id)_tintedFolderImage;
-(void)_setGlyph:(id)arg1 withBackgroundColor:(id)arg2 ;
-(void)_setMonogramWithString:(id)arg1 backgroundColor:(id)arg2 ;
-(void)_setImage:(id)arg1 withBackgroundColor:(id)arg2 ;
-(double)_monogramFontSize;
-(long long)_inferredIconSize;
-(void)setShouldUseModernStyling:(BOOL)arg1 ;
-(void)setShouldShowDropShadow:(BOOL)arg1 ;
-(id<_SFSiteIconViewUpdateObserver>)updateObserver;
-(void)setUpdateObserver:(id<_SFSiteIconViewUpdateObserver>)arg1 ;
-(BOOL)shouldUseModernStyling;
-(BOOL)shouldShowDropShadow;
@end

