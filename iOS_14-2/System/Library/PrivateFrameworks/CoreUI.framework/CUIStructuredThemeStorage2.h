/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


@protocol CUIStructuredThemeStorage2
@optional
-(id)themeStore;
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3;
-(id)renditionNameForKeyList:(renditionkeytoken*)arg1;
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2;
-(id)renditionInfoForIdentifier:(unsigned short)arg1;

@required
-(id)nameForAppearanceIdentifier:(unsigned short)arg1;
-(id)mappedAliases;
-(id)localizations;
-(id)allImageNames;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1;
-(unsigned short)appearanceIdentifierForName:(id)arg1;
-(unsigned short)localizationIdentifierForName:(id)arg1;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1;
-(id)appearances;
-(id)imagesWithName:(id)arg1;
-(BOOL)containsLookupForName:(id)arg1;

@end

