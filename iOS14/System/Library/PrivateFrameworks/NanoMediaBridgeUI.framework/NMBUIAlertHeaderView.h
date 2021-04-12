/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tintColorDidChange;
-(id)_backgroundView;
-(UILabel *)detailTextLabel;
-(UILabel *)textLabel;
-(id)_contentStackView;
@end

