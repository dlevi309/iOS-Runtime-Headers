/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <CoreData/NSManagedObjectContext.h>

@class NSString;

@interface EKSideTableContext : NSManagedObjectContext {

	NSString* _path;

}
+(id)sideTableContext;
-(id)initWithConcurrencyType:(unsigned long long)arg1 ;
-(id)_managedObjectModel;
-(id)_persistentStoreCoordinator;
-(id)settingForKey:(id)arg1 ;
-(id)delayedProximityAlarms;
-(id)refiringAlarms;
-(void)deleteAllAlarms;
-(id)insertNewAlarm;
-(void)setSetting:(id)arg1 forKey:(id)arg2 ;
-(id)nextAlarmFireTime;
-(id)alarmsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)refiringAlarmAlreadyExists:(int)arg1 ;
-(id)_alarmsMatchingPredicate:(id)arg1 ;
-(id)_settingForKey:(id)arg1 ;
-(id)rootDirectory;
-(id)_pathForPersistentStore;
-(id)_urlForPersistentStore;
-(BOOL)_removeSqliteFiles;
@end

