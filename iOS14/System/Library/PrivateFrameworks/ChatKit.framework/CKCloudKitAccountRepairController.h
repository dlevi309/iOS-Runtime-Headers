/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/AAUIDeviceToDeviceEncryptionHelperDelegate.h>

@class AAUIDeviceToDeviceEncryptionHelper, NSString;

@interface CKCloudKitAccountRepairController : NSObject <AAUIDeviceToDeviceEncryptionHelperDelegate> {

	AAUIDeviceToDeviceEncryptionHelper* _encryptionHelper;

}

@property (nonatomic,retain) AAUIDeviceToDeviceEncryptionHelper * encryptionHelper;              //@synthesize encryptionHelper=_encryptionHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)accountStore;
-(Class)authenticationContextClass;
-(id)AKSecurityUpgradeContextMessages;
-(AAUIDeviceToDeviceEncryptionHelper *)encryptionHelper;
-(id)AAUIDeviceToDeviceEncryptionHelperWithPresentingViewController:(id)arg1 ;
-(void)setEncryptionHelper:(AAUIDeviceToDeviceEncryptionHelper *)arg1 ;
-(void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(/*^block*/id)arg2 ;
-(id)authenticationContext;
-(void)beginRepairWithPresentingViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)primaryAppleAccount;
@end

