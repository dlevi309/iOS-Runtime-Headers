/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <UIKitCore/UINavigationController.h>

@class VMVoicemailManager;

@interface VMNavigationController : UINavigationController {

	VMVoicemailManager* _manager;

}

@property (nonatomic,readonly) VMVoicemailManager * manager;              //@synthesize manager=_manager - In the implementation block
-(id)initWithManager:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(id)init;
-(id)initWithRootViewController:(id)arg1 ;
-(VMVoicemailManager *)manager;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

