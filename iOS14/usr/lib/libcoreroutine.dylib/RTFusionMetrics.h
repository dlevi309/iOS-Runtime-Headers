/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTMetric.h>
#import <libobjc.A.dylib/RTMetricProtocol.h>

@class NSArray, NSString;

@interface RTFusionMetrics : RTMetric <RTMetricProtocol> {

	NSArray* _bluePOICandidates;
	NSArray* _localHintCandidates;
	NSArray* _learnedPlaceCandidatesExcludingHomeWork;
	NSArray* _learnedPlaceHomeWorkCandidates;

}

@property (nonatomic,retain) NSArray * bluePOICandidates;                                    //@synthesize bluePOICandidates=_bluePOICandidates - In the implementation block
@property (nonatomic,retain) NSArray * localHintCandidates;                                  //@synthesize localHintCandidates=_localHintCandidates - In the implementation block
@property (nonatomic,retain) NSArray * learnedPlaceCandidatesExcludingHomeWork;              //@synthesize learnedPlaceCandidatesExcludingHomeWork=_learnedPlaceCandidatesExcludingHomeWork - In the implementation block
@property (nonatomic,retain) NSArray * learnedPlaceHomeWorkCandidates;                       //@synthesize learnedPlaceHomeWorkCandidates=_learnedPlaceHomeWorkCandidates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_RT3)event;
+(id)supportedMetricKeys;
+(id)booleanKeys;
+(id)integerKeys;
+(id)doubleKeys;
+(id)bucketedKeys;
+(id)unsignedIntegerKeys;
-(BOOL)submitMetricsWithError:(id*)arg1 ;
-(void)setMetricsUsingInputCandidates:(id)arg1 outputFusedInferredMapItems:(id)arg2 bestFusedInferredMapItem:(id)arg3 outputError:(id)arg4 ;
-(id)initWithLoggingEnabled:(BOOL)arg1 ;
-(void)setDerivedMetrics;
-(void)setInputMetrics:(id)arg1 ;
-(void)setOutputMetrics:(id)arg1 bestFusedInferredMapItem:(id)arg2 outputError:(id)arg3 ;
-(NSArray *)bluePOICandidates;
-(void)setBluePOICandidates:(NSArray *)arg1 ;
-(NSArray *)localHintCandidates;
-(void)setLocalHintCandidates:(NSArray *)arg1 ;
-(NSArray *)learnedPlaceCandidatesExcludingHomeWork;
-(void)setLearnedPlaceCandidatesExcludingHomeWork:(NSArray *)arg1 ;
-(NSArray *)learnedPlaceHomeWorkCandidates;
-(void)setLearnedPlaceHomeWorkCandidates:(NSArray *)arg1 ;
@end

