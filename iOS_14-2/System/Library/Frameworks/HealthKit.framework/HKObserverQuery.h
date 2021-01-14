/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKObserverQueryClientInterface.h>

@class NSString;

@interface HKObserverQuery : HKQuery <HKObserverQueryClientInterface> {

	BOOL _observeUnfrozenSeries;
	/*^block*/id _updateHandler;

}

@property (nonatomic,readonly) id updateHandler;                      //@synthesize updateHandler=_updateHandler - In the implementation block
@property (assign,nonatomic) BOOL observeUnfrozenSeries;              //@synthesize observeUnfrozenSeries=_observeUnfrozenSeries - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(id)updateHandler;
-(void)queue_populateConfiguration:(id)arg1 ;
-(id)initWithSampleType:(id)arg1 predicate:(id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(BOOL)observeUnfrozenSeries;
-(void)setObserveUnfrozenSeries:(BOOL)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)client_dataUpdatedInDatabaseWithAnchor:(id)arg1 query:(id)arg2 ;
-(void)queue_validate;
@end

