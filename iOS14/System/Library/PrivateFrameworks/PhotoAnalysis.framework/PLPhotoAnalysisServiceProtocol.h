/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol PLPhotoAnalysisServiceProtocol <PLPhotoAnalysisJobServiceProtocol,PLPhotoAnalysisGraphServiceProtocol,PLPhotoAnalysisVisionServiceTaxonomyProtocol,PLPhotoAnalysisVisionServiceFaceProcessingProtocol,PLPhotoAnalysisPresentationServiceProtocol>
@required
-(void)writeQALog:(id)arg1;
-(void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)dumpAnalysisStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)notifyLibraryAvailableAtURL:(id)arg1;

@end

