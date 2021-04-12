/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	long long _preferredOrder;

}

@property (assign) BOOL isAppleDictionary;                            //@synthesize isAppleDictionary=_isAppleDictionary - In the implementation block
@property (assign) BOOL isTTYDictionary;                              //@synthesize isTTYDictionary=_isTTYDictionary - In the implementation block
@property (assign) long long preferredOrder;                          //@synthesize preferredOrder=_preferredOrder - In the implementation block
@property (readonly) DCSDictionaryRef dictionaryRef; 
@property (readonly) MAAsset * rawAsset;                              //@synthesize rawAsset=_rawAsset - In the implementation block
@property (readonly) NSString * localizedLanguageName; 
@property (readonly) NSString * localizedSortName; 
@property (readonly) NSString * localizedDictionaryName; 
@property (readonly) NSString * definitionLanguage;                   //@synthesize definitionLanguage=_definitionLanguage - In the implementation block
@property (assign,nonatomic) BOOL activated;                          //@synthesize activated=_activated - In the implementation block
@property (assign) float progress;                                    //@synthesize progress=_progress - In the implementation block
@property (readonly) BOOL needsDownloadNewerVersion; 
+(id)displayNameForLanguageIdentifier:(id)arg1 ;
-(BOOL)activated;
-(float)progress;
-(MAAsset *)rawAsset;
-(void)setActivated:(BOOL)arg1 ;
-(id)description;
-(id)initWithAsset:(id)arg1 ;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(NSString *)localizedDictionaryName;
-(void)setProgress:(float)arg1 ;
-(NSString *)localizedLanguageName;
-(void)setAssetToUpgrade:(id)arg1 ;
-(NSString *)definitionLanguage;
-(id)_definitionValueForTerm:(id)arg1 ;
-(void)dealloc;
-(DCSDictionaryRef)dictionaryRef;
-(void)setIsAppleDictionary:(BOOL)arg1 ;
-(void)setIsTTYDictionary:(BOOL)arg1 ;
-(BOOL)isAppleDictionary;
-(BOOL)isTTYDictionary;
-(NSString *)localizedSortName;
-(BOOL)needsDownloadNewerVersion;
-(long long)preferredOrder;
-(void)setPreferredOrder:(long long)arg1 ;
@end

