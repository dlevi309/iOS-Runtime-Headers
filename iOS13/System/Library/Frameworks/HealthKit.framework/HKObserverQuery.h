/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)updateHandler;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)setObserveUnfrozenSeries:(BOOL)arg1 ;
-(void)client_dataUpdatedInDatabaseWithAnchor:(id)arg1 query:(id)arg2 ;
-(id)initWithSampleType:(id)arg1 predicate:(id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(BOOL)observeUnfrozenSeries;
@end

