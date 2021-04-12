/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor, UIFont;

@interface CNContactStyle : NSObject <NSSecureCoding> {

	BOOL _usesOpaqueBackground;
	BOOL _usesTranslucentBarStyle;
	BOOL _shouldPresentInCurrentContext;
	BOOL _blurSupported;
	UIColor* _textColor;
	UIColor* _sectionHeaderTextColor;
	UIColor* _taglineTextColor;
	UIColor* _disabledTextColor;
	UIColor* _placeholderTextColor;
	UIColor* _highlightedTextColor;
	UIColor* _suggestedLabelTextColor;
	UIColor* _suggestedValueTextColor;
	UIColor* _readOnlyTextColor;
	UIColor* _notesTextColor;
	UIColor* _backgroundColor;
	UIColor* _sectionIndexBackgroundColor;
	long long _separatorBackdropOverlayBlendMode;
	UIColor* _searchBarBackgroundColor;
	UIColor* _transportBackgroundColor;
	UIColor* _transportBorderColor;
	UIColor* _transportBoldBackgroundColor;
	UIColor* _contactHeaderBackgroundColor;
	UIColor* _contactHeaderDropShadowColor;
	UIColor* _tintColorOverride;
	UIColor* _headerBackgroundColor;
	UIColor* _separatorColor;
	long long _separatorStyle;
	UIColor* _sectionBackgroundColor;
	UIColor* _selectedCellBackgroundColor;
	UIColor* _groupedBackgroundColor;
	long long _barStyle;
	long long _keyboardAppearance;
	long long _modalTransitionStyle;
	long long _topActionsViewStyle;
	long long _inlineActionsViewStyle;
	UIEdgeInsets _separatorInset;

}

@property (nonatomic,readonly) UIFont * textFont; 
@property (nonatomic,readonly) UIFont * boldTextFont; 
@property (assign,nonatomic) long long topActionsViewStyle;                            //@synthesize topActionsViewStyle=_topActionsViewStyle - In the implementation block
@property (assign,nonatomic) long long inlineActionsViewStyle;                         //@synthesize inlineActionsViewStyle=_inlineActionsViewStyle - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * sectionHeaderTextColor;                         //@synthesize sectionHeaderTextColor=_sectionHeaderTextColor - In the implementation block
@property (nonatomic,retain) UIColor * taglineTextColor;                               //@synthesize taglineTextColor=_taglineTextColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledTextColor;                              //@synthesize disabledTextColor=_disabledTextColor - In the implementation block
@property (nonatomic,retain) UIColor * placeholderTextColor;                           //@synthesize placeholderTextColor=_placeholderTextColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTextColor;                           //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,retain) UIColor * suggestedLabelTextColor;                        //@synthesize suggestedLabelTextColor=_suggestedLabelTextColor - In the implementation block
@property (nonatomic,retain) UIColor * suggestedValueTextColor;                        //@synthesize suggestedValueTextColor=_suggestedValueTextColor - In the implementation block
@property (nonatomic,retain) UIColor * readOnlyTextColor;                              //@synthesize readOnlyTextColor=_readOnlyTextColor - In the implementation block
@property (nonatomic,retain) UIColor * notesTextColor;                                 //@synthesize notesTextColor=_notesTextColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * sectionIndexBackgroundColor;                    //@synthesize sectionIndexBackgroundColor=_sectionIndexBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL usesOpaqueBackground;                                //@synthesize usesOpaqueBackground=_usesOpaqueBackground - In the implementation block
@property (assign,nonatomic) long long separatorBackdropOverlayBlendMode;              //@synthesize separatorBackdropOverlayBlendMode=_separatorBackdropOverlayBlendMode - In the implementation block
@property (nonatomic,retain) UIColor * searchBarBackgroundColor;                       //@synthesize searchBarBackgroundColor=_searchBarBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * transportBackgroundColor;                       //@synthesize transportBackgroundColor=_transportBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * transportBorderColor;                           //@synthesize transportBorderColor=_transportBorderColor - In the implementation block
@property (nonatomic,retain) UIColor * transportBoldBackgroundColor;                   //@synthesize transportBoldBackgroundColor=_transportBoldBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * contactHeaderBackgroundColor;                   //@synthesize contactHeaderBackgroundColor=_contactHeaderBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * contactHeaderDropShadowColor;                   //@synthesize contactHeaderDropShadowColor=_contactHeaderDropShadowColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColorOverride;                              //@synthesize tintColorOverride=_tintColorOverride - In the implementation block
@property (nonatomic,retain) UIColor * headerBackgroundColor;                          //@synthesize headerBackgroundColor=_headerBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                                 //@synthesize separatorColor=_separatorColor - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                                 //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInset;                              //@synthesize separatorInset=_separatorInset - In the implementation block
@property (nonatomic,retain) UIColor * sectionBackgroundColor;                         //@synthesize sectionBackgroundColor=_sectionBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedCellBackgroundColor;                    //@synthesize selectedCellBackgroundColor=_selectedCellBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * groupedBackgroundColor;                         //@synthesize groupedBackgroundColor=_groupedBackgroundColor - In the implementation block
@property (assign,nonatomic) long long barStyle;                                       //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,nonatomic) BOOL usesTranslucentBarStyle;                             //@synthesize usesTranslucentBarStyle=_usesTranslucentBarStyle - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance;                             //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentInCurrentContext;                       //@synthesize shouldPresentInCurrentContext=_shouldPresentInCurrentContext - In the implementation block
@property (assign,nonatomic) BOOL blurSupported;                                       //@synthesize blurSupported=_blurSupported - In the implementation block
@property (assign,nonatomic) long long modalTransitionStyle;                           //@synthesize modalTransitionStyle=_modalTransitionStyle - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultStyle;
+(void)setCurrentStyle:(id)arg1 ;
+(id)currentStyle;
+(id)darkStyle;
+(id)faceTimeStyle;
+(id)watchStyle;
+(id)siriStyle;
+(id)testStyle;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(UIColor *)textColor;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(long long)keyboardAppearance;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(long long)separatorStyle;
-(void)setSeparatorStyle:(long long)arg1 ;
-(UIEdgeInsets)separatorInset;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(long long)modalTransitionStyle;
-(void)setModalTransitionStyle:(long long)arg1 ;
-(UIColor *)disabledTextColor;
-(UIColor *)placeholderTextColor;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(UIColor *)highlightedTextColor;
-(UIFont *)textFont;
-(UIColor *)sectionIndexBackgroundColor;
-(void)setSectionIndexBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)sectionBackgroundColor;
-(void)setSectionBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)selectedCellBackgroundColor;
-(void)setSelectedCellBackgroundColor:(UIColor *)arg1 ;
-(UIFont *)boldTextFont;
-(UIColor *)sectionHeaderTextColor;
-(void)setSectionHeaderTextColor:(UIColor *)arg1 ;
-(UIColor *)taglineTextColor;
-(void)setTaglineTextColor:(UIColor *)arg1 ;
-(void)setDisabledTextColor:(UIColor *)arg1 ;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(UIColor *)suggestedLabelTextColor;
-(void)setSuggestedLabelTextColor:(UIColor *)arg1 ;
-(UIColor *)suggestedValueTextColor;
-(void)setSuggestedValueTextColor:(UIColor *)arg1 ;
-(UIColor *)readOnlyTextColor;
-(void)setReadOnlyTextColor:(UIColor *)arg1 ;
-(UIColor *)notesTextColor;
-(void)setNotesTextColor:(UIColor *)arg1 ;
-(BOOL)usesOpaqueBackground;
-(void)setUsesOpaqueBackground:(BOOL)arg1 ;
-(long long)separatorBackdropOverlayBlendMode;
-(void)setSeparatorBackdropOverlayBlendMode:(long long)arg1 ;
-(UIColor *)searchBarBackgroundColor;
-(void)setSearchBarBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)transportBackgroundColor;
-(void)setTransportBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)transportBorderColor;
-(void)setTransportBorderColor:(UIColor *)arg1 ;
-(UIColor *)transportBoldBackgroundColor;
-(void)setTransportBoldBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)contactHeaderBackgroundColor;
-(void)setContactHeaderBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)contactHeaderDropShadowColor;
-(void)setContactHeaderDropShadowColor:(UIColor *)arg1 ;
-(UIColor *)tintColorOverride;
-(void)setTintColorOverride:(UIColor *)arg1 ;
-(UIColor *)headerBackgroundColor;
-(void)setHeaderBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)groupedBackgroundColor;
-(void)setGroupedBackgroundColor:(UIColor *)arg1 ;
-(BOOL)usesTranslucentBarStyle;
-(void)setUsesTranslucentBarStyle:(BOOL)arg1 ;
-(BOOL)shouldPresentInCurrentContext;
-(void)setShouldPresentInCurrentContext:(BOOL)arg1 ;
-(BOOL)blurSupported;
-(void)setBlurSupported:(BOOL)arg1 ;
-(long long)topActionsViewStyle;
-(void)setTopActionsViewStyle:(long long)arg1 ;
-(long long)inlineActionsViewStyle;
-(void)setInlineActionsViewStyle:(long long)arg1 ;
@end

