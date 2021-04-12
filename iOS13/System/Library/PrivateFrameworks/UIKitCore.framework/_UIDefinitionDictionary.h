/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class MAAsset, NSString;

@interface _UIDefinitionDictionary : NSObject {

	DCSDictionaryRef _dictionary;
	BOOL _activated;
	MAAsset* _rawAsset;
	NSString* _definitionLanguage;
	MAAsset* _assetToUpgrade;

}

@property (readonly) MAAsset * rawAsset;                              //@synthesize rawAsset=_rawAsset - In the implementation block
@property (readonly) NSString * localizedLanguageName; 
@property (readonly) NSString * localizedDictionaryName; 
@property (readonly) NSString * definitionLanguage;                   //@synthesize definitionLanguage=_definitionLanguage - In the implementation block
@property (assign) BOOL activated;                                    //@synthesize activated=_activated - In the implementation block
@property (retain) MAAsset * assetToUpgrade;                          //@synthesize assetToUpgrade=_assetToUpgrade - In the implementation block
+(id)_normalizedLanguageStringForLanguageCode:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)activated;
-(MAAsset *)rawAsset;
-(void)updateAsset;
-(void)setActivated:(BOOL)arg1 ;
-(NSString *)localizedLanguageName;
-(NSString *)localizedDictionaryName;
-(BOOL)assetIsLocal;
-(MAAsset *)assetToUpgrade;
-(BOOL)assetIsDeletable;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(BOOL)_isTTYDictionary;
-(id)_HTMLDefinitionForTerm:(id)arg1 type:(long long)arg2 ;
-(id)_shortHTMLDefinitionForTerm:(id)arg1 ;
-(id)_attributedDefinitionForTerm:(id)arg1 ;
-(id)_fullHTMLDefinitionForTerm:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(id)_definitionValueForTerm:(id)arg1 ;
-(NSString *)definitionLanguage;
-(void)setAssetToUpgrade:(MAAsset *)arg1 ;
@end

