/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_identifierEncodingAllowedCharacters;
+(BOOL)_parseIconIdentifier:(id)arg1 intoDateComponents:(id*)arg2 calendar:(id*)arg3 type:(long long*)arg4 ;
-(id)identifierForIconWithDate:(id)arg1 inCalendar:(id)arg2 ;
-(id)pngDataForIconWithIdentifier:(id)arg1 ;
@end

