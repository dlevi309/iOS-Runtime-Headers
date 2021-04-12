/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class TIAssetAttributes, TIAsset, NSMutableSet;

@interface TIAssetVersions : NSObject {

	TIAssetAttributes* _attributes;
	TIAsset* _currentAsset;
	NSMutableSet* _assets;

}

@property (nonatomic,readonly) NSMutableSet * assets;                       //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic) TIAsset * currentAsset;                        //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,readonly) TIAssetAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(BOOL)isEmpty;
-(TIAssetAttributes *)attributes;
-(id)recursiveDescription;
-(id)initWithAttributes:(id)arg1 ;
-(NSMutableSet *)assets;
-(void)addAsset:(id)arg1 ;
-(void)setCurrentAsset:(TIAsset *)arg1 ;
-(TIAsset *)currentAsset;
-(BOOL)purgeAsset:(id)arg1 ;
-(id)assetContentItemsMatching:(id)arg1 ;
-(id)purgeableAssets;
@end

