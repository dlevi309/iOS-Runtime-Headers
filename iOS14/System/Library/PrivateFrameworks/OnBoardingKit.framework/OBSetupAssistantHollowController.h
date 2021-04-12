/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/OBSetupAssistantSupport.h>

@class OBHollowButton, NSString;

@interface OBSetupAssistantHollowController : OBWelcomeController <OBSetupAssistantSupport> {

	OBHollowButton* _contentButton;

}

@property (nonatomic,retain) OBHollowButton * contentButton;              //@synthesize contentButton=_contentButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(OBHollowButton *)contentButton;
-(void)setContentButton:(OBHollowButton *)arg1 ;
-(void)addHollowButtonWithTitle:(id)arg1 target:(id)arg2 downPressSelector:(SEL)arg3 upLiftSelector:(SEL)arg4 ;
-(void)viewDidLoad;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

