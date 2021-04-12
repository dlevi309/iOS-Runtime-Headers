/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, UILabel, PKPaymentAuthorizationLayout, NSString;

@interface PKPaymentAuthorizationSummaryItemsView : UIView {

	NSMutableArray* _labelViews;
	NSMutableArray* _valueViews;
	NSMutableArray* _hasBottomPadding;
	UILabel* _titleLabel;
	BOOL _showsBoldValueText;
	PKPaymentAuthorizationLayout* _layout;
	NSString* _title;

}

@property (assign,nonatomic) PKPaymentAuthorizationLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL showsBoldValueText;                            //@synthesize showsBoldValueText=_showsBoldValueText - In the implementation block
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(PKPaymentAuthorizationLayout *)layout;
-(void)setLayout:(PKPaymentAuthorizationLayout *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithLayout:(id)arg1 ;
-(BOOL)showsBoldValueText;
-(void)setShowsBoldValueText:(BOOL)arg1 ;
-(void)removeLabelsAndValues;
-(void)addLabel:(id)arg1 value:(id)arg2 itemType:(unsigned long long)arg3 maxLabelLines:(long long)arg4 maxValueLines:(long long)arg5 hasBottomPadding:(BOOL)arg6 useDarkColor:(BOOL)arg7 ;
-(id)_labelAttributedStringWithString:(id)arg1 withDarkColor:(BOOL)arg2 ;
-(id)_valueAttributedStringWithString:(id)arg1 type:(unsigned long long)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 andLayout:(BOOL)arg2 ;
@end

