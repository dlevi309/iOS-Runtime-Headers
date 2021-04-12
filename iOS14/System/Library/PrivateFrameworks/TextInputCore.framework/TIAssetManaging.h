/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TIAssetManaging <NSObject>
@property (nonatomic,copy) id enabledInputModeIdentifiersProviderBlock; 
@required
-(void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(/*^block*/id)arg5;
-(void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)requestAssetDownloadForLanguage:(id)arg1 completion:(/*^block*/id)arg2;
-(id)topActiveRegions;
-(void)ddsAssetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 filteredWithRegion:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(id)enabledInputModeIdentifiersProviderBlock;
-(id)enabledInputModes;
-(void)setEnabledInputModeIdentifiersProviderBlock:(/*^block*/id)arg1;
-(id)assetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2;
-(id)ddsAssetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 filteredWithRegion:(BOOL)arg3;

@end

