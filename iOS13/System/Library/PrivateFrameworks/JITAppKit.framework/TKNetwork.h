/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/


@interface TKNetwork : NSObject {

	double _timeoutInterval;

}

@property (nonatomic,readonly) double timeoutInterval;              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
+(id)shared;
+(void)setShared:(id)arg1 ;
-(double)timeoutInterval;
-(void)updateNetworkActivity:(long long)arg1 ;
-(id)loadRequest:(id)arg1 priority:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)downloadRequest:(id)arg1 priority:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)downloadImage:(id)arg1 priority:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

