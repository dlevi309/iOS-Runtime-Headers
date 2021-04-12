/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setTitle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(id)arg1 ;
-(void)setExpiration:(id)arg1 ;
-(void)_setupLabel:(id)arg1 isSubtitle:(BOOL)arg2 ;
-(void)_setText:(id)arg1 forLabel:(id)arg2 withRedColor:(BOOL)arg3 ;
@end

