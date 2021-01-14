/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol OS_dispatch_queue, OS_dispatch_io;
@class NSObject;

@interface SGDHarvestQueueFileWriter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_io> _io;
	int _offset;
	int _fileId;

}

@property (nonatomic,readonly) unsigned long long bytesWritten; 
@property (nonatomic,readonly) int fileId;                                   //@synthesize fileId=_fileId - In the implementation block
-(unsigned long long)bytesWritten;
-(int)fileId;
-(void)write:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)writeEnumerator:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithDirectory:(id)arg1 fileId:(int)arg2 ;
-(void)dealloc;
@end

