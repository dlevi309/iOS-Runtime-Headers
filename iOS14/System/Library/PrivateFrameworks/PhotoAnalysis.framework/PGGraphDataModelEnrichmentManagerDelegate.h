/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol PGGraphDataModelEnrichmentManagerDelegate <NSObject>
@required
-(void)enrichmentManager:(id)arg1 didCancelProcessor:(id)arg2;
-(void)enrichmentManager:(id)arg1 didFinishEnrichmentSuccessfully:(BOOL)arg2;
-(BOOL)enrichmentManager:(id)arg1 shouldRunProcessor:(id)arg2;
-(void)enrichmentManager:(id)arg1 didRunProcessor:(id)arg2;

@end

