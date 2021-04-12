/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface ECUtils : NSObject
+(id)dateFromXlDateTimeNumber:(double)arg1 edWorkbook:(id)arg2 ;
+(id)renameMap;
+(double)timeIntervalFromXlDateTimeNumber:(double)arg1 edWorkbook:(id)arg2 ;
+(unsigned)dateTimeOffsetForBuggy1900Dates:(double)arg1 edWorkbook:(id)arg2 ;
+(BOOL)isRenameFunction:(id)arg1 ;
+(id)renameFunction:(id)arg1 ;
+(id)lassoStyleTableReferenceFromTableId:(id)arg1 ;
+(id)lassoDefaultTableName;
+(BOOL)isValidDateTime:(double)arg1 edWorkbook:(id)arg2 ;
+(BOOL)validDateInExcel:(id)arg1 edWorkbook:(id)arg2 ;
+(double)dateTimeNumberFromNSDate:(id)arg1 edWorkbook:(id)arg2 ;
@end

