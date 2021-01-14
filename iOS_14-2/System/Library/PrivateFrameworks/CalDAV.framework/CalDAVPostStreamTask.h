/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVPostTask.h>

@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask {

	NSString* _previousScheduleTag;
	NSString* _filename;

}

@property (nonatomic,retain) NSString * previousScheduleTag;              //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
@property (nonatomic,retain) NSString * filename;                         //@synthesize filename=_filename - In the implementation block
-(NSString *)filename;
-(id)additionalHeaderValues;
-(id)responseData;
-(void)setFilename:(NSString *)arg1 ;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(id)requestBody;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)requestBodyStream;
-(NSString *)previousScheduleTag;
-(id)lossyAsciiFilename;
-(id)utf8PercentEscapedFilename;
@end

