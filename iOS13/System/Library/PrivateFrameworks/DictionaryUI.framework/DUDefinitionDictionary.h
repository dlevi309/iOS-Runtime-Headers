/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DictionaryUI.framework/DictionaryUI
*/


#import <DictionaryUI/DictionaryUI-Structs.h>
@class MAAsset, NSString;

@interface DUDefinitionDictionary : NSObject {

	DCSDictionaryRef _dictionary;
	MAAsset* _assetToUpgrade;
	BOOL _activated;
	BOOL _isAppleDictionary;
	BOOL _isTTYDictionary;
	float _progress;
	MAAsset* _rawAsset;
	NSString* _definitionLanguage;

}

@property (assign) BOOL isAppleDictionary;                            //@synthesize isAppleDictionary=_isAppleDictionary - In the implementation block
@property (assign) BOOL isTTYDictionary;                              //@synthesize isTTYDictionary=_isTTYDictionary - In the implementation block
@property (readonly) DCSDictionaryRef dictionaryRef; 
@property (readonly) MAAsset * rawAsset;                              //@synthesize rawAsset=_rawAsset - In the implementation block
@property (readonly) NSString * localizedLanguageName; 
@property (readonly) NSString * localizedSortName; 
@property (readonly) NSString * localizedDictionaryName; 
@property (readonly) NSString * definitionLanguage;                   //@synthesize definitionLanguage=_definitionLanguage - In the implementation block
@property (assign,nonatomic) BOOL activated;                          //@synthesize activated=_activated - In the implementation block
@property (assign) float progress;                                    //@synthesize progress=_progress - In the implementation block
@property (readonly) BOOL needsDownloadNewerVersion; 
+(id)displayNameForLanguageIdentifier:(id)arg1 forSorting:(BOOL)arg2 ;
-(void)dealloc;
-(id)description;
-(float)progress;
-(BOOL)activated;
-(void)setProgress:(float)arg1 ;
-(MAAsset *)rawAsset;
-(void)setActivated:(BOOL)arg1 ;
-(NSString *)localizedLanguageName;
-(NSString *)localizedDictionaryName;
-(BOOL)assetIsLocal;
-(BOOL)assetIsDeletable;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(id)_definitionValueForTerm:(id)arg1 ;
-(NSString *)definitionLanguage;
-(void)setAssetToUpgrade:(id)arg1 ;
-(DCSDictionaryRef)dictionaryRef;
-(void)setIsAppleDictionary:(BOOL)arg1 ;
-(void)setIsTTYDictionary:(BOOL)arg1 ;
-(id)localizedLanguageName:(BOOL)arg1 ;
-(BOOL)isAppleDictionary;
-(BOOL)isTTYDictionary;
-(NSString *)localizedSortName;
-(BOOL)needsDownloadNewerVersion;
@end

