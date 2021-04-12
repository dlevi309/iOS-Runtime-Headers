/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData, NSSet, NSDictionary;

@interface CUICommonAssetStorage : NSObject {

	carheader* _header;
	carextendedMetadata* _extendedMetadata;
	renditionkeyfmt* _keyfmt;
	void* _imagedb;
	void* _colordb;
	void* _fontdb;
	void* _fontsizedb;
	void* _facetKeysdb;
	void* _bitmapKeydb;
	void* _appearancedb;
	void* _localizationdb;
	NSData* _globals;
	unsigned _swap : 1;
	unsigned _isMemoryMapped : 1;
	unsigned _hasAppearanceKey : 1;
	unsigned _hasLocalizationKey : 1;
	unsigned _reserved : 28;
	NSSet* _externalTags;
	unsigned short _renditionInfoCacheLookup[20];
	id _renditionInfoCache[20];
	os_unfair_lock_s _lock;
	os_unfair_lock_s _renditionInfoCacheLock;
	renditionkeyattributeindex _keyfmtindex;
	NSDictionary* _appearances;

}

@property (assign,nonatomic) carheader* header;                                  //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) carextendedMetadata* extendedMetadata;              //@synthesize extendedMetadata=_extendedMetadata - In the implementation block
@property (assign,nonatomic) renditionkeyfmt* keyfmt;                            //@synthesize keyfmt=_keyfmt - In the implementation block
@property (assign,nonatomic) void* imagedb;                                      //@synthesize imagedb=_imagedb - In the implementation block
@property (assign,nonatomic) void* colordb;                                      //@synthesize colordb=_colordb - In the implementation block
@property (assign,nonatomic) void* fontdb;                                       //@synthesize fontdb=_fontdb - In the implementation block
@property (assign,nonatomic) void* fontsizedb;                                   //@synthesize fontsizedb=_fontsizedb - In the implementation block
@property (assign,nonatomic) void* facetKeysdb;                                  //@synthesize facetKeysdb=_facetKeysdb - In the implementation block
@property (assign,nonatomic) void* bitmapKeydb;                                  //@synthesize bitmapKeydb=_bitmapKeydb - In the implementation block
@property (assign,nonatomic) void* appearancedb;                                 //@synthesize appearancedb=_appearancedb - In the implementation block
@property (assign,nonatomic) void* localizationdb;                               //@synthesize localizationdb=_localizationdb - In the implementation block
@property (nonatomic,retain) NSData * globals;                                   //@synthesize globals=_globals - In the implementation block
@property (nonatomic,readonly) NSDictionary * appearances;                       //@synthesize appearances=_appearances - In the implementation block
+(BOOL)isValidAssetStorageWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(BOOL)isValidAssetStorageWithURL:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)description;
-(os_unfair_lock_s*)lock;
-(BOOL)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(id)localizations;
-(id)uuid;
-(unsigned)schemaVersion;
-(const char*)versionString;
-(NSData *)globals;
-(carheader*)header;
-(void)setHeader:(carheader*)arg1 ;
-(BOOL)assetExistsForKey:(id)arg1 ;
-(const renditionkeyfmt*)keyFormat;
-(id)renditionNameForKeyList:(renditionkeytoken*)arg1 ;
-(unsigned)colorSpaceID;
-(long long)maximumRenditionKeyTokenCount;
-(BOOL)usesCUISystemThemeRenditionKey;
-(id)renditionInfoForIdentifier:(unsigned short)arg1 ;
-(unsigned short)appearanceIdentifierForName:(id)arg1 ;
-(id)nameForAppearanceIdentifier:(unsigned short)arg1 ;
-(NSDictionary *)appearances;
-(id)externalTags;
-(id)initWithPath:(id)arg1 forWriting:(BOOL)arg2 ;
-(BOOL)_commonInitWithStorage:(BOMStorageRef)arg1 forWritting:(BOOL)arg2 ;
-(void)_initDefaultHeaderVersion:(double)arg1 versionString:(const char*)arg2 ;
-(void)_swapHeader;
-(void)_bringHeaderInfoUpToDate;
-(void)_swapKeyFormat;
-(id)_readAppearances;
-(long long)_storagefileTimestamp;
-(void*)imagedb;
-(void)_loadExtendedMetadata;
-(BOOL)assetExistsForKeyData:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)assetKeysMatchingBlock:(/*^block*/id)arg1 ;
-(BOOL)swapped;
-(void)_swapRenditionKeyArray:(unsigned short*)arg1 ;
-(os_unfair_lock_s*)renditionInfoCacheLock;
-(renditionkeytoken)_swapRenditionKeyToken:(renditionkeytoken)arg1 ;
-(const FontValue*)_fontValueForFontType:(id)arg1 ;
-(void)_addBitmapIndexForNameIdentifier:(unsigned short)arg1 attribute:(int)arg2 withValue:(unsigned short)arg3 toDictionary:(id)arg4 ;
-(void)_buildBitmapInfoIntoDictionary:(id)arg1 ;
-(BOMStorageRef)_bomStorage;
-(id)deploymentPlatform;
-(id)deploymentPlatformVersion;
-(void*)localizationdb;
-(void)setExternalTags:(id)arg1 ;
-(unsigned)storageVersion;
-(unsigned)coreuiVersion;
-(long long)storageTimestamp;
-(int)keySemantics;
-(id)keyFormatData;
-(const renditionkeyattributeindex*)keyAttributeIndex;
-(id)catalogGlobalData;
-(const char*)mainVersionString;
-(unsigned)renditionCount;
-(unsigned)associatedChecksum;
-(id)thinningArguments;
-(id)authoringTool;
-(id)assetForKey:(id)arg1 ;
-(id)allAssetKeys;
-(void)enumerateKeysAndObjectsWithoutIgnoringUsingBlock:(/*^block*/id)arg1 ;
-(const renditionkeytoken*)renditionKeyForName:(const char*)arg1 hotSpot:(CGPoint*)arg2 ;
-(id)allRenditionNames;
-(id)renditionNamesWithKeys;
-(id)renditionNameForKeyBaseList:(renditionkeytoken*)arg1 ;
-(BOOL)getColor:(colordef*)arg1 forName:(const char*)arg2 ;
-(BOOL)hasColorForName:(const char*)arg1 ;
-(BOOL)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3 ;
-(BOOL)getBaselineOffset:(float*)arg1 forFontType:(id)arg2 ;
-(float)fontSizeForFontSizeType:(id)arg1 ;
-(void)enumerateBitmapIndexUsingBlock:(/*^block*/id)arg1 ;
-(int)validateBitmapInfo;
-(int)validatekeyformat;
-(int)validateFile;
-(unsigned short)localizationIdentifierForName:(id)arg1 ;
-(id)nameForLocalizationIdentifier:(unsigned short)arg1 ;
-(carextendedMetadata*)extendedMetadata;
-(void)setExtendedMetadata:(carextendedMetadata*)arg1 ;
-(renditionkeyfmt*)keyfmt;
-(void)setKeyfmt:(renditionkeyfmt*)arg1 ;
-(void)setImagedb:(void*)arg1 ;
-(void*)colordb;
-(void)setColordb:(void*)arg1 ;
-(void*)fontdb;
-(void)setFontdb:(void*)arg1 ;
-(void*)fontsizedb;
-(void)setFontsizedb:(void*)arg1 ;
-(void*)facetKeysdb;
-(void)setFacetKeysdb:(void*)arg1 ;
-(void*)bitmapKeydb;
-(void)setBitmapKeydb:(void*)arg1 ;
-(void*)appearancedb;
-(void)setAppearancedb:(void*)arg1 ;
-(void)setLocalizationdb:(void*)arg1 ;
-(void)setGlobals:(NSData *)arg1 ;
@end

