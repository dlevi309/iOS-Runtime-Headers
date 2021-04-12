/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray;

@interface _UIDictionaryManager : NSObject {

	NSArray* _availableDefinitionDictionaries;

}

@property (readonly) NSArray * availableDefinitionDictionaries;              //@synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries - In the implementation block
+(id)assetManager;
-(id)init;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(NSArray *)availableDefinitionDictionaries;
-(id)_allAvailableDefinitionDictionaries;
-(void)_downloadDictionaryAssetCatalog:(/*^block*/id)arg1 ;
-(id)_definitionValuesForTerm:(id)arg1 ;
-(id)_dictionaryAssetType;
-(id)_availableDictionaryAssets;
-(BOOL)_isTTYEnabled;
@end

