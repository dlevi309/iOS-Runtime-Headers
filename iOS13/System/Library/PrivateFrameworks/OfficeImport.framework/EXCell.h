/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXCell : NSObject
+(int)edCellTypeFromXmlCellElement:(xmlNode*)arg1 isDate:(BOOL*)arg2 isFmlaStr:(BOOL*)arg3 stringIndex:(BOOL*)arg4 ;
+(BOOL)edBoolFromXmlBoolString:(id)arg1 ;
+(double)dateTimeNumberFromXmlDateString:(id)arg1 state:(id)arg2 ;
+(int)edErrorFromXmlErrorString:(id)arg1 ;
+(id)xmlErrorStringValueEnumMap;
+(void)edCellFromXmlCellElement:(xmlNode*)arg1 edRowInfo:(EDRowInfo*)arg2 edRowBlock:(id)arg3 edRowBlocks:(id)arg4 state:(id)arg5 ;
@end

