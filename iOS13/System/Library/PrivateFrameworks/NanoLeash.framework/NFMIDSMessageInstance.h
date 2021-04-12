/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
*/


@interface NFMIDSMessageInstance : NSObject {

	long long _retryCount;
	double _retryInterval;
	/*^block*/id _retryAction;

}

@property (assign,nonatomic) long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) double retryInterval;              //@synthesize retryInterval=_retryInterval - In the implementation block
@property (nonatomic,copy) id retryAction;                      //@synthesize retryAction=_retryAction - In the implementation block
+(id)newMessageInstanceWithAction:(/*^block*/id)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3 ;
-(id)description;
-(long long)retryCount;
-(void)setRetryCount:(long long)arg1 ;
-(id)retryAction;
-(double)retryInterval;
-(void)setRetryInterval:(double)arg1 ;
-(void)setRetryAction:(id)arg1 ;
@end

