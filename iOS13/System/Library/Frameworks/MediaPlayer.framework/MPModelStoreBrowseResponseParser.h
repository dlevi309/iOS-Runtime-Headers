/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPSectionedCollection, NSArray, NSDictionary, NSSet, ICUserIdentity, MPStoreItemMetadataResponse, MPModelStoreBrowseSectionBuilder, MPModelStoreBrowseContentItemBuilder, MPChangeDetails;

@interface MPModelStoreBrowseResponseParser : NSObject {

	MPSectionedCollection* _additionalContentIdentifiers;
	NSArray* _allAdditionalContentIdentifiersNeedingLookup;
	long long _parseOnceToken;
	MPSectionedCollection* _results;
	NSDictionary* _storePlatformDataResults;
	NSSet* _unavailableContentIdentifiers;
	ICUserIdentity* _userIdentity;
	SCD_Struct_MP75 _options;
	id _rawResponseOutput;
	MPModelStoreBrowseResponseParser* _previousParser;
	MPStoreItemMetadataResponse* _additionalStoreItemMetadataResponse;
	MPModelStoreBrowseSectionBuilder* _sectionBuilder;
	MPModelStoreBrowseContentItemBuilder* _contentItemBuilder;
	MPChangeDetails* _changeDetails;

}

@property (nonatomic,readonly) id rawResponseOutput;                                                           //@synthesize rawResponseOutput=_rawResponseOutput - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP75 options;                                                        //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) MPModelStoreBrowseResponseParser * previousParser;                              //@synthesize previousParser=_previousParser - In the implementation block
@property (nonatomic,readonly) MPStoreItemMetadataResponse * additionalStoreItemMetadataResponse;              //@synthesize additionalStoreItemMetadataResponse=_additionalStoreItemMetadataResponse - In the implementation block
@property (nonatomic,readonly) MPModelStoreBrowseSectionBuilder * sectionBuilder;                              //@synthesize sectionBuilder=_sectionBuilder - In the implementation block
@property (nonatomic,readonly) MPModelStoreBrowseContentItemBuilder * contentItemBuilder;                      //@synthesize contentItemBuilder=_contentItemBuilder - In the implementation block
@property (nonatomic,readonly) MPSectionedCollection * results; 
@property (nonatomic,readonly) MPChangeDetails * changeDetails;                                                //@synthesize changeDetails=_changeDetails - In the implementation block
@property (nonatomic,readonly) MPSectionedCollection * additionalContentIdentifiers; 
@property (nonatomic,readonly) NSArray * allAdditionalContentIdentifiersNeedingLookup; 
-(SCD_Struct_MP75)options;
-(MPSectionedCollection *)results;
-(void)_parse;
-(MPChangeDetails *)changeDetails;
-(id)initWithRawResponseOutput:(id)arg1 options:(SCD_Struct_MP75)arg2 sectionBuilder:(id)arg3 contentItemBuilder:(id)arg4 userIdentity:(id)arg5 ;
-(id)initWithPreviousParser:(id)arg1 additionalStoreItemMetadataResponse:(id)arg2 options:(SCD_Struct_MP75)arg3 sectionBuilder:(id)arg4 contentItemBuilder:(id)arg5 userIdentity:(id)arg6 ;
-(MPSectionedCollection *)additionalContentIdentifiers;
-(NSArray *)allAdditionalContentIdentifiersNeedingLookup;
-(void)_parseFeaturedContentStructureModelChildren:(id)arg1 ;
-(BOOL)_parseFeaturedContentChild:(id)arg1 isMemberOfChartSet:(BOOL)arg2 insertingResultsToSectionedCollection:(id)arg3 atSectionIndex:(long long)arg4 additionalContentIdentifiers:(id)arg5 allAdditionalContentIdentifiersNeedingLookup:(id)arg6 ;
-(void)_parseSingleContentListFromPageDataDictionary:(id)arg1 isMemberOfChartSet:(BOOL)arg2 ;
-(void)_parseUsingAdditionalContentIdentifiersFromPreviousParser;
-(void)_populateStorePlatformDataResultsFromRawResponseOutputDictionary:(id)arg1 ;
-(void)_populateUnavailableContentIdentifiersFromPageDataDictionary:(id)arg1 ;
-(id)_storeItemMetadataForContentIdentifier:(id)arg1 ;
-(BOOL)_storeItemMetadataIsAvailableForContentIdentifier:(id)arg1 ;
-(id)rawResponseOutput;
-(MPModelStoreBrowseResponseParser *)previousParser;
-(MPStoreItemMetadataResponse *)additionalStoreItemMetadataResponse;
-(MPModelStoreBrowseSectionBuilder *)sectionBuilder;
-(MPModelStoreBrowseContentItemBuilder *)contentItemBuilder;
@end

