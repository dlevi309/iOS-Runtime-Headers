/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVChecksumVersionsItem : CoreDAVItem {

	NSMutableSet* _versionStringsSupported;

}
-(id)init;
-(id)copyParseRules;
-(BOOL)supportsVersion:(id)arg1 ;
-(void)addVersionSupported:(id)arg1 ;
@end

