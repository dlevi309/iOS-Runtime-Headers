/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSArray, NSString, NSDictionary;

@interface CalDAVCalendarSearchTask : CoreDAVTask {

	NSArray* _languages;
	NSString* _location;
	NSString* _calendarType;
	NSDictionary* _urlsToResults;

}

@property (nonatomic,retain,readonly) NSDictionary * urlsToResults;              //@synthesize urlsToResults=_urlsToResults - In the implementation block
-(id)httpMethod;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithLanguages:(id)arg1 location:(id)arg2 calendarType:(id)arg3 url:(id)arg4 ;
-(NSDictionary *)urlsToResults;
@end

