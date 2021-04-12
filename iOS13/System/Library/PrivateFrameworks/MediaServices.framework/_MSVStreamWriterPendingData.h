/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@class NSData;

@interface _MSVStreamWriterPendingData : NSObject {

	NSData* _data;
	/*^block*/id _completionHandler;
	long long _bytesWritten;

}

@property (nonatomic,copy) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completionHandler;                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long bytesWritten;              //@synthesize bytesWritten=_bytesWritten - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(long long)bytesWritten;
-(void)setBytesWritten:(long long)arg1 ;
@end

