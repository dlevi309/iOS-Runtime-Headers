/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(UIProgressView *)progressView;
-(id)_contentStackView;
@end

