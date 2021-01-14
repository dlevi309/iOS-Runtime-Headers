/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSData;

@interface HMDDataStreamHAPPendingWrite : NSObject {

	NSData* _data;
	/*^block*/id _completion;
	unsigned long long _bytesWritten;

}

@property (copy,readonly) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (readonly) id completion;                              //@synthesize completion=_completion - In the implementation block
@property (assign) unsigned long long bytesWritten;              //@synthesize bytesWritten=_bytesWritten - In the implementation block
-(BOOL)isComplete;
-(unsigned long long)bytesWritten;
-(void)setBytesWritten:(unsigned long long)arg1 ;
-(id)completion;
-(NSData *)data;
-(id)initWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)popNextFrameUpToMaxLength:(unsigned long long)arg1 ;
@end

