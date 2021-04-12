/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSUUID, NSDate, CDDCloudKitRegisteredClient;

@interface CDDCloudKitScheduledActivity : NSManagedObject

@property (nonatomic,retain) NSNumber * activityTypeNum; 
@property (nonatomic,retain) NSUUID * activityUUID; 
@property (assign,nonatomic) unsigned long long activityType; 
@property (nonatomic,retain) NSDate * scheduledAt; 
@property (nonatomic,retain) CDDCloudKitRegisteredClient * registeredClient; 
@property (nonatomic,retain) NSNumber * isUserRequestedBackupTask; 
+(id)entityName;
-(void)setActivityType:(unsigned long long)arg1 ;
-(void)populateFromCriteria:(id)arg1 ;
-(unsigned long long)activityType;
-(id)xpcActivityCriteria;
@end

