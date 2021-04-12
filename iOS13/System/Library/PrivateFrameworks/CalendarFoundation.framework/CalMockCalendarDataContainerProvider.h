/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)containerForPersonaIdentifier:(id)arg1 ;
-(void)setCalendarDataContainerURL:(NSURL *)arg1 ;
@end

