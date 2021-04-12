/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/


@protocol CAMLParserDelegate <NSObject>
@optional
-(id)CAMLParser:(id)arg1 didFailToLoadResourceFromURL:(id)arg2;
-(void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3;
-(id)CAMLParser:(id)arg1 resourceForURL:(id)arg2;
-(void)CAMLParser:(id)arg1 evaluateScriptElement:(id)arg2 sourceURL:(id)arg3 lineNumber:(unsigned)arg4;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
-(void)CAMLParser:(id)arg1 formatErrorString:(const char*)arg2 arguments:(char*)arg3 lineNumber:(unsigned long long)arg4;
-(void)CAMLParser:(id)arg1 formatWarningString:(const char*)arg2 arguments:(char*)arg3 lineNumber:(unsigned long long)arg4;
-(id)CAMLParser:(id)arg1 evaluateScriptValue:(id)arg2 sourceURL:(id)arg3 lineNumber:(unsigned)arg4;

@end

