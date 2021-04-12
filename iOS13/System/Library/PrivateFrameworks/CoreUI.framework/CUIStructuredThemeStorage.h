/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


@protocol CUIStructuredThemeStorage <NSObject>
@optional
-(unsigned long long)colorSpaceID;

@required
-(id)renditionWithKey:(const renditionkeytoken*)arg1;
-(unsigned)distilledInCoreUIVersion;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 usingKeySignature:(id)arg2;
-(BOOL)getFontName:(id*)arg1 baselineOffset:(double*)arg2 forFontType:(id)arg3;
-(double)fontSizeForFontSizeType:(id)arg1;
-(BOOL)getPhysicalColor:(colordef*)arg1 withName:(id)arg2;
-(BOOL)hasPhysicalColorWithName:(id)arg1;
-(unsigned)documentFormatVersion;
-(unsigned)authoredWithSchemaVersion;
-(id)catalogGlobals;

@end

