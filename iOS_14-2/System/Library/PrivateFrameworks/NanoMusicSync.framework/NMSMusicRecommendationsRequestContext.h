/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSMutableOrderedSet, NSMapTable, MPModelForYouRecommendationsResponse, MPModelResponse, MPModelStoreBrowseResponse, NSArray, NSSet, NMSMutableMediaSyncInfo, NSOrderedSet;

@interface NMSMusicRecommendationsRequestContext : NSObject {

	NSMutableOrderedSet* _recentMusicModelObjects;
	NSMapTable* _modelObjectSectionMap;
	unsigned long long _minimumNumberOfRecentMusicModelObjects;
	MPModelForYouRecommendationsResponse* _forYouResponse;
	MPModelResponse* _libraryRecentMusicResponse;
	MPModelStoreBrowseResponse* _editorialBrowseResponse;
	MPModelResponse* _lookupResponse;
	NSArray* _importedObjects;

}

@property (assign,nonatomic) unsigned long long minimumNumberOfRecentMusicModelObjects;                   //@synthesize minimumNumberOfRecentMusicModelObjects=_minimumNumberOfRecentMusicModelObjects - In the implementation block
@property (nonatomic,retain) MPModelForYouRecommendationsResponse * forYouResponse;                       //@synthesize forYouResponse=_forYouResponse - In the implementation block
@property (nonatomic,retain) MPModelResponse * libraryRecentMusicResponse;                                //@synthesize libraryRecentMusicResponse=_libraryRecentMusicResponse - In the implementation block
@property (nonatomic,retain) MPModelStoreBrowseResponse * editorialBrowseResponse;                        //@synthesize editorialBrowseResponse=_editorialBrowseResponse - In the implementation block
@property (nonatomic,retain) MPModelResponse * lookupResponse;                                            //@synthesize lookupResponse=_lookupResponse - In the implementation block
@property (nonatomic,retain) NSArray * importedObjects;                                                   //@synthesize importedObjects=_importedObjects - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfRecentMusicModelObjects; 
@property (nonatomic,readonly) NSSet * modelObjects; 
@property (nonatomic,readonly) NMSMutableMediaSyncInfo * importedStoreContainerItemMappings; 
@property (nonatomic,readonly) NSOrderedSet * recommendations; 
-(NMSMutableMediaSyncInfo *)importedStoreContainerItemMappings;
-(NSArray *)importedObjects;
-(MPModelForYouRecommendationsResponse *)forYouResponse;
-(MPModelResponse *)lookupResponse;
-(void)setMinimumNumberOfRecentMusicModelObjects:(unsigned long long)arg1 ;
-(BOOL)_recentMusicContainsModelObject:(id)arg1 ;
-(unsigned long long)numberOfRecentMusicModelObjects;
-(MPModelResponse *)libraryRecentMusicResponse;
-(void)setEditorialBrowseResponse:(MPModelStoreBrowseResponse *)arg1 ;
-(MPModelStoreBrowseResponse *)editorialBrowseResponse;
-(void)setImportedObjects:(NSArray *)arg1 ;
-(void)setForYouResponse:(MPModelForYouRecommendationsResponse *)arg1 ;
-(NSOrderedSet *)recommendations;
-(void)_processResponsesIfNeeded;
-(void)setLookupResponse:(MPModelResponse *)arg1 ;
-(NSSet *)modelObjects;
-(unsigned long long)minimumNumberOfRecentMusicModelObjects;
-(void)setLibraryRecentMusicResponse:(MPModelResponse *)arg1 ;
@end

