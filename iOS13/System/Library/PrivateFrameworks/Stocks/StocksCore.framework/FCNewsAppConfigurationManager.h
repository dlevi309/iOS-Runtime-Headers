/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
*/

@class NSArray, NSString;


@protocol FCNewsAppConfigurationManager <NSObject>
@property (nonatomic,readonly) id<FCNewsAppConfiguration> appConfiguration; 
@property (nonatomic,readonly) id<FCNewsAppConfiguration> possiblyUnfetchedAppConfiguration; 
@property (nonatomic,readonly) NSArray * treatmentIDs; 
@property (nonatomic,readonly) NSArray * segmentSetIDs; 
@property (nonatomic,copy,readonly) NSString * feldsparID; 
@property (nonatomic,readonly) id<FCNewsAppConfiguration> fetchedAppConfiguration; 
@property (nonatomic,readonly) id<FCNewsAppConfiguration><FCJSONEncodableObjectProviding> jsonEncodableAppConfiguration; 
@optional
-(NSArray *)treatmentIDs;
-(NSArray *)segmentSetIDs;
-(NSString *)feldsparID;
-(void)fetchAppWidgetConfigurationUseBackgroundRefreshRate:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(id<FCNewsAppConfiguration>)fetchedAppConfiguration;
-(id<FCNewsAppConfiguration><FCJSONEncodableObjectProviding>)jsonEncodableAppConfiguration;

@required
-(void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2;
-(id<FCNewsAppConfiguration>)appConfiguration;
-(void)fetchAppConfigurationIfNeededWithCompletion:(/*^block*/id)arg1;
-(id<FCNewsAppConfiguration>)possiblyUnfetchedAppConfiguration;
-(void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(/*^block*/id)arg2;
-(void)fetchTrendingSearchesIfNeededWithCompletion:(/*^block*/id)arg1;
-(void)addAppConfigObserver:(id)arg1;
-(void)removeAppConfigObserver:(id)arg1;

@end

