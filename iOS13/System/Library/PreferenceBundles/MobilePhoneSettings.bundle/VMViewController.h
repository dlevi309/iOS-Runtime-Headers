/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <MobilePhoneSettings/PHViewController.h>

@class VMVoicemailManager;

@interface VMViewController : PHViewController {

	VMVoicemailManager* _manager;

}

@property (nonatomic,readonly) VMVoicemailManager * manager;              //@synthesize manager=_manager - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(VMVoicemailManager *)manager;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

