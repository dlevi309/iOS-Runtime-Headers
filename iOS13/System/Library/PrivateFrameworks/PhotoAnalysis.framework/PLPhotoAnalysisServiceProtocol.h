/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol PLPhotoAnalysisServiceProtocol <PLPhotoAnalysisJobServiceProtocol,PLPhotoAnalysisGraphServiceProtocol,PLPhotoAnalysisVisionServiceTaxonomyProtocol,PLPhotoAnalysisVisionServiceFaceProcessingProtocol>
@required
-(void)notifyLibraryAvailableAtURL:(id)arg1;
-(void)writeQALog:(id)arg1;
-(void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;
-(void)dumpAnalysisStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2;

@end

