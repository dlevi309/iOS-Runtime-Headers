/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


@protocol CUIStructuredThemeStorage <NSObject>
@optional
-(unsigned long long)colorSpaceID;

@required
-(unsigned)distilledInCoreUIVersion;
-(BOOL)hasPhysicalColorWithName:(id)arg1;
-(double)fontSizeForFontSizeType:(id)arg1;
-(BOOL)getPhysicalColor:(colordef*)arg1 withName:(id)arg2;
-(BOOL)getFontName:(id*)arg1 baselineOffset:(double*)arg2 forFontType:(id)arg3;
-(unsigned)authoredWithSchemaVersion;
-(id)renditionWithKey:(const renditionkeytoken*)arg1;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 usingKeySignature:(id)arg2;
-(id)catalogGlobals;
-(unsigned)documentFormatVersion;

@end

