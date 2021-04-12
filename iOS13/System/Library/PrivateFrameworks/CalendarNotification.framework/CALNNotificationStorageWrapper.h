/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNNotificationStorage.h>

@protocol CALNNotificationStorage;
@class NSString;

@interface CALNNotificationStorageWrapper : NSObject <CALNNotificationStorage> {

	id<CALNNotificationStorage> _wrappedStorage;

}

@property (retain) id<CALNNotificationStorage> wrappedStorage;              //@synthesize wrappedStorage=_wrappedStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CALNNotificationStorage>)wrappedStorage;
-(void)addNotificationRecord:(id)arg1 ;
-(id)notificationRecords;
-(void)removeNotificationRecordsPassingTest:(/*^block*/id)arg1 ;
-(void)addNotificationRecords:(id)arg1 ;
-(void)removeAllNotificationRecords;
-(id)initWithWrappedStorage:(id)arg1 ;
-(void)setWrappedStorage:(id<CALNNotificationStorage>)arg1 ;
@end

