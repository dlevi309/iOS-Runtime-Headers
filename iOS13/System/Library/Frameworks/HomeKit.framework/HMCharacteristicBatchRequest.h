/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(id)initWithRequests:(id)arg1 requestClass:(Class)arg2 ;
@end

