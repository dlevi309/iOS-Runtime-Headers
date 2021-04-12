/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class NSString;

@interface STIntroWelcomeViewController : OBWelcomeController {

	NSString* _childName;
	/*^block*/id _continueHandler;

}

@property (copy,readonly) NSString * childName;              //@synthesize childName=_childName - In the implementation block
@property (copy,readonly) id continueHandler;                //@synthesize continueHandler=_continueHandler - In the implementation block
-(void)loadView;
-(id)continueHandler;
-(NSString *)childName;
-(void)_continue:(id)arg1 ;
-(id)initWithChildName:(id)arg1 continueHandler:(/*^block*/id)arg2 ;
@end

