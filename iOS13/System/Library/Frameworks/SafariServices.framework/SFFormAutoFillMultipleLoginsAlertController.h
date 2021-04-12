/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIAlertController.h>

@class UIAlertAction;

@interface SFFormAutoFillMultipleLoginsAlertController : UIAlertController {

	UIAlertAction* _cancelAction;
	BOOL _cancelsWhenAppEntersBackground;

}

@property (assign,nonatomic) BOOL cancelsWhenAppEntersBackground;              //@synthesize cancelsWhenAppEntersBackground=_cancelsWhenAppEntersBackground - In the implementation block
+(id)alertControllerWithMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 externalCredentials:(id)arg3 preferredStyle:(long long)arg4 formURL:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(void)setCancelsWhenAppEntersBackground:(BOOL)arg1 ;
-(BOOL)cancelsWhenAppEntersBackground;
@end

