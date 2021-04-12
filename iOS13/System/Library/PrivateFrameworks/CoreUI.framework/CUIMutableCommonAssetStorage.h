/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)setUuid:(id)arg1 ;
-(void)setVersionString:(const char*)arg1 ;
-(void)setColorSpaceID:(unsigned)arg1 ;
-(void)setExternalTags:(id)arg1 ;
-(void)_allocateExtendedMetadata;
-(BOOL)setAsset:(id)arg1 forKey:(const void*)arg2 withLength:(unsigned long long)arg3 ;
-(void)removeAssetForKey:(const void*)arg1 withLength:(unsigned long long)arg2 ;
-(BOOL)removeAssetNameKey:(const void*)arg1 withLength:(unsigned long long)arg2 ;
-(BOOL)_writeOutKeyFormatWithWorkaround;
-(BOOL)_saveBitmapInfo;
-(BOOL)writeToDiskAndCompact:(BOOL)arg1 ;
-(void)setUseBitmapIndex:(BOOL)arg1 ;
-(BOOL)useBitmapIndex;
-(void)setKeyFormatData:(id)arg1 ;
-(void)setKeySemantics:(int)arg1 ;
-(void)setStorageVersion:(unsigned)arg1 ;
-(void)setSchemaVersion:(unsigned)arg1 ;
-(void)setRenditionCount:(unsigned)arg1 ;
-(void)setAssociatedChecksum:(unsigned)arg1 ;
-(void)setEnableLargeCarKeyWorkaround:(BOOL)arg1 ;
-(void)setThinningArguments:(id)arg1 ;
-(void)setDeploymentPlatform:(id)arg1 ;
-(void)setDeploymentPlatformVersion:(id)arg1 ;
-(void)setAuthoringTool:(id)arg1 ;
-(BOOL)setAsset:(id)arg1 forKey:(id)arg2 ;
-(void)setCatalogGlobalData:(id)arg1 ;
-(void)setAppearanceIdentifier:(unsigned short)arg1 forName:(id)arg2 ;
-(void)setLocalizationIdentifier:(unsigned short)arg1 forName:(id)arg2 ;
-(void)updateBitmapInfo;
-(void)setColor:(rgbquad)arg1 forName:(const char*)arg2 excludeFromFilter:(BOOL)arg3 ;
-(void)setFontName:(id)arg1 baselineOffset:(float)arg2 forFontSelector:(id)arg3 ;
-(void)setFontSize:(float)arg1 forFontSizeSelector:(id)arg2 ;
-(void)removeAssetForKey:(id)arg1 ;
-(BOOL)removeAssetName:(id)arg1 ;
-(void)setRenditionKey:(const renditionkeytoken*)arg1 hotSpot:(CGPoint)arg2 forName:(const char*)arg3 ;
-(BOOL)writeToDisk;
@end

