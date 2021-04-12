/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSSet;

@interface ACDManagedAccountType : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSNumber * supportsMultipleAccounts; 
@property (nonatomic,retain) NSString * accountTypeDescription; 
@property (nonatomic,retain) NSString * credentialProtectionPolicy; 
@property (nonatomic,retain) NSNumber * supportsAuthentication; 
@property (nonatomic,retain) NSNumber * visibility; 
@property (nonatomic,retain) NSString * credentialType; 
@property (nonatomic,retain) NSString * owningBundleID; 
@property (nonatomic,retain) NSSet * supportedDataclasses; 
@property (nonatomic,retain) NSSet * permission; 
@property (nonatomic,retain) NSSet * accounts; 
@property (nonatomic,retain) NSSet * accessKeys; 
@property (nonatomic,retain) NSSet * syncableDataclasses; 
@property (nonatomic,retain) NSNumber * obsolete; 
-(id)description;
@end

