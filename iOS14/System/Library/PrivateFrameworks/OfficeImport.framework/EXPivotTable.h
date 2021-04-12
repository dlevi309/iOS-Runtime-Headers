/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXPivotTable : NSObject
+(void)readLocationFrom:(xmlNode*)arg1 toPivotTable:(id)arg2 ;
+(void)readStyleInfoFrom:(xmlNode*)arg1 toPivotTable:(id)arg2 ;
+(void)readPivotFieldsFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(void)readFieldsFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(void)readItemsFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(void)readPageFieldsFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(void)readDataFieldsFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(void)readConditionalFormatsFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(void)readPivotAreasFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(id)edPivotTableFromXmlPivotTableElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)edPivotItemTypeFrom:(id)arg1 ;
+(int)edPivotFieldAxisFrom:(id)arg1 ;
+(void)readFieldItemsFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(int)edPivotDatFieldFormatFrom:(id)arg1 ;
+(int)edPivotConditionalFormatTypeFrom:(id)arg1 ;
+(int)edPivotConditionalFormatScopeFrom:(id)arg1 ;
+(int)edPivotAreaTypeFrom:(id)arg1 ;
+(void)readPivotAreaReferencesFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
@end

