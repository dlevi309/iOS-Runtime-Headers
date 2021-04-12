/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXFill : NSObject
+(id)readNullFillFromXmlNode:(xmlNode*)arg1 ;
+(id)readSolidFillFromXmlNode:(xmlNode*)arg1 ;
+(id)readGradientFillFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readImageFillFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 forDrawable:(id)arg3 drawingState:(id)arg4 ;
+(id)readPresetPatternFillFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readGroupFillFromXmlNode:(xmlNode*)arg1 ;
+(void)readStretch:(xmlNode*)arg1 stretch:(id)arg2 ;
+(void)readTile:(xmlNode*)arg1 tile:(id)arg2 ;
+(id)readBlipRefFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 forDrawable:(id)arg3 drawingState:(id)arg4 forBullet:(BOOL)arg5 ;
+(id)readFillFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 drawingState:(id)arg3 ;
+(id)tileFlipModeEnumMap;
+(void)readGradientFillFromXmlNode:(xmlNode*)arg1 toGradientFill:(id)arg2 drawingState:(id)arg3 ;
+(id)pathGradientFillTypeEnumMap;
+(id)readPathGradientFillFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readLinearGradientFillFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)presetPatternFillTypeEnumMap;
@end

