/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalCalendarDataContainerProvider.h>

@class NSString;

@interface CalUMCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_calendarGroupContainer;
-(id)containerForPersonaIdentifier:(id)arg1 ;
-(id)_containerForPersonaIdentifier:(id)arg1 containerProviderBlock:(/*^block*/id)arg2 ;
-(void)_performBlockAsPersonaWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
@end

