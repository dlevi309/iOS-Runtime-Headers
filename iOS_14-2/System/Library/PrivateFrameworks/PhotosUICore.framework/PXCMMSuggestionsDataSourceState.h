/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHFetchResult, NSDictionary, PXCMMSuggestionsDataSourceContext, PHAssetCollection;

@interface PXCMMSuggestionsDataSourceState : NSObject <NSCopying> {

	PHFetchResult* _assetCollections;
	NSDictionary* _suggestionsByAssetCollectionObjectID;
	PXCMMSuggestionsDataSourceContext* _context;
	PHAssetCollection* _confidentMatch;

}

@property (nonatomic,readonly) PHFetchResult * assetCollections;                                 //@synthesize assetCollections=_assetCollections - In the implementation block
@property (nonatomic,readonly) NSDictionary * suggestionsByAssetCollectionObjectID;              //@synthesize suggestionsByAssetCollectionObjectID=_suggestionsByAssetCollectionObjectID - In the implementation block
@property (nonatomic,readonly) PXCMMSuggestionsDataSourceContext * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * confidentMatch;                               //@synthesize confidentMatch=_confidentMatch - In the implementation block
-(PXCMMSuggestionsDataSourceContext *)context;
-(PHFetchResult *)assetCollections;
-(id)initWithAssetCollections:(id)arg1 suggestionsByAssetCollectionObjectID:(id)arg2 context:(id)arg3 ;
-(id)_confidentMatch;
-(void)_compareSuggestionsUsingContext;
-(id)_confidentMatchUsingStrategy:(unsigned long long)arg1 ;
-(NSDictionary *)suggestionsByAssetCollectionObjectID;
-(PHAssetCollection *)confidentMatch;
-(id)stateUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

