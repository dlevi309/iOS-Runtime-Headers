/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class NSArray;

@interface HMCharacteristicBatchRequest : NSObject {

	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;
	NSArray* _requests;

}

@property (nonatomic,retain) NSArray * requests;              //@synthesize requests=_requests - In the implementation block
@property (nonatomic,copy) id progressHandler;                //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(BOOL)validateRequestTypes:(id)arg1 requestClass:(Class)arg2 ;
+(id)characteristicBatchRequestWithReadRequests:(id)arg1 ;
+(id)characteristicBatchRequestWithWriteRequests:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
-(id)initWithRequests:(id)arg1 requestClass:(Class)arg2 ;
@end

