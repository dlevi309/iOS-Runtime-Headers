/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/


@interface TKNetwork : NSObject {

	double _timeoutInterval;

}

@property (nonatomic,readonly) double timeoutInterval;              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
+(void)setShared:(id)arg1 ;
+(id)shared;
-(double)timeoutInterval;
-(void)updateNetworkActivity:(long long)arg1 ;
-(id)loadRequest:(id)arg1 priority:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)downloadRequest:(id)arg1 priority:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)downloadImage:(id)arg1 priority:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

