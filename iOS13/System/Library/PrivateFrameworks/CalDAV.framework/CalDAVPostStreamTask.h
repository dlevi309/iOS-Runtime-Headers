/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setFilename:(NSString *)arg1 ;
-(id)responseData;
-(id)requestBody;
-(id)additionalHeaderValues;
-(id)requestBodyStream;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(NSString *)previousScheduleTag;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)lossyAsciiFilename;
-(id)utf8PercentEscapedFilename;
@end

