/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)activityType;
-(void)setActivityType:(unsigned long long)arg1 ;
-(void)populateFromCriteria:(id)arg1 ;
-(id)xpcActivityCriteria;
@end

