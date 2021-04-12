/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXOfficeArt : NSObject
+(void)readOAX:(xmlNode*)arg1 parentRElement:(xmlNode*)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5 ;
+(void)readVml:(xmlNode*)arg1 parentRElement:(xmlNode*)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5 ;
+(id)relativeHorizontalPositionEnumMap;
+(id)relativeVerticalPositionEnumMap;
+(id)textWrappingModeTypeEnumMap;
+(void)readFrom:(xmlNode*)arg1 parentRElement:(xmlNode*)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5 ;
+(void)readClientData:(xmlNode*)arg1 state:(id)arg2 to:(id)arg3 ;
+(void)readPosition:(xmlNode*)arg1 state:(id)arg2 to:(id)arg3 isHorizontal:(BOOL)arg4 ;
+(void)readWrap:(xmlNode*)arg1 state:(id)arg2 to:(id)arg3 ;
+(void)readWrapDistance:(xmlNode*)arg1 parentElement:(xmlNode*)arg2 state:(id)arg3 to:(id)arg4 ;
+(void)writeWrapText:(id)arg1 to:(id)arg2 ;
+(void)writeWrapLeftDistance:(id)arg1 to:(id)arg2 ;
+(void)writeWrapRightDistance:(id)arg1 to:(id)arg2 ;
+(void)writeWrapPolygonChildren:(id)arg1 to:(id)arg2 ;
+(void)writeWrapTopDistance:(id)arg1 to:(id)arg2 ;
+(void)writeWrapBottomDistance:(id)arg1 to:(id)arg2 ;
+(BOOL)writeWrapTightlyWith:(id)arg1 toWriter:(id)arg2 ;
@end

