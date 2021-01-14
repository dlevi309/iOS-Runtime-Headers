/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)bytesWritten;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setBytesWritten:(long long)arg1 ;
-(id)completionHandler;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
@end

