/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class TSSTheme, TSUCustomCallBackDictionary;

@interface TSSThemeAssetMapper : NSObject {

	TSSTheme* mFromTheme;
	TSSTheme* mToTheme;
	TSUCustomCallBackDictionary* mAssetMap;

}

@property (nonatomic,readonly) TSSTheme * fromTheme; 
@property (nonatomic,readonly) TSSTheme * toTheme; 
-(id)init;
-(void)dealloc;
-(id)mapStyle:(id)arg1 ;
-(BOOL)p_hasCachedMappingsForPresetsOfKind:(id)arg1 ;
-(id)mapPresetsWithKindFromPreset:(id)arg1 ;
-(void)cacheAssetMappings:(id)arg1 ;
-(void)cacheMappingFromAsset:(id)arg1 toAsset:(id)arg2 ;
-(TSSTheme *)fromTheme;
-(TSSTheme *)toTheme;
-(id)initWithFromTheme:(id)arg1 toTheme:(id)arg2 ;
-(id)mappedAssetForAsset:(id)arg1 ;
-(void)clearMappingCache;
@end

