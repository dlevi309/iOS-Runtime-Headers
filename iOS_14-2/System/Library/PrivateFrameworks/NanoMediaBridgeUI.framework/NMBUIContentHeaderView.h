/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
*/

#import <UIKitCore/UIView.h>

@class UIStackView, UILabel, UIProgressView;

@interface NMBUIContentHeaderView : UIView {

	UIStackView* _contentStackView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIProgressView* _progressView;

}

@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,readonly) UIProgressView * progressView; 
-(UILabel *)detailTextLabel;
-(UIProgressView *)progressView;
-(UILabel *)textLabel;
-(id)_contentStackView;
@end

