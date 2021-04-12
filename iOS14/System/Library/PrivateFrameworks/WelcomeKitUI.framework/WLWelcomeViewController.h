/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/OBSetupAssistantSupport.h>

@class WLWelcomeController, NSString;

@interface WLWelcomeViewController : OBWelcomeController <OBSetupAssistantSupport> {

	WLWelcomeController* _welcomeController;
	/*^block*/id _continueHandler;

}

@property (nonatomic,copy) id continueHandler;                      //@synthesize continueHandler=_continueHandler - In the implementation block
@property (nonatomic,copy) id completionHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)continueHandler;
-(void)setContinueHandler:(id)arg1 ;
-(void)dealloc;
-(void)_continueTapped:(id)arg1 ;
-(id)_initWithForceUITestMode:(BOOL)arg1 forceUITestModeDownloadError:(BOOL)arg2 ;
-(id)initForUITestWithForceDownloadError:(BOOL)arg1 ;
@end

