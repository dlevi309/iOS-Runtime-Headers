/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)sizeToFit;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
-(UIActivityIndicatorView *)indicator;
-(void)setIndicator:(UIActivityIndicatorView *)arg1 ;
-(UILabel *)downloadLabel;
-(void)setDownloadLabel:(UILabel *)arg1 ;
@end

