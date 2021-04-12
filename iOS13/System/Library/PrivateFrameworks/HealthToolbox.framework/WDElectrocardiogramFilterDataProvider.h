/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <libobjc.A.dylib/HKSampleTypeUpdateControllerObserver.h>

@protocol WDElectrocardiogramFilterDataProviderDelegate, OS_dispatch_queue;
@class WDProfile, NSObject, NSMutableDictionary, HKSampleCountQuery, NSString;

@interface WDElectrocardiogramFilterDataProvider : NSObject <HKSampleTypeUpdateControllerObserver> {

	WDProfile* _profile;
	id<WDElectrocardiogramFilterDataProviderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _resourceQueue;
	NSMutableDictionary* _counts;
	HKSampleCountQuery* _electrocardiogramCountQuery;
	HKSampleCountQuery* _sinusRhythmCountQuery;
	HKSampleCountQuery* _atrialFibrillationCountQuery;
	HKSampleCountQuery* _highLowHeartRateCountQuery;
	HKSampleCountQuery* _inconclusiveCountQuery;

}

@property (assign,nonatomic,__weak) WDProfile * profile;                                                     //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) id<WDElectrocardiogramFilterDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                                       //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resourceQueue;                                     //@synthesize resourceQueue=_resourceQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * counts;                                                   //@synthesize counts=_counts - In the implementation block
@property (nonatomic,retain) HKSampleCountQuery * electrocardiogramCountQuery;                               //@synthesize electrocardiogramCountQuery=_electrocardiogramCountQuery - In the implementation block
@property (nonatomic,retain) HKSampleCountQuery * sinusRhythmCountQuery;                                     //@synthesize sinusRhythmCountQuery=_sinusRhythmCountQuery - In the implementation block
@property (nonatomic,retain) HKSampleCountQuery * atrialFibrillationCountQuery;                              //@synthesize atrialFibrillationCountQuery=_atrialFibrillationCountQuery - In the implementation block
@property (nonatomic,retain) HKSampleCountQuery * highLowHeartRateCountQuery;                                //@synthesize highLowHeartRateCountQuery=_highLowHeartRateCountQuery - In the implementation block
@property (nonatomic,retain) HKSampleCountQuery * inconclusiveCountQuery;                                    //@synthesize inconclusiveCountQuery=_inconclusiveCountQuery - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_atrialFibrillationClassificationPredicateWithValue:(unsigned long long)arg1 ;
+(id)_atrialFibrillationClassifications;
+(id)_atrialFibrillationClassificationPredicateWithClassifications:(id)arg1 ;
+(id)_highLowHeartRateClassifications;
+(id)_inconclusiveClassifications;
+(id)_atrialFibrillationClassificationPredicateWithValues:(id)arg1 ;
+(id)electrocardiogramPredicateForType:(long long)arg1 ;
+(id)cellTitleForType:(long long)arg1 ;
+(id)viewControllerTitleForType:(long long)arg1 ;
-(id<WDElectrocardiogramFilterDataProviderDelegate>)delegate;
-(void)setDelegate:(id<WDElectrocardiogramFilterDataProviderDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(WDProfile *)profile;
-(void)setProfile:(WDProfile *)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)resourceQueue;
-(NSMutableDictionary *)counts;
-(void)setCounts:(NSMutableDictionary *)arg1 ;
-(id)initWithProfile:(id)arg1 delegate:(id)arg2 ;
-(void)_stopQueries;
-(void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2 ;
-(void)setResourceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_countQueryForType:(long long)arg1 ;
-(void)setElectrocardiogramCountQuery:(HKSampleCountQuery *)arg1 ;
-(void)setSinusRhythmCountQuery:(HKSampleCountQuery *)arg1 ;
-(void)setAtrialFibrillationCountQuery:(HKSampleCountQuery *)arg1 ;
-(void)setHighLowHeartRateCountQuery:(HKSampleCountQuery *)arg1 ;
-(void)setInconclusiveCountQuery:(HKSampleCountQuery *)arg1 ;
-(HKSampleCountQuery *)electrocardiogramCountQuery;
-(HKSampleCountQuery *)sinusRhythmCountQuery;
-(HKSampleCountQuery *)atrialFibrillationCountQuery;
-(HKSampleCountQuery *)highLowHeartRateCountQuery;
-(HKSampleCountQuery *)inconclusiveCountQuery;
-(long long)_rQueue_countForType:(long long)arg1 ;
-(long long)countForType:(long long)arg1 ;
-(void)_rQueue_setCount:(long long)arg1 forType:(long long)arg2 ;
-(void)_rQueue_notifyDelegateDidUpdateCountForType:(long long)arg1 ;
-(void)_safelyStopQuery:(id)arg1 ;
-(id)displayStringCountForType:(long long)arg1 ;
-(id)_filterSamples:(id)arg1 matchingAtrialFibrillationClassification:(unsigned long long)arg2 ;
-(id)_filterSamples:(id)arg1 matchingAtrialFibrillationClassifications:(id)arg2 ;
@end

