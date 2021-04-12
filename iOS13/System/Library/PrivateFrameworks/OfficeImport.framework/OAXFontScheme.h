/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXFontScheme : NSObject
+(void)readFontScheme:(xmlNode*)arg1 toFontScheme:(id)arg2 drawingState:(id)arg3 ;
+(void)readFontSchemeEntries:(xmlNode*)arg1 font:(id)arg2 ;
+(void)writeTypeface:(id)arg1 elementName:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)writeFont:(id)arg1 elementName:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)writeFontScheme:(id)arg1 to:(id)arg2 state:(id)arg3 ;
@end

