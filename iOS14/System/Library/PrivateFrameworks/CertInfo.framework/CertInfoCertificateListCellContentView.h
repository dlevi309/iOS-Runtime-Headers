/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface CertInfoCertificateListCellContentView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _expirationLabel;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)layoutSubviews;
-(void)setExpiration:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)_setupLabel:(id)arg1 isSubtitle:(BOOL)arg2 ;
-(void)_setText:(id)arg1 forLabel:(id)arg2 withRedColor:(BOOL)arg3 ;
@end

