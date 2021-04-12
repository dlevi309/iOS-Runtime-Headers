/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, UILabel, UIFont, UIView, PKPaymentAuthorizationLayout, NSString;

@interface PKPaymentAuthorizationSummaryItemsView : UIView {

	NSMutableArray* _labelViews;
	NSMutableArray* _valueViews;
	NSMutableArray* _titleViews;
	NSMutableArray* _hasBottomPadding;
	NSMutableArray* _usesLargeFont;
	UILabel* _titleLabel;
	UIFont* _titleFont;
	UIFont* _labelLargeFont;
	UIFont* _labelRegularFont;
	UIView* _separatorView;
	BOOL _showsBoldValueText;
	BOOL _showsTopSeparator;
	BOOL _occludesBodyView;
	PKPaymentAuthorizationLayout* _layout;
	NSString* _title;

}

@property (assign,nonatomic,__weak) PKPaymentAuthorizationLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL showsBoldValueText;                                   //@synthesize showsBoldValueText=_showsBoldValueText - In the implementation block
@property (assign,nonatomic) BOOL showsTopSeparator;                                    //@synthesize showsTopSeparator=_showsTopSeparator - In the implementation block
@property (assign,nonatomic) BOOL occludesBodyView;                                     //@synthesize occludesBodyView=_occludesBodyView - In the implementation block
-(id)titleLabel;
-(id)initWithLayout:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)makeTitleLabel;
-(id)_labelAttributedStringWithString:(id)arg1 withDarkColor:(BOOL)arg2 largeFont:(BOOL)arg3 ;
-(id)_valueAttributedStringWithString:(id)arg1 type:(unsigned long long)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 andLayout:(BOOL)arg2 ;
-(BOOL)occludesBodyView;
-(void)removeLabelsAndValues;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)showsBoldValueText;
-(void)setShowsBoldValueText:(BOOL)arg1 ;
-(void)setShowsTopSeparator:(BOOL)arg1 ;
-(BOOL)showsTopSeparator;
-(void)addLabel:(id)arg1 value:(id)arg2 title:(id)arg3 itemType:(unsigned long long)arg4 maxLabelLines:(long long)arg5 maxValueLines:(long long)arg6 hasBottomPadding:(BOOL)arg7 useDarkColor:(BOOL)arg8 useLargeFont:(BOOL)arg9 ;
-(void)setOccludesBodyView:(BOOL)arg1 ;
-(void)setLayout:(PKPaymentAuthorizationLayout *)arg1 ;
-(NSString *)title;
-(void)dealloc;
-(PKPaymentAuthorizationLayout *)layout;
@end

