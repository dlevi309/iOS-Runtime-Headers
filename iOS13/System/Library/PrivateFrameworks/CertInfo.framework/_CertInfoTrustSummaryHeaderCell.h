/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(id)_titleLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)rowHeight;
-(id)_subtitleLabel;
-(void)setExpired:(BOOL)arg1 ;
-(_CertInfoActionButton *)actionButton;
-(void)setTrusted:(BOOL)arg1 ;
-(BOOL)isTrusted;
-(NSString *)trustTitle;
-(void)setTrustTitle:(NSString *)arg1 ;
-(NSString *)trustSubtitle;
-(void)setTrustSubtitle:(NSString *)arg1 ;
-(id)_trustedLabel;
-(void)setActionButtonTitle:(id)arg1 destructive:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_layoutSubviewsWithActionButtonSize:(CGSize)arg1 ;
@end

