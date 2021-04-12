/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView;

@interface CertUIKeyValueView : UIView {

	double _preferredValueLabelOriginX;
	UILabel* _keyLabel;
	UILabel* _valueLabel;
	UIImageView* _verifiedImageView;
	UILabel* _verifiedLabel;

}

@property (nonatomic,retain) UILabel * keyLabel;                             //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                           //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UIImageView * verifiedImageView;                //@synthesize verifiedImageView=_verifiedImageView - In the implementation block
@property (nonatomic,retain) UILabel * verifiedLabel;                        //@synthesize verifiedLabel=_verifiedLabel - In the implementation block
@property (assign,nonatomic) double preferredValueLabelOriginX;              //@synthesize preferredValueLabelOriginX=_preferredValueLabelOriginX - In the implementation block
+(double)defaultPreferredValueLabelOriginX;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)keyLabel;
-(id)titleFont;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setKeyLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)setPreferredValueLabelOriginX:(double)arg1 ;
-(void)setKey:(id)arg1 value:(id)arg2 ;
-(void)setItemDetail:(id)arg1 ;
-(id)detailFont;
-(double)preferredValueLabelOriginX;
-(UILabel *)verifiedLabel;
-(UIImageView *)verifiedImageView;
-(id)verifiedColor;
-(id)verifiedFont;
-(void)setHighlightTextColor:(id)arg1 ;
-(void)setCheckmarkLabelText:(id)arg1 checkmarkLabelColor:(id)arg2 showCheckmark:(BOOL)arg3 ;
-(void)_createVerifiedComponentsIfNeeded;
-(void)setVerifiedImageView:(UIImageView *)arg1 ;
-(void)setVerifiedLabel:(UILabel *)arg1 ;
@end

