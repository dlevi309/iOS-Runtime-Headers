/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TIAssetManaging <NSObject>
@property (nonatomic,copy) id enabledInputModeIdentifiersProviderBlock; 
@required
-(id)enabledInputModes;
-(id)assetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2;
-(id)ddsAssetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 filteredWithRegion:(BOOL)arg3;
-(void)requestAssetDownloadForLanguage:(id)arg1 completion:(/*^block*/id)arg2;
-(id)topActiveRegions;
-(id)enabledInputModeIdentifiersProviderBlock;
-(void)setEnabledInputModeIdentifiersProviderBlock:(/*^block*/id)arg1;

@end

