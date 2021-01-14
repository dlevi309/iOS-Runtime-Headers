/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>

@interface SSVDownloadQueueRequest : SSRequest {

	long long _queueType;

}

@property (nonatomic,readonly) long long queueType;              //@synthesize queueType=_queueType - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(long long)queueType;
-(id)initWithQueueType:(long long)arg1 ;
@end

