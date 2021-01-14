/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXSection : NSObject
+(id)pageOrientationEnumMap;
+(float)scaleFromPrinterSettings:(id)arg1 ;
+(void)readFrom:(xmlNode*)arg1 to:(id)arg2 state:(id)arg3 ;
+(id)pageBorderDisplayEnumMap;
+(void)mapHeader:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
+(void)mapFooter:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
+(void)mapPrinterSettings:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
+(void)mapProperties:(xmlNode*)arg1 toSection:(id)arg2 state:(id)arg3 ;
+(id)sectionBreakEnumMap;
+(id)pageBorderDepthEnumMap;
+(id)pageBorderOffsetEnumMap;
+(id)lineNumberRestartEnumMap;
+(id)verticalJustificationEnumMap;
+(id)chapterNumberSeparatorEnumMap;
@end

