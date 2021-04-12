/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNNotificationManager <NSObject>
@property (nonatomic,readonly) BOOL isProtectedDataAvailable; 
@required
-(void)addRecord:(id)arg1;
-(BOOL)isProtectedDataAvailable;
-(void)removeRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
-(void)updateRecord:(id)arg1;
-(id)fetchRecordsWithSourceIdentifier:(id)arg1;

@end

