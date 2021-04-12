/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNNotificationIconProvider.h>
#import <libobjc.A.dylib/CALNCalendarIconIdentifierProvider.h>

@class NSString;

@interface CALNCUIKIconProvider : NSObject <CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)_parseIconIdentifier:(id)arg1 intoDateComponents:(id*)arg2 calendar:(id*)arg3 type:(long long*)arg4 ;
+(id)_identifierEncodingAllowedCharacters;
-(id)identifierForIconWithDate:(id)arg1 inCalendar:(id)arg2 ;
-(id)pngDataForIconWithIdentifier:(id)arg1 ;
@end

