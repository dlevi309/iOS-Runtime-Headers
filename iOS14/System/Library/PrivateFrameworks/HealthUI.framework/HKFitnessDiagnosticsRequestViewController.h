/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <OnBoardingKit/OBTextWelcomeController.h>

@interface HKFitnessDiagnosticsRequestViewController : OBTextWelcomeController {

	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
+(void)presentInViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)needsRequestedPermission;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)viewDidLoad;
-(BOOL)shouldInlineButtonTray;
-(void)_showDataCollectionAdditionalInfo;
-(void)_enableDataCollection;
-(void)_disableDataCollection;
@end

