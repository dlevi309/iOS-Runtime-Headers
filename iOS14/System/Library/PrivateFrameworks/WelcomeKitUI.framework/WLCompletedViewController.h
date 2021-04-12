/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/OBSetupAssistantSupport.h>

@class WLWelcomeController, NSString;

@interface WLCompletedViewController : OBWelcomeController <OBSetupAssistantSupport> {

	WLWelcomeController* _welcomeController;
	/*^block*/id _continueHandler;

}

@property (nonatomic,copy) id continueHandler;                      //@synthesize continueHandler=_continueHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWelcomeController:(id)arg1 ;
-(id)continueHandler;
-(void)setContinueHandler:(id)arg1 ;
-(void)_continueTapped:(id)arg1 ;
@end

