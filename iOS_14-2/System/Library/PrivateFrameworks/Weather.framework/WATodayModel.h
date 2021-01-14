/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


#import <Weather/Weather-Structs.h>
@class NSHashTable, NSOperationQueue, WAForecastModel, NSDate, WFServiceConnection;

@interface WATodayModel : NSObject {

	NSHashTable* _observers;
	NSOperationQueue* _modelOperationQueue;
	BOOL _hasPendingUpdates;
	WAForecastModel* _forecastModel;
	NSDate* _lastUpdateDate;
	WFServiceConnection* _connection;
	ct_green_tea_logger_sRef _greenTeaLogger;

}

@property (nonatomic,retain) WFServiceConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) ct_green_tea_logger_sRef greenTeaLogger;              //@synthesize greenTeaLogger=_greenTeaLogger - In the implementation block
@property (assign,nonatomic) BOOL hasPendingUpdates;                               //@synthesize hasPendingUpdates=_hasPendingUpdates - In the implementation block
@property (nonatomic,retain) WAForecastModel * forecastModel;                      //@synthesize forecastModel=_forecastModel - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdateDate;                              //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
+(id)autoupdatingLocationModelWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2 ;
+(id)currentLocationModel;
+(id)modelWithLocation:(id)arg1 ;
-(NSDate *)lastUpdateDate;
-(void)clearLocationUpdateState;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)setGreenTeaLogger:(ct_green_tea_logger_sRef)arg1 ;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(id)location;
-(WAForecastModel *)forecastModel;
-(id)initWithLocation:(id)arg1 ;
-(WFServiceConnection *)connection;
-(void)removeObserver:(id)arg1 ;
-(void)_executeLocationUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)_persistStateWithModel:(id)arg1 ;
-(void)setConnection:(WFServiceConnection *)arg1 ;
-(ct_green_tea_logger_sRef)greenTeaLogger;
-(void)checkIfNeedsToUpdate;
-(void)_willDeliverForecastModel:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasPendingUpdates;
-(void)setHasPendingUpdates:(BOOL)arg1 ;
-(void)_locationUpdateCompleted:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_forecastUpdateCompleted:(id)arg1 forecastModel:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_executeForecastRetrievalForLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setForecastModel:(WAForecastModel *)arg1 ;
-(void)_fireTodayModelForecastWasUpdated:(id)arg1 ;
-(void)performDelayedUpdatesForObserver:(id)arg1 ;
-(BOOL)executeModelUpdateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasCrossedHourlyBoundary;
-(void)_fireTodayModelWantsUpdate;
@end

