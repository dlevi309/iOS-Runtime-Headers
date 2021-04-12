/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKSourceQueryClientInterface.h>

@protocol HKQueryServerInterface;
@class NSString;

@interface HKSourceQuery : HKQuery <HKSourceQueryClientInterface> {

	BOOL _hasDeliveredInitialResults;
	id<HKQueryServerInterface> _serverProxy;
	/*^block*/id _completionHandler;
	/*^block*/id _updateHandler;

}

@property (nonatomic,readonly) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id updateHandler;                        //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureClientInterface:(id)arg1 ;
+(id)clientInterfaceProtocol;
+(void)configureServerInterface:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(id)updateHandler;
-(id)completionHandler;
-(void)client_deliverSources:(id)arg1 forQuery:(id)arg2 ;
-(void)client_deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)queue_validate;
@end

