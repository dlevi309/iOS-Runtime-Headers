/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSMutableSet, UIFont, PKStackedTextItem;

@interface PKStackedTextItemView : UIView {

	UILabel* _title;
	UILabel* _primary;
	UILabel* _secondary;
	UILabel* _tertiary;
	CGSize _boundsSize;
	NSMutableSet* _snapshots;
	UIFont* _significantPrimaryFont;
	UIFont* _primaryFont;
	UIFont* _layoutPrimaryFont;
	UIFont* _idealTitleFont;
	UIFont* _idealPrimaryFont;
	UIFont* _idealSecondaryFont;
	UIFont* _idealTertiaryFont;
	BOOL _animated;
	long long _style;
	long long _textAlignment;
	PKStackedTextItem* _content;
	SCD_Struct_PK20 _contentConstraints;

}

@property (nonatomic,readonly) long long style;                               //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long textAlignment;                         //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,copy) PKStackedTextItem * content;                       //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) SCD_Struct_PK20 contentConstraints;              //@synthesize contentConstraints=_contentConstraints - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(void)prepareForReuse;
-(PKStackedTextItem *)content;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(long long)textAlignment;
-(void)setContent:(PKStackedTextItem *)arg1 ;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(double)headerPadding;
-(void)setContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateAlignmentAnimated:(BOOL)arg1 ;
-(SCD_Struct_PK21)_titleFontMetrics;
-(id)_attributedStringWithText:(id)arg1 strikethrough:(BOOL)arg2 ;
-(double)_prepareViewForReuse:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateSubviewsAnimated:(BOOL)arg1 ;
-(SCD_Struct_PK20)boundingMetricForWidth:(double)arg1 ;
-(void)setContentConstraints:(SCD_Struct_PK20)arg1 ;
-(SCD_Struct_PK20)contentConstraints;
@end

