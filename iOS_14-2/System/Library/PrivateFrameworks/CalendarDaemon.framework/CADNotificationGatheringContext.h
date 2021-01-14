/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


#import <CalendarDaemon/CalendarDaemon-Structs.h>
@class NSString, NSMutableArray, NSArray, NSDate;

@interface CADNotificationGatheringContext : NSObject {

	NSString* _sourceExternalIdentifier;
	BOOL _excludingDelegateSources;
	BOOL _filteredByShowsNotificationsFlag;
	NSMutableArray* _notificationTypes;
	NSMutableArray* _rowIDs;
	NSMutableArray* _occurrenceDates;
	double _earliestExpirationDate;
	CalDatabase* _database;
	double _now;

}

@property (nonatomic,readonly) CalDatabase* database;                              //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSArray * notificationTypes; 
@property (nonatomic,readonly) NSArray * rowIDs; 
@property (nonatomic,readonly) NSArray * occurrenceDates; 
@property (nonatomic,readonly) double now;                                         //@synthesize now=_now - In the implementation block
@property (nonatomic,readonly) NSDate * earliestExpiringNotification; 
-(double)now;
-(NSArray *)rowIDs;
-(CalDatabase*)database;
-(id)initWithDatabase:(CalDatabase*)arg1 forSourceWithExternalIdentifier:(id)arg2 excludingDelegateSources:(BOOL)arg3 filteredByShowsNotificationsFlag:(BOOL)arg4 ;
-(NSArray *)notificationTypes;
-(NSDate *)earliestExpiringNotification;
-(NSArray *)occurrenceDates;
-(BOOL)shouldSkipNotificationForStore:(const void*)arg1 ;
-(double)expirationTimestampForEvent:(const void*)arg1 withInitialOccurrenceDate:(double)arg2 ;
-(void)addNotificationWithType:(int)arg1 rowID:(int)arg2 occurrenceDate:(double)arg3 expirationDate:(double)arg4 ;
-(void)addNotificationWithType:(int)arg1 rowID:(int)arg2 expirationDate:(double)arg3 ;
-(double)expirationTimestampForEvent:(const void*)arg1 ;
-(double)expirationTimestampForRecurrence:(const void*)arg1 event:(const void*)arg2 ;
-(double)endDateOfLastOccurrenceInCacheForEvent:(const void*)arg1 ;
@end

