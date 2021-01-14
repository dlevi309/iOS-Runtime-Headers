/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

