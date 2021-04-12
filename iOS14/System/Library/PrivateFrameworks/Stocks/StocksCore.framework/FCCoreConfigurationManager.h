/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
*/


@protocol FCCoreConfigurationManager <NSObject>
@property (nonatomic,readonly) id<FCCoreConfiguration> configuration; 
@required
-(void)addObserver:(id)arg1;
-(void)fetchConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2;
-(id<FCCoreConfiguration>)configuration;
-(void)removeObserver:(id)arg1;
-(void)fetchConfigurationIfNeededWithCompletion:(/*^block*/id)arg1;

@end

