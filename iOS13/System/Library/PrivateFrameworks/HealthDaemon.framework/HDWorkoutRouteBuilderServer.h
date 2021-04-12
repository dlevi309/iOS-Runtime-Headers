/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSeriesBuilderServer.h>
#import <libobjc.A.dylib/HKWorkoutRouteBuilderServerInterface.h>

@class HKWorkoutRoute, NSString;

@interface HDWorkoutRouteBuilderServer : HDSeriesBuilderServer <HKWorkoutRouteBuilderServerInterface> {

	HKWorkoutRoute* _route;

}

@property (nonatomic,retain) HKWorkoutRoute * route;                //@synthesize route=_route - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(id)exportedInterface;
-(void)setRoute:(HKWorkoutRoute *)arg1 ;
-(HKWorkoutRoute *)route;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(void)remote_insertRouteData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)seriesSample;
-(void)createSeriesSampleIfNeeded:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)queue_recoverBuilder;
-(void)_queue_insertRouteData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_validateRouteData:(id)arg1 error:(out id*)arg2 ;
-(void)server_insertRouteData:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

