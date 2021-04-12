/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/


@protocol TFDataAggregatorDelegate, OS_dispatch_queue;
@class TFFeedbackDataContainer, NSObject;

@interface TFDataAggregator : NSObject {

	TFFeedbackDataContainer* _sessionDataContainer;
	id<TFDataAggregatorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _aggregationQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> aggregationQueue;               //@synthesize aggregationQueue=_aggregationQueue - In the implementation block
@property (nonatomic,readonly) TFFeedbackDataContainer * sessionDataContainer;              //@synthesize sessionDataContainer=_sessionDataContainer - In the implementation block
@property (assign,nonatomic,__weak) id<TFDataAggregatorDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(id<TFDataAggregatorDelegate>)delegate;
-(void)setDelegate:(id<TFDataAggregatorDelegate>)arg1 ;
-(void)_validateProvidedIdentifiersForTasks:(id)arg1 ;
-(TFFeedbackDataContainer *)sessionDataContainer;
-(void)_prepareDestinationDataContainer:(id)arg1 forTasks:(id)arg2 ;
-(id)_loadAndExtractDataForTasks:(id)arg1 intoDataContainer:(id)arg2 ;
-(void)_finishUpdatingDataContainer:(id)arg1 byMergingDataContainer:(id)arg2 forTasks:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)aggregationQueue;
-(id)initWithSessionDataContainer:(id)arg1 ;
-(void)runTasks:(id)arg1 ;
@end

