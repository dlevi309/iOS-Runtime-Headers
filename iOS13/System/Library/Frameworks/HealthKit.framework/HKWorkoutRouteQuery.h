/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKWorkoutRouteQueryClientInterface.h>

@class HKWorkoutRoute, NSString;

@interface HKWorkoutRouteQuery : HKQuery <HKWorkoutRouteQueryClientInterface> {

	/*^block*/id _dataHandler;
	HKWorkoutRoute* _series;

}

@property (copy) id dataHandler;                                    //@synthesize dataHandler=_dataHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(id)dataHandler;
-(void)setDataHandler:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)client_deliverWorkoutRouteLocations:(id)arg1 isFinal:(BOOL)arg2 query:(id)arg3 ;
-(id)initWithRoute:(id)arg1 dataHandler:(/*^block*/id)arg2 ;
@end

