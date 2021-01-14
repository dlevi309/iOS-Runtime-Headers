/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUICommonAssetStorage.h>

@class NSMutableDictionary;

@interface CUIMutableCommonAssetStorage : CUICommonAssetStorage {

	NSMutableDictionary* _bitmapInfo;
	unsigned _useBitmapIndex : 1;
	unsigned _enableLargeCarKeyWorkaround : 1;

}

@property (assign,nonatomic) BOOL useBitmapIndex; 
-(BOOL)writeToDisk;
-(void)setRenditionCount:(unsigned)arg1 ;
-(void)setKeyFormatData:(id)arg1 ;
-(void)setColorSpaceID:(unsigned)arg1 ;
-(void)updateBitmapInfo;
-(void)setAppearanceIdentifier:(unsigned short)arg1 forName:(id)arg2 ;
-(BOOL)setAsset:(id)arg1 forKey:(id)arg2 ;
-(void)removeAssetForKey:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)setEnableLargeCarKeyWorkaround:(BOOL)arg1 ;
-(void)removeAssetForKey:(const void*)arg1 withLength:(unsigned long long)arg2 ;
-(void)setCatalogGlobalData:(id)arg1 ;
-(void)setDeploymentPlatformVersion:(id)arg1 ;
-(void)setColor:(rgbquad)arg1 forName:(const char*)arg2 excludeFromFilter:(BOOL)arg3 ;
-(BOOL)_saveBitmapInfo;
-(BOOL)writeToDiskAndCompact:(BOOL)arg1 ;
-(BOOL)setAsset:(id)arg1 forKey:(const void*)arg2 withLength:(unsigned long long)arg3 ;
-(void)setFontSize:(float)arg1 forFontSizeSelector:(id)arg2 ;
-(BOOL)removeAssetName:(id)arg1 ;
-(void)setSchemaVersion:(unsigned)arg1 ;
-(void)setUseBitmapIndex:(BOOL)arg1 ;
-(BOOL)useBitmapIndex;
-(void)setAuthoringTool:(id)arg1 ;
-(void)setKeySemantics:(int)arg1 ;
-(BOOL)removeAssetNameKey:(const void*)arg1 withLength:(unsigned long long)arg2 ;
-(void)_allocateExtendedMetadata;
-(BOOL)_writeOutKeyFormatWithWorkaround;
-(void)setExternalTags:(id)arg1 ;
-(void)setLocalizationIdentifier:(unsigned short)arg1 forName:(id)arg2 ;
-(void)setDeploymentPlatform:(id)arg1 ;
-(void)setStorageVersion:(unsigned)arg1 ;
-(void)setAssociatedChecksum:(unsigned)arg1 ;
-(void)setUuid:(id)arg1 ;
-(void)setRenditionKey:(const renditionkeytoken*)arg1 hotSpot:(CGPoint)arg2 forName:(const char*)arg3 ;
-(void)setFontName:(id)arg1 baselineOffset:(float)arg2 forFontSelector:(id)arg3 ;
-(void)dealloc;
-(void)setVersionString:(const char*)arg1 ;
-(void)setThinningArguments:(id)arg1 ;
@end

