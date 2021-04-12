/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/SYStreamTransaction.h>

@protocol SYStreamEventHandlerBlocksSYStreamThroughputCounter;
@class NSDictionary, NSProgress, NSURL, NSOutputStream, NSString;

@interface SYOutputStreamTransaction : NSObject <SYStreamTransaction> {

	NSDictionary* _metadata;
	NSURL* _fileURL;
	NSOutputStream*<SYStreamEventHandlerBlocks>*<SYStreamThroughputCounter> _stream;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSDictionary * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                      //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSProgress *)progress;
-(id)initWithMetadata:(id)arg1 ;
-(NSOutputStream *)outputStream;
-(NSURL *)fileURL;
-(long long)type;
-(BOOL)prepare:(id*)arg1 ;
-(NSDictionary *)metadata;
-(void)dealloc;
-(id)finalizeOutput:(id*)arg1 ;
@end

