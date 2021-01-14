/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <MobilePhoneSettings/PHViewController.h>

@class VMVoicemailManager;

@interface VMViewController : PHViewController {

	VMVoicemailManager* _manager;

}

@property (nonatomic,readonly) VMVoicemailManager * manager;              //@synthesize manager=_manager - In the implementation block
-(id)initWithManager:(id)arg1 ;
-(id)init;
-(VMVoicemailManager *)manager;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

