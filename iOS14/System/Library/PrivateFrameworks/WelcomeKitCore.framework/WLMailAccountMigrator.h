/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/

#import <libobjc.A.dylib/MFAccountValidatorDelegate.h>
#import <libobjc.A.dylib/WLDataclassMigrating.h>

@class ACAccountStore, NSString;

@interface WLMailAccountMigrator : NSObject <MFAccountValidatorDelegate, WLDataclassMigrating> {

	ACAccountStore* _accountStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contentType;
-(id)dataType;
-(id)contentType;
-(void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(BOOL)arg3 ;
-(BOOL)accountBased;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)storeRecordDataInDatabase;
-(BOOL)wantsSegmentedDownloads;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2 ;
-(id)importWillBegin;
-(id)importDidEnd;
-(void)_importGoogleAccountWithUsername:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

