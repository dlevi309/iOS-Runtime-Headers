/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXSheet : NSObject
+(void)readFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(Class)exSheetClassFromXmlSheetType:(id)arg1 location:(id)arg2 ;
+(void)readCommonSheetElementsFrom:(xmlTextReaderRef)arg1 state:(id)arg2 ;
+(void)readAllDrawablesWithState:(id)arg1 ;
+(void)readSheetProperties:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readLegacyDrawablesWithState:(id)arg1 ;
+(void)readDrawablesWithState:(id)arg1 ;
+(void)readDelayedSheeWithLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3 ;
@end

