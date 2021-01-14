/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLMediaAnalysisServiceRequestAdapter : NSObject
+(int)queryProgressDetail:(id*)arg1 forPhotoLibraryURL:(id)arg2 andTaskID:(unsigned long long)arg3 ;
+(long long)requestResetFaceClassificationModelForPhotoLibraryURL:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(long long)requestClusterCacheValidationWithPhotoLibraryURL:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(long long)requestRebuildPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(long long)requestPersonPromoterStatusWithAdvancedFlag:(BOOL)arg1 photoLibraryURL:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(long long)requestResetFaceClusteringStateWithPhotoLibraryURL:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(long long)requestSuggestedMePersonIdentifierWithContext:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(unsigned long long)faceAnalysisTaskID;
+(long long)requestReclusterFacesWithPhotoLibraryURL:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(long long)invalidRequestID;
+(long long)requestQuickFaceIdentificationForPhotoLibraryURL:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
+(long long)requestFaceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progessHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(long long)requestSuggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 photoLibraryURL:(id)arg4 progessHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(long long)requestUpdateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 photoLibraryURL:(id)arg3 progessHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)cancelRequest:(long long)arg1 ;
@end

