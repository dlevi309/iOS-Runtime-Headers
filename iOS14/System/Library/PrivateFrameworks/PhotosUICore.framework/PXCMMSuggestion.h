/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString, PXAssetCollectionActionManager;


@protocol PXCMMSuggestion <NSObject,PXMediaTypeAggregating>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) id<PXDisplayAsset> posterAsset; 
@property (nonatomic,readonly) id<PXUIImageProvider> posterMediaProvider; 
@property (nonatomic,readonly) id<PXPeopleFetchResult> peopleFetchResult; 
@property (nonatomic,readonly) PXAssetCollectionActionManager * assetCollectionActionManager; 
@property (nonatomic,readonly) BOOL containsUnverifiedPersons; 
@required
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(id)contextForActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
-(void)markAsActiveIfNeeded;
-(id)diagnosticsItem;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(NSString *)subtitle;
-(void)decline;
-(long long)count;
-(BOOL)containsUnverifiedPersons;
-(NSString *)identifier;
-(id<PXPeopleFetchResult>)peopleFetchResult;
-(NSString *)title;

@end

