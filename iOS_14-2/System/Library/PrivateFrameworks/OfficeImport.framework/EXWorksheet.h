/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXWorksheet : NSObject
+(id)edSheetWithState:(id)arg1 ;
+(void)setupProcessors:(id)arg1 ;
+(BOOL)readDistinctSheetElementsFrom:(xmlTextReaderRef)arg1 state:(id)arg2 ;
+(void)readOtherSheetComponentsWithState:(id)arg1 ;
+(void)readTables:(id)arg1 ;
+(void)readWorksheetViewsFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readWorksheetFormatPropertiesFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readColumnInfosFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readHyperlinksFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readOleObjectsFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readSheetExtensions:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readCommentTextFrom:(id)arg1 ;
+(void)readPivotTables:(id)arg1 ;
+(void)readSheetExtension:(xmlNode*)arg1 state:(id)arg2 ;
@end

