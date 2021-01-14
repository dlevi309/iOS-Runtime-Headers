/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

