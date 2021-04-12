/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalCalendarDataContainerProvider.h>

@class NSURL, NSString;

@interface CalMockCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider> {

	NSURL* _calendarDataContainerURL;

}

@property (nonatomic,retain) NSURL * calendarDataContainerURL;              //@synthesize calendarDataContainerURL=_calendarDataContainerURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)calendarDataContainerURL;
-(void)setCalendarDataContainerURL:(NSURL *)arg1 ;
-(id)containerForPersonaIdentifier:(id)arg1 ;
@end

