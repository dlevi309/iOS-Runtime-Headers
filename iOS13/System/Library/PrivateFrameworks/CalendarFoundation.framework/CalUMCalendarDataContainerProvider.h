/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)containerForPersonaIdentifier:(id)arg1 ;
-(id)_calendarGroupContainer;
-(id)_containerForPersonaIdentifier:(id)arg1 containerProviderBlock:(/*^block*/id)arg2 ;
-(void)_performBlockAsPersonaWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
@end

