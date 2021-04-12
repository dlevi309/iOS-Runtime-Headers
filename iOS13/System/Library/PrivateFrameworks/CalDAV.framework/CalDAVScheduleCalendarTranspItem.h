/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _transparent;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * transparent;              //@synthesize transparent=_transparent - In the implementation block
@property (nonatomic,readonly) BOOL isScheduleTransparent; 
-(CoreDAVItemWithNoChildren *)transparent;
-(BOOL)isScheduleTransparent;
-(id)copyParseRules;
-(void)setTransparent:(CoreDAVItemWithNoChildren *)arg1 ;
@end

