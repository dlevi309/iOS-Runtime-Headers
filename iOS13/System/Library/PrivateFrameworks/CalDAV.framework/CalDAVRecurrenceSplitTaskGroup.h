/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

