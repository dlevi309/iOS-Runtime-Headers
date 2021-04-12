/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray;

@interface _UIDictionaryManager : NSObject {

	NSArray* _availableDefinitionDictionaries;

}

@property (readonly) NSArray * availableDefinitionDictionaries;              //@synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries - In the implementation block
+(id)assetManager;
-(id)init;
-(NSArray *)availableDefinitionDictionaries;
-(id)_allAvailableDefinitionDictionaries;
-(void)_downloadDictionaryAssetCatalog:(/*^block*/id)arg1 ;
-(id)_definitionValuesForTerm:(id)arg1 ;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(id)_dictionaryAssetType;
-(id)_availableDictionaryAssets;
-(BOOL)_isTTYEnabled;
@end

