/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentPreferenceCell.h>

@class PKPaymentPreferenceDetailedCellTextField;

@interface PKPaymentPreferenceDetailedCell : PKPaymentPreferenceCell {

	PKPaymentPreferenceDetailedCellTextField* _textField;
	BOOL _isLeftToRight;
	double _minimumCellHeight;
	BOOL _inlineEditingEnabled;
	double _leadingOffset;

}

@property (assign,nonatomic) BOOL inlineEditingEnabled;                                           //@synthesize inlineEditingEnabled=_inlineEditingEnabled - In the implementation block
@property (nonatomic,readonly) PKPaymentPreferenceDetailedCellTextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) double leadingOffset;                                                //@synthesize leadingOffset=_leadingOffset - In the implementation block
@property (assign,nonatomic) double minimumCellHeight;                                            //@synthesize minimumCellHeight=_minimumCellHeight - In the implementation block
-(void)showTextField:(BOOL)arg1 ;
-(BOOL)inlineEditingEnabled;
-(void)setInlineEditingEnabled:(BOOL)arg1 ;
-(double)leadingOffset;
-(void)setLeadingOffset:(double)arg1 ;
-(void)setMinimumCellHeight:(double)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(double)minimumCellHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(PKPaymentPreferenceDetailedCellTextField *)textField;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

