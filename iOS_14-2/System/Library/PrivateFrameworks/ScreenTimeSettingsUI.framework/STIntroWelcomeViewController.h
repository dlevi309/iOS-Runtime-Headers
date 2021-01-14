/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

