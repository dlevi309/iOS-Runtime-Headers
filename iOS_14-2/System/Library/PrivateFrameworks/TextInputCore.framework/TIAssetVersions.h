/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TIAsset *)currentAsset;
-(NSMutableSet *)assets;
-(id)recursiveDescription;
-(void)setCurrentAsset:(TIAsset *)arg1 ;
-(unsigned long long)count;
-(id)initWithAttributes:(id)arg1 ;
-(BOOL)purgeAsset:(id)arg1 ;
-(TIAssetAttributes *)attributes;
-(void)addAsset:(id)arg1 ;
-(BOOL)isEmpty;
-(id)purgeableAssets;
-(id)assetContentItemsMatching:(id)arg1 ;
@end

