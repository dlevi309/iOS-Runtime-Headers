/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/SYStreamTransaction.h>

@protocol SYStreamEventHandlerBlocksSYStreamProgress;
@class NSInputStream, NSDictionary, NSURL, NSProgress, NSString;

@interface SYInputStreamTransaction : NSObject <SYStreamTransaction> {

	NSInputStream*<SYStreamEventHandlerBlocks>*<SYStreamProgress> _stream;
	NSDictionary* _metadata;
	NSURL* _fileURL;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSInputStream * inputStream;              //@synthesize stream=_stream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSDictionary * metadata;                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                    //@synthesize progress=_progress - In the implementation block
-(long long)type;
-(NSProgress *)progress;
-(NSDictionary *)metadata;
-(NSInputStream *)inputStream;
-(id)initWithURL:(id)arg1 metadata:(id)arg2 decompressedSize:(unsigned long long)arg3 ;
@end

