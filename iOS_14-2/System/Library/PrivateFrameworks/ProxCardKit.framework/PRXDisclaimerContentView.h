/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/PRXScrollableContentView.h>

@class UIView, NSArray, PRXLabel, PRXButton;

@interface PRXDisclaimerContentView : PRXScrollableContentView {

	UIView* _disclaimerContainerView;
	NSArray* _contentConstraints;
	PRXLabel* _disclaimerLabel;
	PRXButton* _moreInfoButton;

}

@property (nonatomic,readonly) PRXLabel * disclaimerLabel;              //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (nonatomic,retain) PRXButton * moreInfoButton;                //@synthesize moreInfoButton=_moreInfoButton - In the implementation block
-(void)updateConstraints;
-(PRXLabel *)disclaimerLabel;
-(id)initWithCardStyle:(long long)arg1 ;
-(void)setMoreInfoButton:(PRXButton *)arg1 ;
-(PRXButton *)moreInfoButton;
@end

