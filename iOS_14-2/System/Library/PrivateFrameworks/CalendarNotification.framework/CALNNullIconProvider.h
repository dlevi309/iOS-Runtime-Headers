/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNNotificationIconProvider.h>
#import <libobjc.A.dylib/CALNCalendarIconIdentifierProvider.h>

@class NSString;

@interface CALNNullIconProvider : NSObject <CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)identifierForIconWithDate:(id)arg1 inCalendar:(id)arg2 ;
-(id)pngDataForIconWithIdentifier:(id)arg1 ;
@end

