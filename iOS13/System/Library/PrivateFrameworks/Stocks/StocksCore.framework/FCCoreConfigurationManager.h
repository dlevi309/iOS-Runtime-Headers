/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
*/


@protocol FCCoreConfigurationManager <NSObject>
@property (nonatomic,readonly) id<FCCoreConfiguration> configuration; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(id<FCCoreConfiguration>)configuration;
-(void)fetchConfigurationIfNeededWithCompletion:(/*^block*/id)arg1;
-(void)fetchConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2;

@end

