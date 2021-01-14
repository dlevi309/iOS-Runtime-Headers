/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol EFHelper <NSObject>
@required
-(unsigned long long)resolveName:(id)arg1;
-(int)rowNumber;
-(int)columnNumber;
-(unsigned long long)resolveSheet:(id)arg1;
-(unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
-(unsigned long long)resolveFile:(id)arg1;
-(id)resolveTable:(id)arg1;
-(unsigned long long)resolveTableToSheetId:(id)arg1;
-(unsigned long long)resolveTableColumn:(id)arg1 columnName:(id)arg2;
-(BOOL)isCurrentSheet:(id)arg1;
-(int)resolveFunctionName:(id)arg1;

@end

