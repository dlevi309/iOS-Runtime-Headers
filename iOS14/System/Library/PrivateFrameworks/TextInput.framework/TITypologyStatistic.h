/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSDictionary;

@interface TITypologyStatistic : NSObject

@property (nonatomic,readonly) NSDictionary * structuredReport; 
@property (nonatomic,readonly) NSDictionary * aggregateReport; 
+(id)statistic;
-(void)visitRecordTextAccepted:(id)arg1 ;
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
-(NSDictionary *)aggregateReport;
-(void)visitRecordHitTest:(id)arg1 ;
-(void)visitRecordSync:(id)arg1 ;
-(void)visitRecordSkipHitTest:(id)arg1 ;
-(NSDictionary *)structuredReport;
-(void)visitRecordCandidateRejected:(id)arg1 ;
@end

