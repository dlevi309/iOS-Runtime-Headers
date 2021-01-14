/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNNotificationManager.h>

@protocol CALNNotificationManager;
@class NSString;

@interface CALNFilteredNotificationManager : NSObject <CALNNotificationManager> {

	id<CALNNotificationManager> _wrappedNotificationManager;
	/*^block*/id _predicate;

}

@property (nonatomic,readonly) id<CALNNotificationManager> wrappedNotificationManager;              //@synthesize wrappedNotificationManager=_wrappedNotificationManager - In the implementation block
@property (nonatomic,readonly) id predicate;                                                        //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) BOOL isProtectedDataAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fetchRecordsWithSourceIdentifier:(id)arg1 ;
-(id)predicate;
-(void)removeRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 ;
-(void)addRecord:(id)arg1 ;
-(BOOL)isProtectedDataAvailable;
-(void)updateRecord:(id)arg1 ;
-(id<CALNNotificationManager>)wrappedNotificationManager;
-(id)initWithWrappedNotificationManager:(id)arg1 predicate:(/*^block*/id)arg2 ;
@end

