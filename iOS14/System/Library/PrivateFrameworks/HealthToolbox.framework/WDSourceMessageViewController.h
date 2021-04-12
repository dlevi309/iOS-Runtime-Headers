/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateFont;
-(long long)style;
-(id)initWithStyle:(long long)arg1 source:(id)arg2 ;
@end

