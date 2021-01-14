/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)activated;
-(MAAsset *)rawAsset;
-(void)setActivated:(BOOL)arg1 ;
-(id)description;
-(id)initWithAsset:(id)arg1 ;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(NSString *)localizedDictionaryName;
-(void)updateAsset;
-(MAAsset *)assetToUpgrade;
-(BOOL)assetIsLocal;
-(NSString *)localizedLanguageName;
-(BOOL)assetIsDeletable;
-(BOOL)_isTTYDictionary;
-(id)_HTMLDefinitionForTerm:(id)arg1 type:(long long)arg2 ;
-(void)setAssetToUpgrade:(MAAsset *)arg1 ;
-(id)_shortHTMLDefinitionForTerm:(id)arg1 ;
-(id)_attributedDefinitionForTerm:(id)arg1 ;
-(NSString *)definitionLanguage;
-(id)_fullHTMLDefinitionForTerm:(id)arg1 ;
-(id)_definitionValueForTerm:(id)arg1 ;
-(void)dealloc;
@end

