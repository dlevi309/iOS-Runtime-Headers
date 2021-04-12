/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
*/

#import <UIKitCore/UIView.h>

@class UIView, UIStackView, UILabel;

@interface NMBUIAlertHeaderView : UIView {

	UIView* _backgroundView;
	UIStackView* _contentStackView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;

}

@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
-(id)_backgroundView;
-(void)tintColorDidChange;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(id)_contentStackView;
@end

