/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyStatistic.h>

@class NSArray;

@interface TITypologyStatisticComposite : TITypologyStatistic {

	NSArray* _statistics;

}

@property (nonatomic,readonly) NSArray * statistics;              //@synthesize statistics=_statistics - In the implementation block
+(id)statisticCompositeWithStatistics:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(NSArray *)statistics;
-(void)visitTypologyLog:(id)arg1 ;
-(void)visitTypologyRecord:(id)arg1 ;
-(void)visitRecordSync:(id)arg1 ;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(void)visitRecordAutocorrections:(id)arg1 ;
-(void)visitRecordCandidateResultSet:(id)arg1 ;
-(void)visitRecordAcceptedCandidate:(id)arg1 ;
-(void)visitRecordReplacements:(id)arg1 ;
-(void)visitRecordRefinements:(id)arg1 ;
-(void)visitRecordHitTest:(id)arg1 ;
-(void)visitRecordSkipHitTest:(id)arg1 ;
-(void)visitRecordPhraseBoundaryAdjustment:(id)arg1 ;
-(void)visitRecordSetOriginalInput:(id)arg1 ;
-(void)visitRecordTextAccepted:(id)arg1 ;
-(void)visitRecordCandidateRejected:(id)arg1 ;
-(void)visitRecordLastAcceptedCandidateCorrected:(id)arg1 ;
-(void)prepareForComputation;
-(void)finalizeComputation;
-(id)structuredReport;
-(id)aggregateReport;
@end

