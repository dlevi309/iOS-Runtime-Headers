/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class OBHollowButton;

@interface OBSetupAssistantHollowController : OBWelcomeController {

	OBHollowButton* _contentButton;

}

@property (nonatomic,retain) OBHollowButton * contentButton;              //@synthesize contentButton=_contentButton - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(OBHollowButton *)contentButton;
-(void)addHollowButtonWithTitle:(id)arg1 target:(id)arg2 downPressSelector:(SEL)arg3 upLiftSelector:(SEL)arg4 ;
-(void)setContentButton:(OBHollowButton *)arg1 ;
@end

