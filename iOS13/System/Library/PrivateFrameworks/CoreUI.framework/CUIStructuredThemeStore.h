/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/CUIStructuredThemeStorage.h>
#import <libobjc.A.dylib/CUIStructuredThemeStorage2.h>

@class NSMutableDictionary, CUICommonAssetStorage, NSString, NSCache;

@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2> {

	NSMutableDictionary* _cache;
	CUICommonAssetStorage* _store;
	os_unfair_lock_s _cacheLock;
	os_unfair_lock_s _storeLock;
	unsigned long long _themeIndex;
	NSString* _bundleID;
	NSCache* _namedRenditionKeyCache;
	/*function pointer*/void* _attributePresent;

}

@property (assign,nonatomic) unsigned long long themeIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(id)initWithURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)localizations;
-(id)bundleID;
-(id)store;
-(void)_commonInit;
-(id)imagesWithName:(id)arg1 ;
-(id)allImageNames;
-(BOOL)assetExistsForKey:(renditionkeytoken*)arg1 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 ;
-(const renditionkeyfmt*)keyFormat;
-(id)renditionNameForKeyList:(renditionkeytoken*)arg1 ;
-(unsigned long long)colorSpaceID;
-(unsigned)distilledInCoreUIVersion;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 ;
-(unsigned long long)themeIndex;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1 ;
-(id)copyKeySignatureForKey:(const renditionkeytoken*)arg1 withBytesNoCopy:(char*)arg2 length:(unsigned long long)arg3 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 usingKeySignature:(id)arg2 ;
-(id)defaultAppearanceName;
-(void)clearRenditionCache;
-(long long)maximumRenditionKeyTokenCount;
-(BOOL)usesCUISystemThemeRenditionKey;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 cursorHotSpot:(CGPoint*)arg2 ;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1 isFPO:(BOOL*)arg2 ;
-(id)renditionInfoForIdentifier:(unsigned short)arg1 ;
-(unsigned short)appearanceIdentifierForName:(id)arg1 ;
-(id)nameForAppearanceIdentifier:(unsigned short)arg1 ;
-(id)appearances;
-(id)debugDescriptionForKeyList:(const renditionkeytoken*)arg1 ;
-(const renditionkeyattributeindex*)keyAttributeIndex;
-(BOOL)getFontName:(id*)arg1 baselineOffset:(double*)arg2 forFontType:(id)arg3 ;
-(double)fontSizeForFontSizeType:(id)arg1 ;
-(unsigned short)localizationIdentifierForName:(id)arg1 ;
-(id)copyLookupKeySignatureForKey:(const renditionkeytoken*)arg1 ;
-(BOOL)_formatStorageKeyArrayBytes:(void*)arg1 length:(unsigned long long)arg2 fromKey:(renditionkeytoken*)arg3 ;
-(void)_updateKeyWithCompatibilityMapping:(renditionkeytoken*)arg1 ;
-(id)_newRenditionKeyDataFromKey:(renditionkeytoken*)arg1 ;
-(const renditionkeyfmt*)renditionKeyFormat;
-(id)lookupAssetForKey:(renditionkeytoken*)arg1 ;
-(void)_getKeyForAssetClosestToKey:(renditionkeytoken*)arg1 foundAsset:(BOOL*)arg2 ;
-(BOOL)_canGetRenditionWithKey:(const renditionkeytoken*)arg1 isFPO:(BOOL*)arg2 lookForSubstitutions:(BOOL)arg3 ;
-(id)themeStore;
-(BOOL)getPhysicalColor:(colordef*)arg1 withName:(id)arg2 ;
-(BOOL)hasPhysicalColorWithName:(id)arg1 ;
-(unsigned)documentFormatVersion;
-(unsigned)authoredWithSchemaVersion;
-(id)catalogGlobals;
-(id)baseGradationKeySignatureForKey:(const renditionkeytoken*)arg1 ;
-(id)keySignatureForKey:(const renditionkeytoken*)arg1 ;
-(id)convertRenditionKeyToKeyData:(renditionkeytoken*)arg1 ;
-(void)setThemeIndex:(unsigned long long)arg1 ;
@end

