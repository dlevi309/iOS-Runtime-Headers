/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ktrace.framework/ktrace
*/

#import <ktrace/ktrace-Structs.h>
#import <libobjc.A.dylib/OSLogEventDeserializerDataSourceDelegate.h>

@class NSData;

@interface KtraceLoggingDataSource : NSObject <OSLogEventDeserializerDataSourceDelegate> {

	BOOL _skipFirst;
	ktrace_file* _ktfile;
	ktrace_chunk* _nextChunk;
	NSData* _metadata;

}

@property (assign,nonatomic) ktrace_file* _ktfile;                  //@synthesize ktfile=_ktfile - In the implementation block
@property (nonatomic,retain) NSData * _metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) ktrace_chunk* _nextChunk;              //@synthesize nextChunk=_nextChunk - In the implementation block
@property (assign,nonatomic) BOOL _skipFirst;                       //@synthesize skipFirst=_skipFirst - In the implementation block
-(NSData *)_metadata;
-(id)nextEventDataChunk;
-(id)metadataChunk;
-(ktrace_file*)_ktfile;
-(void)dealloc;
-(void)set_metadata:(NSData *)arg1 ;
-(id)initWithKtraceFile:(ktrace_file*)arg1 ;
-(void)set_ktfile:(ktrace_file*)arg1 ;
-(ktrace_chunk*)_nextChunk;
-(void)set_nextChunk:(ktrace_chunk*)arg1 ;
-(BOOL)_skipFirst;
-(void)set_skipFirst:(BOOL)arg1 ;
@end

