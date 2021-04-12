/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKViewController.h>

@class UILabel, HKSource;

@interface WDSourceMessageViewController : HKViewController {

	UILabel* _messageLabel;
	HKSource* _source;
	long long _style;

}

@property (nonatomic,readonly) long long style;              //@synthesize style=_style - In the implementation block
-(long long)style;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)_updateFont;
-(id)initWithStyle:(long long)arg1 source:(id)arg2 ;
@end

