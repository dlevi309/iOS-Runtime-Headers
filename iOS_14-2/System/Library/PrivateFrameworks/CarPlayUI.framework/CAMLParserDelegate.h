/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/


@protocol CAMLParserDelegate <NSObject>
@optional
-(id)CAMLParser:(id)arg1 resourceForURL:(id)arg2;
-(void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3;
-(void)CAMLParser:(id)arg1 formatWarningString:(const char*)arg2 arguments:(char*)arg3 lineNumber:(unsigned long long)arg4;
-(void)CAMLParser:(id)arg1 formatErrorString:(const char*)arg2 arguments:(char*)arg3 lineNumber:(unsigned long long)arg4;
-(id)CAMLParser:(id)arg1 didFailToLoadResourceFromURL:(id)arg2;
-(void)CAMLParser:(id)arg1 evaluateScriptElement:(id)arg2 sourceURL:(id)arg3 lineNumber:(unsigned)arg4;
-(id)CAMLParser:(id)arg1 evaluateScriptValue:(id)arg2 sourceURL:(id)arg3 lineNumber:(unsigned)arg4;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;

@end

