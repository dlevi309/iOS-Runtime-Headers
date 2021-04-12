/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVGetTask.h>

@class NSFileHandle;

@interface CoreDAVGetToFileTask : CoreDAVGetTask {

	NSFileHandle* _destinationFile;

}

@property (nonatomic,retain) NSFileHandle * destinationFile;              //@synthesize destinationFile=_destinationFile - In the implementation block
-(BOOL)shouldLogResponseBody;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(NSFileHandle *)destinationFile;
-(id)initWithURL:(id)arg1 destinationFile:(id)arg2 ;
-(void)setDestinationFile:(NSFileHandle *)arg1 ;
@end

