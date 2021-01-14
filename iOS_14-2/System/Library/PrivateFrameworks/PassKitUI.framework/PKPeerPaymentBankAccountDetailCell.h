/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@interface PKPeerPaymentBankAccountDetailCell : UITableViewCell {

	BOOL _shouldDrawSeperator;
	BOOL _shouldDrawFullWidthSeperator;
	double _minimumTextLabelWidth;

}

@property (assign,nonatomic) BOOL shouldDrawSeperator;                       //@synthesize shouldDrawSeperator=_shouldDrawSeperator - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawFullWidthSeperator;              //@synthesize shouldDrawFullWidthSeperator=_shouldDrawFullWidthSeperator - In the implementation block
@property (assign,nonatomic) double minimumTextLabelWidth;                   //@synthesize minimumTextLabelWidth=_minimumTextLabelWidth - In the implementation block
-(CGRect)_separatorFrame;
-(void)setShouldDrawFullWidthSeperator:(BOOL)arg1 ;
-(void)setShouldDrawSeperator:(BOOL)arg1 ;
-(BOOL)shouldDrawSeperator;
-(BOOL)shouldDrawFullWidthSeperator;
-(double)minimumTextLabelWidth;
-(void)setMinimumTextLabelWidth:(double)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

