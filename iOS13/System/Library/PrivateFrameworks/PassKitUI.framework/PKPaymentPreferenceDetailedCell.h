/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentPreferenceCell.h>

@class UITextField;

@interface PKPaymentPreferenceDetailedCell : PKPaymentPreferenceCell {

	UITextField* _textField;
	BOOL _isLeftToRight;
	double _minimumCellHeight;
	BOOL _inlineEditingEnabled;
	double _leadingOffset;

}

@property (assign,nonatomic) BOOL inlineEditingEnabled;              //@synthesize inlineEditingEnabled=_inlineEditingEnabled - In the implementation block
@property (nonatomic,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) double leadingOffset;                   //@synthesize leadingOffset=_leadingOffset - In the implementation block
@property (assign,nonatomic) double minimumCellHeight;               //@synthesize minimumCellHeight=_minimumCellHeight - In the implementation block
-(void)prepareForReuse;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UITextField *)textField;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(double)minimumCellHeight;
-(void)showTextField:(BOOL)arg1 ;
-(BOOL)inlineEditingEnabled;
-(void)setInlineEditingEnabled:(BOOL)arg1 ;
-(double)leadingOffset;
-(void)setLeadingOffset:(double)arg1 ;
-(void)setMinimumCellHeight:(double)arg1 ;
@end

