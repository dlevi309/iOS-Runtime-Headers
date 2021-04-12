/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class NSUUID, NSNumber, NSDate, NSString, STCoreUser, STFamilyOrganization;

@interface STAskForTimeRequestResponse : NSManagedObject

@property (nonatomic,retain) NSUUID * identifier; 
@property (nonatomic,retain) NSNumber * timeRequested; 
@property (assign,nonatomic) long long usageType; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * requestedApplicationBundleIdentifier; 
@property (nonatomic,copy) NSString * requestedCategoryIdentifier; 
@property (nonatomic,copy) NSString * requestedWebDomain; 
@property (nonatomic,retain) STCoreUser * requestingUser; 
@property (nonatomic,retain) NSDate * requestTimeStamp; 
@property (nonatomic,retain) NSNumber * amountGranted; 
@property (nonatomic,retain) NSNumber * answer; 
@property (nonatomic,retain) NSDate * responseTimeStamp; 
@property (nonatomic,retain) STCoreUser * respondingUser; 
@property (nonatomic,retain) STFamilyOrganization * familyOrganization; 
+(id)_fetchPredicateForAskForTimeRequest:(id)arg1 requestingUserDSID:(id)arg2 ;
+(id)upsertAskForTimeRequest:(id)arg1 fromUser:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(void)awakeFromInsert;
@end

