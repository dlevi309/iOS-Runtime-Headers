/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol RETrainingSimulationServerInterface <NSObject>
@required
-(void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(/*^block*/id)arg3;
-(void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4;
-(void)availableRelevanceEngines:(/*^block*/id)arg1;
-(void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(/*^block*/id)arg2;
-(void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(/*^block*/id)arg2;
-(void)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(/*^block*/id)arg3;
-(void)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 completion:(/*^block*/id)arg3;

@end

