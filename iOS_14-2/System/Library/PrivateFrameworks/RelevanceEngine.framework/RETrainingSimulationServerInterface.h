/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

