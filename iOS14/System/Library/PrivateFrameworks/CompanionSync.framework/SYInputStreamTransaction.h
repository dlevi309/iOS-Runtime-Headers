/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSDictionary * metadata;                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                    //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSProgress *)progress;
-(NSInputStream *)inputStream;
-(long long)type;
-(NSDictionary *)metadata;
-(id)initWithURL:(id)arg1 metadata:(id)arg2 decompressedSize:(unsigned long long)arg3 ;
@end

