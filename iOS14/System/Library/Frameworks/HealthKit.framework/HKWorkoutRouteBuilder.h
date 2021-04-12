/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKSeriesBuilder.h>
#import <libobjc.A.dylib/HKSeriesBuilderClientInterface.h>

@class NSString;

@interface HKWorkoutRouteBuilder : HKSeriesBuilder <HKSeriesBuilderClientInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskServerIdentifier;
+(void)configureClientInterface:(id)arg1 ;
+(id)serverInterface;
+(id)clientInterface;
+(void)configureServerInterface:(id)arg1 ;
-(id)init;
-(void)_resourceQueue_insertRouteData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resourceQueue_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithHealthStore:(id)arg1 device:(id)arg2 ;
-(void)insertRouteData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(id)initWithHealthStore:(id)arg1 identifier:(id)arg2 device:(id)arg3 workoutBuilderID:(id)arg4 ;
-(void)addMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

