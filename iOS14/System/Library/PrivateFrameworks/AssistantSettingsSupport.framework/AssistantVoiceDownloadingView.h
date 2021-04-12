/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface AssistantVoiceDownloadingView : UIView {

	UIActivityIndicatorView* _indicator;
	UILabel* _downloadLabel;

}

@property (nonatomic,retain) UIActivityIndicatorView * indicator;              //@synthesize indicator=_indicator - In the implementation block
@property (nonatomic,retain) UILabel * downloadLabel;                          //@synthesize downloadLabel=_downloadLabel - In the implementation block
-(void)layoutSubviews;
-(void)setIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)indicator;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
-(void)sizeToFit;
-(UILabel *)downloadLabel;
-(void)setDownloadLabel:(UILabel *)arg1 ;
@end

