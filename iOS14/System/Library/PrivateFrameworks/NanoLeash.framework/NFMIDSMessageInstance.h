/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRetryCount:(long long)arg1 ;
-(long long)retryCount;
-(double)retryInterval;
-(id)description;
-(id)retryAction;
-(void)setRetryInterval:(double)arg1 ;
-(void)setRetryAction:(id)arg1 ;
@end

