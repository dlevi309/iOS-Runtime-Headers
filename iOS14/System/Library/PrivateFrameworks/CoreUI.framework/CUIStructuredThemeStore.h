/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/CUIStructuredThemeStorage.h>
#import <libobjc.A.dylib/CUIStructuredThemeStorage2.h>

@class NSMutableDictionary, CUICommonAssetStorage, NSString, NSCache, NSDictionary, NSSet;

@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2> {

	NSMutableDictionary* _cache;
	CUICommonAssetStorage* _store;
	os_unfair_lock_s _cacheLock;
	os_unfair_lock_s _storeLock;
	unsigned long long _themeIndex;
	NSString* _bundleID;
	NSCache* _namedRenditionKeyCache;
	/*function pointer*/void* _attributePresent;
	unsigned _mainBundle : 1;
	NSDictionary* _aliasDictionary;
	NSSet* _legacyFlippableSet;

}

@property (assign) BOOL mainBundle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)imageNamedShouldFlip:(id)arg1 ;
-(unsigned)distilledInCoreUIVersion;
-(void)clearRenditionCache;
-(id)initWithURL:(id)arg1 ;
-(void)setBundleID:(id)arg1 ;
-(id)store;
-(id)nameForAppearanceIdentifier:(unsigned short)arg1 ;
-(id)themeStore;
-(id)initWithPath:(id)arg1 ;
-(id)copyKeySignatureForKey:(const renditionkeytoken*)arg1 withBytesNoCopy:(char*)arg2 length:(unsigned long long)arg3 ;
-(void)_updateKeyWithCompatibilityMapping:(renditionkeytoken*)arg1 ;
-(unsigned long long)themeIndex;
-(id)aliasForName:(id)arg1 ;
-(NSString *)debugDescription;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 cursorHotSpot:(CGPoint*)arg2 ;
-(long long)maximumRenditionKeyTokenCount;
-(unsigned long long)colorSpaceID;
-(void)setMainBundle:(BOOL)arg1 ;
-(BOOL)hasPhysicalColorWithName:(id)arg1 ;
-(BOOL)caAllowSubimageOfImage:(CGImageRef)arg1 ;
-(id)baseGradationKeySignatureForKey:(const renditionkeytoken*)arg1 ;
-(BOOL)assetExistsForKey:(const renditionkeytoken*)arg1 ;
-(id)renditionNameForKeyList:(renditionkeytoken*)arg1 ;
-(double)fontSizeForFontSizeType:(id)arg1 ;
-(id)mappedAliases;
-(id)localizations;
-(BOOL)getPhysicalColor:(colordef*)arg1 withName:(id)arg2 ;
-(id)allImageNames;
-(BOOL)getFontName:(id*)arg1 baselineOffset:(double*)arg2 forFontType:(id)arg3 ;
-(unsigned)authoredWithSchemaVersion;
-(id)bundleID;
-(id)debugDescriptionForKeyList:(const renditionkeytoken*)arg1 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 ;
-(id)defaultAppearanceName;
-(id)lookupAssetForKey:(const renditionkeytoken*)arg1 ;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1 ;
-(void)setThemeIndex:(unsigned long long)arg1 ;
-(void)_commonInit;
-(id)convertRenditionKeyToKeyData:(const renditionkeytoken*)arg1 ;
-(unsigned short)appearanceIdentifierForName:(id)arg1 ;
-(id)_newRenditionKeyDataFromKey:(const renditionkeytoken*)arg1 ;
-(unsigned short)localizationIdentifierForName:(id)arg1 ;
-(BOOL)_formatStorageKeyArrayBytes:(void*)arg1 length:(unsigned long long)arg2 fromKey:(const renditionkeytoken*)arg3 ;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 usingKeySignature:(id)arg2 ;
-(id)keySignatureForKey:(const renditionkeytoken*)arg1 ;
-(const renditionkeyattributeindex*)keyAttributeIndex;
-(BOOL)usesCUISystemThemeRenditionKey;
-(id)catalogGlobals;
-(id)renditionInfoForIdentifier:(unsigned short)arg1 ;
-(id)copyLookupKeySignatureForKey:(const renditionkeytoken*)arg1 ;
-(id)appearances;
-(id)imagesWithName:(id)arg1 ;
-(BOOL)containsLookupForName:(id)arg1 ;
-(BOOL)mainBundle;
-(const renditionkeyfmt*)keyFormat;
-(void)dealloc;
-(unsigned)documentFormatVersion;
-(const renditionkeyfmt*)renditionKeyFormat;
@end

