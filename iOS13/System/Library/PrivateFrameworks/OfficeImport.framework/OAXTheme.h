/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXTheme : NSObject
+(void)readObjectDefaults:(xmlNode*)arg1 theme:(id)arg2 drawingState:(id)arg3 ;
+(void)readFromPackagePart:(id)arg1 toTheme:(id)arg2 state:(id)arg3 ;
+(void)readFromThemeData:(const char*)arg1 themeDataSize:(unsigned)arg2 toTheme:(id)arg3 xmlDrawingState:(id)arg4 ;
+(void)readDefaultProperties:(xmlNode*)arg1 fallback:(xmlNode*)arg2 defaultProperties:(id)arg3 drawingState:(id)arg4 ;
+(void)readObjectDefaultsFromParent:(xmlNode*)arg1 defaultsName:(const char*)arg2 toObjectDefaults:(id)arg3 drawingState:(id)arg4 ;
+(xmlNode*)childNamed:(const char*)arg1 inParent:(xmlNode*)arg2 fallbackParent:(xmlNode*)arg3 drawingState:(id)arg4 ;
@end

