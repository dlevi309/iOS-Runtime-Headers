/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSData, NSDictionary;

@interface NMSMusicRecommendationsRequest : NSObject {

	BOOL _useCachedDataOnly;
	NSData* _cachedData;
	NSDictionary* _unarchivedCombinedResponsesDictionary;

}

@property (nonatomic,retain) NSDictionary * unarchivedCombinedResponsesDictionary;              //@synthesize unarchivedCombinedResponsesDictionary=_unarchivedCombinedResponsesDictionary - In the implementation block
@property (assign,nonatomic) BOOL useCachedDataOnly;                                            //@synthesize useCachedDataOnly=_useCachedDataOnly - In the implementation block
@property (nonatomic,retain) NSData * cachedData;                                               //@synthesize cachedData=_cachedData - In the implementation block
-(NSData *)cachedData;
-(void)_continueToLookupWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(void)_performLibraryImportChangeRequestWithModelObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_unarchivedCombinedResponsesDictionary;
-(void)_performLookupRequestWithModelObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary *)unarchivedCombinedResponsesDictionary;
-(void)setUseCachedDataOnly:(BOOL)arg1 ;
-(void)_performLibraryRecentMusicRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_continueToEditorialRequestWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_performEditorialBrowseRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_continueToLibraryRecentMusicRecommedationsWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_continueToForYouRequestWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)setCachedData:(NSData *)arg1 ;
-(void)_performForYouRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_finishWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(BOOL)useCachedDataOnly;
-(void)_continueToProcessResultsWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_continueToLibraryImportWithContext:(id)arg1 queue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)setUnarchivedCombinedResponsesDictionary:(NSDictionary *)arg1 ;
@end

