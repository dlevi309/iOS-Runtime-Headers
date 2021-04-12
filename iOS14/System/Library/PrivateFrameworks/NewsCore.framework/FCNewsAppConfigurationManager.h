/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
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
-(void)fetchAppWidgetConfigurationWithCompletion:(/*^block*/id)arg1;
-(id<FCNewsAppConfiguration>)fetchedAppConfiguration;
-(NSArray *)segmentSetIDs;
-(NSArray *)treatmentIDs;
-(NSString *)feldsparID;
-(id<FCNewsAppConfiguration><FCJSONEncodableObjectProviding>)jsonEncodableAppConfiguration;

@required
-(void)addAppConfigObserver:(id)arg1;
-(id<FCNewsAppConfiguration>)possiblyUnfetchedAppConfiguration;
-(void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(/*^block*/id)arg2;
-(void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchAppConfigurationIfNeededWithCompletion:(/*^block*/id)arg1;
-(void)removeAppConfigObserver:(id)arg1;
-(id<FCNewsAppConfiguration>)appConfiguration;

@end

