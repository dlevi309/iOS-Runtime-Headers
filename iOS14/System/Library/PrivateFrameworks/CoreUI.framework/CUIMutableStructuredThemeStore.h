/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIStructuredThemeStore.h>

@class NSString, NSMutableDictionary;

@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore {

	NSString* _identifier;
	NSMutableDictionary* _memoryStore;
	NSMutableDictionary* _nameIdentifierStore;
	int _maxNameIdentifier;
	NSMutableDictionary* _apperanceNameIdentifierStore;
	int _maxApperanceNameIdentifier;
	NSMutableDictionary* _renditionInfoStore;

}
-(void)clearRenditionCache;
-(id)nameForAppearanceIdentifier:(unsigned short)arg1 ;
-(id)themeStore;
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3 ;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 cursorHotSpot:(CGPoint*)arg2 ;
-(long long)maximumRenditionKeyTokenCount;
-(id)path;
-(void)_removeRenditionInfoForImageWithName:(id)arg1 ;
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2 ;
-(id)allImageNames;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 ;
-(id)defaultAppearanceName;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1 ;
-(void)_addRenditionInfoForImageWithName:(id)arg1 andKey:(renditionkeytoken*)arg2 ;
-(unsigned short)appearanceIdentifierForName:(id)arg1 ;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 usingKeySignature:(id)arg2 ;
-(BOOL)usesCUISystemThemeRenditionKey;
-(id)renditionInfoForIdentifier:(unsigned short)arg1 ;
-(id)appearances;
-(id)imagesWithName:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(const renditionkeyfmt*)keyFormat;
-(renditionkeytoken*)renditionKeyForAssetWithName:(id)arg1 withDescription:(id)arg2 ;
-(void)dealloc;
@end

