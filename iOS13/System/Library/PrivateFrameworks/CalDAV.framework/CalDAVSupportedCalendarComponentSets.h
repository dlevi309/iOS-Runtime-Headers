/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {

	NSMutableSet* _componentSets;

}
+(BOOL)allowedCalendars:(id)arg1 contains:(id)arg2 ;
-(id)init;
-(id)description;
-(id)componentsAsString;
-(id)copyParseRules;
-(id)childrenToWrite;
-(void)addCompSet:(id)arg1 ;
@end

