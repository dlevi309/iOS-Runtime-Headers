/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString, NSSet, ACDManagedAccountType;

@interface ACDManagedAccount : NSManagedObject

@property (nonatomic,retain) NSDate * lastCredentialRenewalRejectionDate; 
@property (nonatomic,retain) id dataclassProperties; 
@property (nonatomic,retain) NSNumber * active; 
@property (nonatomic,retain) NSNumber * warmingUp; 
@property (nonatomic,retain) NSNumber * authenticated; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSString * authenticationType; 
@property (nonatomic,retain) NSString * accountDescription; 
@property (nonatomic,retain) NSNumber * supportsAuthentication; 
@property (nonatomic,retain) NSString * owningBundleID; 
@property (nonatomic,retain) NSString * username; 
@property (nonatomic,retain) NSString * credentialType; 
@property (nonatomic,retain) NSSet * childAccounts; 
@property (nonatomic,retain) NSSet * provisionedDataclasses; 
@property (nonatomic,retain) ACDManagedAccount * parentAccount; 
@property (nonatomic,retain) ACDManagedAccountType * accountType; 
@property (nonatomic,retain) NSSet * customProperties; 
@property (nonatomic,retain) NSSet * enabledDataclasses; 
@property (nonatomic,retain) NSNumber * visible; 
@property (nonatomic,retain) NSString * modificationID; 
-(id)description;
@end

