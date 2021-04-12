/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSData;

@interface NMSMusicRecommendationsRequest : NSObject {

	BOOL _useCachedDataOnly;
	NSData* _cachedData;

}

@property (assign,nonatomic) BOOL useCachedDataOnly;              //@synthesize useCachedDataOnly=_useCachedDataOnly - In the implementation block
@property (nonatomic,retain) NSData * cachedData;                 //@synthesize cachedData=_cachedData - In the implementation block
-(NSData *)cachedData;
-(void)setCachedData:(NSData *)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(void)_continueToForYouRequestWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_continueToProcessResultsWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_performForYouRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_finishWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_continueToLookupWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_continueToLibraryImportWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_performLookupRequestWithModelObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performLibraryImportChangeRequestWithModelObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)useCachedDataOnly;
-(void)setUseCachedDataOnly:(BOOL)arg1 ;
@end

