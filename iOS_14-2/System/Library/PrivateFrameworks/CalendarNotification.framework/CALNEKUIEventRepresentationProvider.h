/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNDataSourceEventRepresentationProvider.h>
#import <libobjc.A.dylib/CALNSourceEventRepresentationProvider.h>

@class NSString;

@interface CALNEKUIEventRepresentationProvider : NSObject <CALNDataSourceEventRepresentationProvider, CALNSourceEventRepresentationProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)eventRepresentationDictionaryForUpcomingEvent:(id)arg1 date:(id)arg2 displayTimeZone:(id)arg3 ;
-(id)updateEventRepresentationDictionary:(id)arg1 withHypothesisMessage:(id)arg2 ;
-(id)eventRepresentationDictionaryForSharedCalendarInvitationNotificationWithTitle:(id)arg1 message:(id)arg2 ;
-(id)eventRepresentationDictionaryForInvitationNotification:(id)arg1 event:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 ;
-(id)eventRepresentationDictionaryForResourceChangeNotification:(id)arg1 message:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 ;
-(id)eventRepresentationDictionaryForResponseNotificationWithTitle:(id)arg1 message:(id)arg2 ;
@end

