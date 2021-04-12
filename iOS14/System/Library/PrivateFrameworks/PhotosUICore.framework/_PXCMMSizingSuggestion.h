/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXCMMSuggestion.h>

@protocol PXDisplayAsset, PXUIImageProvider, PXPeopleFetchResult;
@class NSString, PXAssetCollectionActionManager;

@interface _PXCMMSizingSuggestion : NSObject <PXCMMSuggestion> {

	NSString* _identifier;
	NSString* _title;
	NSString* _subtitle;
	long long _count;
	id<PXDisplayAsset> _posterAsset;
	id<PXUIImageProvider> _posterMediaProvider;
	id<PXPeopleFetchResult> _peopleFetchResult;
	PXAssetCollectionActionManager* _assetCollectionActionManager;

}

@property (nonatomic,readonly) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) long long count;                                                            //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> posterAsset;                                             //@synthesize posterAsset=_posterAsset - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> posterMediaProvider;                                  //@synthesize posterMediaProvider=_posterMediaProvider - In the implementation block
@property (nonatomic,readonly) id<PXPeopleFetchResult> peopleFetchResult;                                  //@synthesize peopleFetchResult=_peopleFetchResult - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionActionManager * assetCollectionActionManager;              //@synthesize assetCollectionActionManager=_assetCollectionActionManager - In the implementation block
@property (nonatomic,readonly) BOOL containsUnverifiedPersons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long aggregateMediaType; 
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(id)contextForActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 ;
-(void)markAsActiveIfNeeded;
-(id)diagnosticsItem;
-(void)registerMatchingType:(long long)arg1 ;
-(id)init;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(long long)aggregateMediaType;
-(NSString *)subtitle;
-(void)decline;
-(long long)count;
-(BOOL)containsUnverifiedPersons;
-(NSString *)identifier;
-(id<PXPeopleFetchResult>)peopleFetchResult;
-(double)scoreForSuggestionMatchingType:(long long)arg1 ;
-(NSString *)title;
@end

