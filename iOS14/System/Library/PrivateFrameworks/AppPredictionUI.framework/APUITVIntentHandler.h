/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
*/

#import <libobjc.A.dylib/APUIWFLIntentControllerDelegate.h>
#import <libobjc.A.dylib/ATXTVIntentHandler.h>

@class ATXAction, APUIWFLIntentController, NSString;

@interface APUITVIntentHandler : NSObject <APUIWFLIntentControllerDelegate, ATXTVIntentHandler> {

	ATXAction* _action;
	APUIWFLIntentController* _intentController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)intentController:(id)arg1 didHandleInteraction:(id)arg2 ;
-(void)intentController:(id)arg1 didFailWithError:(id)arg2 forInteraction:(id)arg3 ;
-(void)intentController:(id)arg1 requiresContinuingInAppForIntent:(id)arg2 proceedHandler:(/*^block*/id)arg3 ;
-(void)intentController:(id)arg1 requiresConfirmationForIntent:(id)arg2 intentResponse:(id)arg3 ;
-(void)intentControllerDidFailAuthorizationCheck:(id)arg1 ;
-(id)initWithTVAction:(id)arg1 context:(long long)arg2 ;
-(void)executeTVActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_punchToAppWithIntent:(id)arg1 ;
@end

