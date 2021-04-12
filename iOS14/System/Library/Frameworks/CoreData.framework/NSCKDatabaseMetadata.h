/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)databaseMetadataForScope:(long long)arg1 forStore:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
+(id)entityPath;
-(void)setDatabaseScope:(long long)arg1 ;
-(long long)databaseScope;
-(void)setHasSubscription:(BOOL)arg1 ;
-(BOOL)hasSubscription;
@end

