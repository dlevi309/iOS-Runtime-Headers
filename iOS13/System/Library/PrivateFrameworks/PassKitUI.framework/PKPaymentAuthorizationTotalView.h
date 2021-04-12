/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIActivityIndicatorView, UIView, NSLayoutConstraint, PKPaymentAuthorizationLayout;

@interface PKPaymentAuthorizationTotalView : UIView {

	UILabel* _labelView;
	UILabel* _valueView;
	UIActivityIndicatorView* _processingIndicator;
	UIView* _separatorView;
	NSLayoutConstraint* _leftMarginConstraint;
	NSLayoutConstraint* _rightMarginConstraint;
	NSLayoutConstraint* _labelBaselineConstraint;
	NSLayoutConstraint* _valueBaselineConstraint;
	NSLayoutConstraint* _labelValueRelationConstraint;
	NSLayoutConstraint* _valueBaselineLargeTextConstraint;
	NSLayoutConstraint* _labelValueRelationLargeTextConstraint;
	NSLayoutConstraint* _rightMarginLargeTextConstraint;
	BOOL _isPendingTotal;
	BOOL _processing;
	BOOL _showsBoldValueText;
	PKPaymentAuthorizationLayout* _layout;
	long long _style;
	long long _labelNumberOfLines;

}

@property (assign,nonatomic) PKPaymentAuthorizationLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) long long style;                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL isPendingTotal;                                //@synthesize isPendingTotal=_isPendingTotal - In the implementation block
@property (assign,getter=isProcessing,nonatomic) BOOL processing;                //@synthesize processing=_processing - In the implementation block
@property (assign,nonatomic) long long labelNumberOfLines;                       //@synthesize labelNumberOfLines=_labelNumberOfLines - In the implementation block
@property (assign,nonatomic) BOOL showsBoldValueText;                            //@synthesize showsBoldValueText=_showsBoldValueText - In the implementation block
-(id)init;
-(void)dealloc;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(PKPaymentAuthorizationLayout *)layout;
-(void)setLayout:(PKPaymentAuthorizationLayout *)arg1 ;
-(void)updateConstraints;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_prepareConstraints;
-(void)_createSubviews;
-(BOOL)isProcessing;
-(void)setProcessing:(BOOL)arg1 ;
-(id)_labelAttributedStringWithString:(id)arg1 ;
-(id)_valueAttributedStringWithString:(id)arg1 ;
-(BOOL)_hasAccessibilityLargeText;
-(double)_initialLeading;
-(void)setLabel:(id)arg1 value:(id)arg2 ;
-(void)setLabelNumberOfLines:(long long)arg1 ;
-(BOOL)isPendingTotal;
-(void)setIsPendingTotal:(BOOL)arg1 ;
-(long long)labelNumberOfLines;
-(BOOL)showsBoldValueText;
-(void)setShowsBoldValueText:(BOOL)arg1 ;
@end

