/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSArray;

@interface CalDAVRecurrenceSplitTaskGroup : CoreDAVTaskGroup {

	NSURL* _folderURL;
	NSArray* _actions;

}

@property (assign,nonatomic,__weak) id<CalDAVRecurrenceSplitTaskGroupDelegate> delegate; 
-(void)startTaskGroup;
-(id)initWithCalendar:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3 ;
@end

