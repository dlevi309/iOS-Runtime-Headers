/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAAuthenticationResponse.h>

@class NSDictionary, NSArray, NSString, NSNumber;

@interface AAProvisioningResponse : AAAuthenticationResponse {

	NSDictionary* _icloud;

}

@property (nonatomic,readonly) NSArray * provisionedDataclasses; 
@property (nonatomic,readonly) NSDictionary * dataclassProperties; 
@property (nonatomic,readonly) NSString * appleID; 
@property (nonatomic,readonly) NSArray * appleIDAliases; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * primaryEmail; 
@property (nonatomic,readonly) NSNumber * primaryEmailVerified; 
@property (nonatomic,readonly) NSString * iCloudAuthToken; 
@property (nonatomic,readonly) NSString * fmipAuthToken; 
@property (nonatomic,readonly) NSString * fmipSiriToken; 
@property (nonatomic,readonly) NSString * searchPartyToken; 
@property (nonatomic,readonly) NSString * keyTransparencyToken; 
@property (nonatomic,readonly) NSString * fmipAppToken; 
@property (nonatomic,readonly) NSDictionary * regionInfo; 
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID; 
@property (getter=isNotesMigrated,nonatomic,readonly) BOOL notesMigrated; 
@property (getter=isRemindersMigrated,nonatomic,readonly) BOOL remindersMigrated; 
@property (getter=isSandboxAccount,nonatomic,readonly) BOOL sandboxAccount; 
@property (getter=isCloudDocsMigrated,nonatomic,readonly) BOOL cloudDocsMigrated; 
@property (getter=hasOptionalTerms,nonatomic,readonly) BOOL optionalTerms; 
@property (getter=isFamilyEligible,nonatomic,readonly) BOOL familyEligible; 
-(BOOL)isManagedAppleID;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSDictionary *)regionInfo;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)provisionedDataclasses;
-(NSDictionary *)dataclassProperties;
-(NSString *)fmipAuthToken;
-(NSString *)fmipAppToken;
-(NSString *)fmipSiriToken;
-(NSString *)searchPartyToken;
-(NSString *)keyTransparencyToken;
-(NSString *)primaryEmail;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSArray *)appleIDAliases;
-(NSString *)appleID;
-(BOOL)isSandboxAccount;
-(NSString *)iCloudAuthToken;
-(NSNumber *)primaryEmailVerified;
-(BOOL)isNotesMigrated;
-(BOOL)isRemindersMigrated;
-(BOOL)isCloudDocsMigrated;
-(BOOL)hasOptionalTerms;
-(BOOL)isFamilyEligible;
@end

