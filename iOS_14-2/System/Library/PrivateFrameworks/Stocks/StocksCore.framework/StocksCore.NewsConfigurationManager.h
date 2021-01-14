/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
*/

#import <libobjc.A.dylib/FCCoreConfigurationManager.h>
#import <libobjc.A.dylib/FCNewsAppConfigurationManager.h>

@class NSArray, NSString;

@interface StocksCore.NewsConfigurationManager : NSObject <FCCoreConfigurationManager, FCNewsAppConfigurationManager> {

	 appConfigurationManager;
	 coreConfigObservers;
	 appConfigObservers;
	 lastKnownAppConfig;
	 lastKnownNewsConfig;
	 configLock;

}

@property (readonly,nonatomic) id<FCCoreConfiguration> configuration; 
@property (readonly,nonatomic) NSArray * treatmentIDs; 
@property (readonly,nonatomic) NSArray * segmentSetIDs; 
@property (readonly,nonatomic) id<FCNewsAppConfiguration> appConfiguration; 
@property (readonly,nonatomic) id<FCNewsAppConfiguration> possiblyUnfetchedAppConfiguration; 
-(void)addObserver:(id)arg1 ;
-(void)addAppConfigObserver:(id)arg1 ;
-(id<FCNewsAppConfiguration>)possiblyUnfetchedAppConfiguration;
-(void)fetchConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)segmentSetIDs;
-(NSArray *)treatmentIDs;
-(id<FCCoreConfiguration>)configuration;
-(void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAppConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)removeAppConfigObserver:(id)arg1 ;
-(id<FCNewsAppConfiguration>)appConfiguration;
-(void)fetchConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
@end

