/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImage, UILabel, CertInfoGradientLabel;

@interface CertInfoCertificateHeaderCell : UITableViewCell {

	UIImage* _certificateImage;
	UIImage* _notTrustedGradient;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	CertInfoGradientLabel* _trustedLabel;

}
-(void)setExpired:(BOOL)arg1 ;
-(id)_subtitleLabel;
-(void)layoutSubviews;
-(double)rowHeight;
-(id)_titleLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)_trustedLabel;
-(void)setTrustTitle:(id)arg1 ;
-(void)setTrustSubtitle:(id)arg1 ;
-(id)_certificateImage;
-(id)_notTrustedGradient;
@end

