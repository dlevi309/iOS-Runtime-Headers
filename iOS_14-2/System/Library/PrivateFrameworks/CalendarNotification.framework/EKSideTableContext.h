/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <CoreData/NSManagedObjectContext.h>

@class NSString;

@interface EKSideTableContext : NSManagedObjectContext {

	NSString* _path;

}
+(id)sideTableContext;
-(id)_persistentStoreCoordinator;
-(BOOL)refiringAlarmAlreadyExists:(int)arg1 ;
-(id)settingForKey:(id)arg1 ;
-(id)_pathForPersistentStore;
-(id)insertNewAlarm;
-(id)_settingForKey:(id)arg1 ;
-(BOOL)_removeSqliteFiles;
-(void)deleteAllAlarms;
-(id)_managedObjectModel;
-(id)delayedProximityAlarms;
-(id)alarmsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)setSetting:(id)arg1 forKey:(id)arg2 ;
-(id)initWithConcurrencyType:(unsigned long long)arg1 ;
-(id)rootDirectory;
-(id)refiringAlarms;
-(id)nextAlarmFireTime;
-(id)_alarmsMatchingPredicate:(id)arg1 ;
-(id)_urlForPersistentStore;
@end

