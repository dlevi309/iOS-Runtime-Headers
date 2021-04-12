/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, CKServerChangeToken, NSDate, NSSet;

@interface NSCKDatabaseMetadata : NSManagedObject

@property (nonatomic,retain) NSNumber * hasSubscriptionNum; 
@property (nonatomic,retain) NSNumber * databaseScopeNum; 
@property (nonatomic,retain) NSString * databaseName; 
@property (assign,nonatomic) long long databaseScope; 
@property (nonatomic,retain) CKServerChangeToken * currentChangeToken; 
@property (nonatomic,retain) NSDate * lastFetchDate; 
@property (assign,nonatomic) BOOL hasSubscription; 
@property (nonatomic,retain) NSSet * recordZones; 
@property (assign,nonatomic) BOOL hasChanges; 
+(id)entityPath;
+(id)databaseMetadataForScope:(long long)arg1 forStore:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
+(id)stringForScope:(long long)arg1 ;
-(BOOL)hasSubscription;
-(void)setHasSubscription:(BOOL)arg1 ;
-(long long)databaseScope;
-(void)setDatabaseScope:(long long)arg1 ;
@end

