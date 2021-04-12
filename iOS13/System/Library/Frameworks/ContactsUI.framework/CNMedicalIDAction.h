/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyAction.h>
#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>

@class CNHealthStoreManager, CNContact, NSString;

@interface CNMedicalIDAction : CNPropertyAction <HKMedicalIDViewControllerDelegate> {

	long long _medicalIDActionType;
	CNHealthStoreManager* _healthStoreManager;

}

@property (assign,nonatomic) long long medicalIDActionType;                          //@synthesize medicalIDActionType=_medicalIDActionType - In the implementation block
@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) CNHealthStoreManager * healthStoreManager;              //@synthesize healthStoreManager=_healthStoreManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performActionWithSender:(id)arg1 ;
-(void)medicalIDViewControllerDidCancel:(id)arg1 ;
-(void)medicalIDViewControllerDidSave:(id)arg1 ;
-(void)medicalIDViewControllerDidDelete:(id)arg1 ;
-(void)medicalIDViewControllerDidFinish:(id)arg1 ;
-(long long)medicalIDActionType;
-(void)setMedicalIDActionType:(long long)arg1 ;
-(CNHealthStoreManager *)healthStoreManager;
-(void)setHealthStoreManager:(CNHealthStoreManager *)arg1 ;
@end

