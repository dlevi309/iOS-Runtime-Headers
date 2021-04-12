/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

