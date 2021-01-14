/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIImage, UILabel, _CertInfoActionButton, _CertInfoGradientLabel, NSString;

@interface _CertInfoTrustSummaryHeaderCell : UITableViewCell {

	UIImage* _certificateImage;
	UIImage* _notTrustedGradient;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	_CertInfoActionButton* _actionButton;
	_CertInfoGradientLabel* _trustedLabel;
	BOOL _trusted;

}

@property (nonatomic,__weak,readonly) _CertInfoActionButton * actionButton; 
@property (nonatomic,readonly) double rowHeight; 
@property (nonatomic,copy) NSString * trustTitle; 
@property (nonatomic,copy) NSString * trustSubtitle; 
@property (assign,getter=isTrusted,nonatomic) BOOL trusted;                              //@synthesize trusted=_trusted - In the implementation block
-(void)setExpired:(BOOL)arg1 ;
-(BOOL)isTrusted;
-(id)_subtitleLabel;
-(void)layoutSubviews;
-(double)rowHeight;
-(_CertInfoActionButton *)actionButton;
-(id)_titleLabel;
-(void)setTrusted:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)_trustedLabel;
-(NSString *)trustTitle;
-(void)setTrustTitle:(NSString *)arg1 ;
-(NSString *)trustSubtitle;
-(void)setTrustSubtitle:(NSString *)arg1 ;
-(void)setActionButtonTitle:(id)arg1 destructive:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_layoutSubviewsWithActionButtonSize:(CGSize)arg1 ;
@end

