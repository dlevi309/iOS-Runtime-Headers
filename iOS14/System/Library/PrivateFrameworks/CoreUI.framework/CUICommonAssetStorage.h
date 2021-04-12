/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void*)colordb;
-(unsigned)schemaVersion;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(const char*)versionString;
-(int)validateBitmapInfo;
-(void)_addBitmapIndexForNameIdentifier:(unsigned short)arg1 attribute:(int)arg2 withValue:(unsigned short)arg3 toDictionary:(id)arg4 ;
-(renditionkeytoken)_swapRenditionKeyToken:(renditionkeytoken)arg1 ;
-(id)deploymentPlatform;
-(void)enumerateBitmapIndexUsingBlock:(/*^block*/id)arg1 ;
-(void*)localizationdb;
-(int)validatekeyformat;
-(id)externalTags;
-(NSData *)globals;
-(id)uuid;
-(void)setHeader:(carheader*)arg1 ;
-(const FontValue*)_fontValueForFontType:(id)arg1 ;
-(id)renditionNameForKeyBaseList:(renditionkeytoken*)arg1 ;
-(void)setFacetKeysdb:(void*)arg1 ;
-(id)initWithPath:(id)arg1 forWriting:(BOOL)arg2 ;
-(id)nameForAppearanceIdentifier:(unsigned short)arg1 ;
-(unsigned)storageVersion;
-(void)setGlobals:(NSData *)arg1 ;
-(const char*)mainVersionString;
-(id)deploymentPlatformVersion;
-(id)initWithPath:(id)arg1 ;
-(id)authoringTool;
-(BOOL)getColor:(colordef*)arg1 forName:(const char*)arg2 ;
-(void)_buildBitmapInfoIntoDictionary:(id)arg1 ;
-(carheader*)header;
-(void*)bitmapKeydb;
-(unsigned)coreuiVersion;
-(long long)maximumRenditionKeyTokenCount;
-(id)path;
-(os_unfair_lock_s*)lock;
-(void)_swapKeyFormat;
-(unsigned)colorSpaceID;
-(void*)fontdb;
-(long long)storageTimestamp;
-(id)nameForLocalizationIdentifier:(unsigned short)arg1 ;
-(int)validateFile;
-(id)allAssetKeys;
-(unsigned)associatedChecksum;
-(void*)appearancedb;
-(id)allRenditionNames;
-(void)_loadExtendedMetadata;
-(id)description;
-(BOOL)assetExistsForKey:(id)arg1 ;
-(void)setBitmapKeydb:(void*)arg1 ;
-(id)renditionNameForKeyList:(renditionkeytoken*)arg1 ;
-(void*)imagedb;
-(unsigned)renditionCount;
-(float)fontSizeForFontSizeType:(id)arg1 ;
-(id)localizations;
-(os_unfair_lock_s*)renditionInfoCacheLock;
-(void)_swapRenditionKeyArray:(unsigned short*)arg1 ;
-(BOOL)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3 ;
-(id)keyFormatData;
-(void)setKeyfmt:(renditionkeyfmt*)arg1 ;
-(void)_bringHeaderInfoUpToDate;
-(void)setFontsizedb:(void*)arg1 ;
-(BOOL)assetExistsForKeyData:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)setLocalizationdb:(void*)arg1 ;
-(void)setExternalTags:(id)arg1 ;
-(void*)fontsizedb;
-(id)_readAppearances;
-(BOOL)_commonInitWithStorage:(BOMStorageRef)arg1 forWritting:(BOOL)arg2 ;
-(void*)facetKeysdb;
-(void)setExtendedMetadata:(carextendedMetadata*)arg1 ;
-(long long)_storagefileTimestamp;
-(void)setColordb:(void*)arg1 ;
-(void)enumerateKeysAndObjectsWithoutIgnoringUsingBlock:(/*^block*/id)arg1 ;
-(const renditionkeytoken*)renditionKeyForName:(const char*)arg1 hotSpot:(CGPoint*)arg2 ;
-(id)thinningArguments;
-(unsigned short)appearanceIdentifierForName:(id)arg1 ;
-(BOOL)getBaselineOffset:(float*)arg1 forFontType:(id)arg2 ;
-(void)setFontdb:(void*)arg1 ;
-(unsigned short)localizationIdentifierForName:(id)arg1 ;
-(const renditionkeyattributeindex*)keyAttributeIndex;
-(id)assetKeysMatchingBlock:(/*^block*/id)arg1 ;
-(BOOL)usesCUISystemThemeRenditionKey;
-(int)keySemantics;
-(carextendedMetadata*)extendedMetadata;
-(void)setAppearancedb:(void*)arg1 ;
-(id)renditionInfoForIdentifier:(unsigned short)arg1 ;
-(id)catalogGlobalData;
-(BOOL)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(NSDictionary *)appearances;
-(id)assetForKey:(id)arg1 ;
-(BOOL)hasColorForName:(const char*)arg1 ;
-(id)renditionNamesWithKeys;
-(renditionkeyfmt*)keyfmt;
-(const renditionkeyfmt*)keyFormat;
-(BOMStorageRef)_bomStorage;
-(void)enumerateRenditionInfosUsingBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(BOOL)swapped;
-(void)_initDefaultHeaderVersion:(double)arg1 versionString:(const char*)arg2 ;
-(void)setImagedb:(void*)arg1 ;
-(void)_swapHeader;
@end

