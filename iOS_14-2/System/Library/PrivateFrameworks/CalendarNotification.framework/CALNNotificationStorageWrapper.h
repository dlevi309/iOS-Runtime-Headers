/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)notificationRecords;
-(id<CALNNotificationStorage>)wrappedStorage;
-(void)addNotificationRecords:(id)arg1 ;
-(id)initWithWrappedStorage:(id)arg1 ;
-(void)addNotificationRecord:(id)arg1 ;
-(void)removeNotificationRecordsPassingTest:(/*^block*/id)arg1 ;
-(void)removeAllNotificationRecords;
-(void)setWrappedStorage:(id<CALNNotificationStorage>)arg1 ;
@end

