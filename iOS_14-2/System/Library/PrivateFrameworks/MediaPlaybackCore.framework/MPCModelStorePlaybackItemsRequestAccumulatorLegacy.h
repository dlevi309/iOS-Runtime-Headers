/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSMutableDictionary, NSArray, NSMutableArray, MPMutableSectionedCollection, MPStoreModelGenericObjectBuilder, ICUserIdentity, MPCModelStorePlaybackItemsRequest, NSDictionary, MPSectionedCollection;

@interface MPCModelStorePlaybackItemsRequestAccumulatorLegacy : NSObject {

	long long _currentBatchCount;
	long long _defaultLibraryPersonalizationStyle;
	NSMutableDictionary* _equivalencyMapping;
	BOOL _lastStoreIDBasedSectionWasPlaylist;
	NSArray* _orderedStoreIDs;
	NSMutableArray* _pendingOrderedStoreIDs;
	NSMutableArray* _pendingPrioritizedStoreIDs;
	NSMutableArray* _unprocessedItemIdentifiers;
	MPMutableSectionedCollection* _progressiveContentDescriptors;
	NSMutableDictionary* _receivedStoreIDs;
	MPStoreModelGenericObjectBuilder* _resultsGenericObjectBuilder;
	NSMutableDictionary* _sectionIndexToDeletedIndexSet;
	NSMutableDictionary* _storeIDToIndexPathReference;
	long long _unknownEndpointLibraryPersonalizationStyle;
	ICUserIdentity* _userIdentity;
	BOOL _allowsExplicitContent;
	MPCModelStorePlaybackItemsRequest* _request;
	BOOL _shouldLibraryPersonalize;
	long long _storePersonalizationStyle;

}

@property (nonatomic,copy,readonly) NSDictionary * equivalencyMapping; 
@property (nonatomic,readonly) MPSectionedCollection * unpersonalizedContentDescriptors; 
-(MPCModelStorePlaybackItemsRequestAccumulatorResult)handleResponse:(id)arg1 ;
-(MPSectionedCollection *)unpersonalizedContentDescriptors;
-(MPCModelStorePlaybackItemEligibility)_eligibilityForItem:(id)arg1 ;
-(id)_userIdentityWithRequest:(id)arg1 ;
-(void)_addEquivalencyForMetadata:(id)arg1 requestStoreIdentifier:(id)arg2 ;
-(id)newStoreItemMetadataRequest;
-(NSDictionary *)equivalencyMapping;
-(id)initWithRequest:(id)arg1 shouldLibraryPersonalize:(BOOL)arg2 ;
-(void)_prepareRequestInformation;
-(id)_originalIndexPathsForStoreID:(id)arg1 ;
-(BOOL)_shouldUsePlaylistEntriesForSectionAtIndex:(long long)arg1 ;
-(id)_modelObjectWithStoreItemMetadata:(id)arg1 requestModelObject:(id)arg2 shouldUsePlaylistEntries:(BOOL)arg3 ;
-(id)_indexPathAccountingForRemovalsWithOriginalIndexPath:(id)arg1 ;
-(void)_removeItemAtOriginalIndexPath:(id)arg1 ;
-(long long)_appendProgressiveContentDescriptorsWithStoreItemMetadata:(id)arg1 ;
-(void)_addOriginalIndexPath:(id)arg1 forStoreID:(id)arg2 ;
@end

