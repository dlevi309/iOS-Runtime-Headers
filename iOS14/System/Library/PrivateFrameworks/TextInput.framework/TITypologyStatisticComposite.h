/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyStatistic.h>

@class NSArray;

@interface TITypologyStatisticComposite : TITypologyStatistic {

	NSArray* _statistics;

}

@property (nonatomic,readonly) NSArray * statistics;              //@synthesize statistics=_statistics - In the implementation block
+(id)statisticCompositeWithStatistics:(id)arg1 ;
-(void)visitRecordTextAccepted:(id)arg1 ;
-(NSArray *)statistics;
-(void)visitTypologyLog:(id)arg1 ;
-(void)visitTypologyRecord:(id)arg1 ;
-(void)visitRecordAutocorrections:(id)arg1 ;
-(void)visitRecordAcceptedCandidate:(id)arg1 ;
-(void)visitRecordCandidateResultSet:(id)arg1 ;
-(void)visitRecordReplacements:(id)arg1 ;
-(void)prepareForComputation;
-(void)visitRecordRefinements:(id)arg1 ;
-(void)visitRecordPhraseBoundaryAdjustment:(id)arg1 ;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(void)visitRecordSetOriginalInput:(id)arg1 ;
-(void)visitRecordLastAcceptedCandidateCorrected:(id)arg1 ;
-(void)finalizeComputation;
-(id)aggregateReport;
-(void)visitRecordHitTest:(id)arg1 ;
-(void)visitRecordSync:(id)arg1 ;
-(void)visitRecordSkipHitTest:(id)arg1 ;
-(id)structuredReport;
-(void)visitRecordCandidateRejected:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
@end

