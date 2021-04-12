/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


@protocol CUIStructuredThemeStorage2
@optional
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2;
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3;
-(id)renditionNameForKeyList:(renditionkeytoken*)arg1;
-(id)renditionInfoForIdentifier:(unsigned short)arg1;
-(id)themeStore;

@required
-(id)localizations;
-(id)imagesWithName:(id)arg1;
-(id)allImageNames;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1;
-(unsigned short)appearanceIdentifierForName:(id)arg1;
-(id)nameForAppearanceIdentifier:(unsigned short)arg1;
-(id)appearances;
-(unsigned short)localizationIdentifierForName:(id)arg1;

@end

