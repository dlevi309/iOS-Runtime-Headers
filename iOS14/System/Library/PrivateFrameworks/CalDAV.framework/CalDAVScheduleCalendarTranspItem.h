/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _transparent;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * transparent;              //@synthesize transparent=_transparent - In the implementation block
@property (nonatomic,readonly) BOOL isScheduleTransparent; 
-(id)init;
-(CoreDAVItemWithNoChildren *)transparent;
-(id)copyParseRules;
-(BOOL)isScheduleTransparent;
-(void)setTransparent:(CoreDAVItemWithNoChildren *)arg1 ;
@end

