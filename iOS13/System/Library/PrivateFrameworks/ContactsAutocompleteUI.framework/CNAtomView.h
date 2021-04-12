/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <UIKitCore/UIDefaultKeyboardInput.h>
#import <libobjc.A.dylib/CNAtomViewResembling.h>

@class UIFont, CNModernAtomIconView, UIColor, UIView, CNModernAtomBackgroundView, UILabel, UIActivityIndicatorView, NSString;

@interface CNAtomView : UIDefaultKeyboardInput <CNAtomViewResembling> {

	CNModernAtomIconView* _badgeIconView;
	CNModernAtomIconView* _accessoryIconView;
	UIColor* _effectiveTintColor;
	unsigned long long _disabledPresentationOptions;
	UIView* _baselineView;
	CNModernAtomBackgroundView* _background;
	UIView* _compositingView;
	UIView* _titleLabelFillView;
	UILabel* _label;
	UIActivityIndicatorView* _activityIndicator;
	double _scalingFactor;
	BOOL _wrappingSupported;
	BOOL _cachedIsWrappingEnabled;
	BOOL _isPrimaryAddressAtom;
	BOOL _separatorHidden;
	BOOL _separatorIsLeftAligned;
	BOOL _selected;
	NSString* _title;
	UIFont* _titleFont;
	unsigned long long _presentationOptions;
	double _firstLineIndent;

}

@property (nonatomic,readonly) CNModernAtomBackgroundView * backgroundView; 
@property (nonatomic,readonly) CNModernAtomIconView * badgeIconView;                         //@synthesize badgeIconView=_badgeIconView - In the implementation block
@property (nonatomic,readonly) CNModernAtomIconView * accessoryIconView;                     //@synthesize accessoryIconView=_accessoryIconView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;                  //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,copy) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                         //@synthesize label=_label - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) unsigned long long effectivePresentationOptions; 
@property (nonatomic,readonly) UIColor * effectiveTintColor; 
@property (nonatomic,readonly) CGRect selectionFrame; 
@property (assign,nonatomic) double firstLineIndent;                                         //@synthesize firstLineIndent=_firstLineIndent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isPrimaryAddressAtom;                                      //@synthesize isPrimaryAddressAtom=_isPrimaryAddressAtom - In the implementation block
@property (assign,nonatomic) BOOL hidesVIPIndicator; 
@property (assign,nonatomic) BOOL separatorHidden;                                           //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (assign,nonatomic) BOOL separatorIsLeftAligned;                                    //@synthesize separatorIsLeftAligned=_separatorIsLeftAligned - In the implementation block
@property (assign,nonatomic) double scale;                                                   //@synthesize scalingFactor=_scalingFactor - In the implementation block
@property (assign,nonatomic) int separatorStyle; 
@property (assign,nonatomic) unsigned long long presentationOptions;                         //@synthesize presentationOptions=_presentationOptions - In the implementation block
@property (nonatomic,readonly) CGPoint baselinePoint; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,retain) UIFont * titleFont;                                             //@synthesize titleFont=_titleFont - In the implementation block
+(id)defaultFont;
+(double)defaultHeight;
+(id)_defaultTintColor;
+(double)horizontalPadding;
+(BOOL)presentationOptions:(unsigned long long*)arg1 encodedIntoAddress:(id)arg2 ;
+(id)_defaultLabelAttributesWithWrappingEnabled:(BOOL)arg1 ;
+(id)primaryAtomFont;
+(id)_defaultLabelAttributesWithFont:(id)arg1 wrappingEnabled:(BOOL)arg2 ;
+(id)_failureTintColor;
+(id)_SMSTintColor;
+(id)_badgeImagesForPresentationOptions:(unsigned long long)arg1 iconOrder:(const unsigned long long*)arg2 orderingLength:(unsigned long long)arg3 tintColor:(id)arg4 large:(BOOL)arg5 variant:(int)arg6 ;
+(CGPoint)defaultBaselinePoint;
+(id)_downtimeBlockedTintColor;
-(NSString *)description;
-(double)scale;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setScale:(double)arg1 ;
-(BOOL)isSelected;
-(CGSize)intrinsicContentSize;
-(UILabel *)titleLabel;
-(CNModernAtomBackgroundView *)backgroundView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)edgeInsets;
-(void)tintColorDidChange;
-(id)viewForLastBaselineLayout;
-(void)_updateLabelAttributes;
-(void)setSelected:(BOOL)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)preferredWidth;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(CGPoint)baselinePoint;
-(CGRect)selectionFrame;
-(double)_leftInset;
-(double)_rightInset;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(double)_leftPadding;
-(double)_rightPadding;
-(void)setPresentationOptions:(unsigned long long)arg1 ;
-(unsigned long long)presentationOptions;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 style:(unsigned long long)arg3 ;
-(void)setSeparatorIsLeftAligned:(BOOL)arg1 ;
-(void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2 ;
-(UIColor *)effectiveTintColor;
-(id)initWithFrame:(CGRect)arg1 presentationOptions:(unsigned long long)arg2 separatorStyle:(int)arg3 wrappingSupported:(BOOL)arg4 ;
-(void)setFirstLineIndent:(double)arg1 ;
-(void)setIsPrimaryAddressAtom:(BOOL)arg1 ;
-(double)preferredWidthWithSizeConstraints:(CGSize)arg1 ;
-(BOOL)isPrimaryAddressAtom;
-(BOOL)hidesVIPIndicator;
-(void)setHidesVIPIndicator:(BOOL)arg1 ;
-(BOOL)separatorHidden;
-(BOOL)separatorIsLeftAligned;
-(double)firstLineIndent;
-(BOOL)isWrappingEnabled;
-(void)_updateIconViewsSemanticContentAttribute;
-(void)_updateSubviewsForWrapping;
-(void)_invalidatePresentationOptions;
-(int)_preferredIconVariant;
-(void)_setEffectiveTintColor:(id)arg1 ;
-(id)_chevronTextAttachment;
-(id)_centeredTextAttachmentWithImage:(id)arg1 ;
-(void)_updateActivityIndicator;
-(void)_updateCompositingFilters;
-(void)_setPresentationOption:(unsigned long long)arg1 enabled:(BOOL)arg2 ;
-(void)_updateFontIfNecessary;
-(void)appendPresentationOption:(unsigned long long)arg1 ;
-(void)clearPresentationOption:(unsigned long long)arg1 ;
-(unsigned long long)effectivePresentationOptions;
-(CNModernAtomIconView *)accessoryIconView;
-(CNModernAtomIconView *)badgeIconView;
@end

