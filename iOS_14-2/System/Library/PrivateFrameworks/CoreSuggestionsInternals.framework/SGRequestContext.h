/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class SGServiceContext, NSOperationQueue;

@interface SGRequestContext : NSObject {

	int _concurrencyBehavior;
	int _backpressureHazard;
	int _extractionMode;
	SGServiceContext* _serviceContext;

}

@property (nonatomic,readonly) NSOperationQueue * processingQueue; 
@property (nonatomic,readonly) NSOperationQueue * storageQueue; 
@property (nonatomic,readonly) SGServiceContext * serviceContext;               //@synthesize serviceContext=_serviceContext - In the implementation block
@property (nonatomic,readonly) int concurrencyBehavior;                         //@synthesize concurrencyBehavior=_concurrencyBehavior - In the implementation block
@property (nonatomic,readonly) int backpressureHazard;                          //@synthesize backpressureHazard=_backpressureHazard - In the implementation block
@property (nonatomic,readonly) int extractionMode;                              //@synthesize extractionMode=_extractionMode - In the implementation block
-(id)init;
-(int)extractionMode;
-(id)initWithServiceContext:(id)arg1 concurrencyBehavior:(int)arg2 backpressureHazard:(int)arg3 extractionMode:(int)arg4 ;
-(int)concurrencyBehavior;
-(int)backpressureHazard;
-(id)initWithServiceContext:(id)arg1 concurrencyBehavior:(int)arg2 backpressureHazard:(int)arg3 ;
-(NSOperationQueue *)processingQueue;
-(SGServiceContext *)serviceContext;
-(NSOperationQueue *)storageQueue;
@end

