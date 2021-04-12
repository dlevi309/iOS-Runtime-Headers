/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXTable : NSObject
+(id)readThemableFillFromParent:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readThemableEffectsFromParent:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readPartStyle:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)readPropertiesFromXmlNode:(xmlNode*)arg1 toProperties:(id)arg2 drawingState:(id)arg3 ;
+(void)readGridFromXmlNode:(xmlNode*)arg1 toGrid:(id)arg2 drawingState:(id)arg3 ;
+(void)readRowsFromTableXmlNode:(xmlNode*)arg1 toTable:(id)arg2 drawingState:(id)arg3 ;
+(id)readTableStyle:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)cacheTableStylesInPart:(id)arg1 cache:(id)arg2 drawingState:(id)arg3 ;
+(id)readDefaultTableStyleWithDrawingState:(id)arg1 ;
+(id)readThemableStrokeFromParent:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readCellBorderStyle:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(int)readOnOffFlag:(id)arg1 ;
+(id)readCellStyle:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readTextStyle:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readCellPropertiesFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)readCellFromXmlNode:(xmlNode*)arg1 toCell:(id)arg2 drawingState:(id)arg3 ;
+(void)readRowFromXmlNode:(xmlNode*)arg1 toRow:(id)arg2 drawingState:(id)arg3 ;
@end

