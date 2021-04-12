/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKCurrentActivitySummaryQueryClientInterface.h>

@class NSDictionary, NSString;

@interface _HKCurrentActivitySummaryQuery : HKQuery <HKCurrentActivitySummaryQueryClientInterface> {

	/*^block*/id _updateHandler;
	NSDictionary* _collectionIntervals;

}

@property (setter=_setCollectionIntervals:,getter=_collectionIntervals,nonatomic,copy) NSDictionary * collectionIntervals;              //@synthesize collectionIntervals=_collectionIntervals - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(void)queue_validate;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)client_deliverActivitySummaries:(id)arg1 queryUUID:(id)arg2 ;
-(void)_setCollectionIntervals:(id)arg1 ;
-(id)_collectionIntervals;
@end

