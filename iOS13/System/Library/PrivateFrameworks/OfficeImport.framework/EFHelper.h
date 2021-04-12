/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol EFHelper <NSObject>
@required
-(int)columnNumber;
-(unsigned long long)resolveName:(id)arg1;
-(int)rowNumber;
-(unsigned long long)resolveSheet:(id)arg1;
-(unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
-(unsigned long long)resolveFile:(id)arg1;
-(id)resolveTable:(id)arg1;
-(unsigned long long)resolveTableToSheetId:(id)arg1;
-(unsigned long long)resolveTableColumn:(id)arg1 columnName:(id)arg2;
-(BOOL)isCurrentSheet:(id)arg1;
-(int)resolveFunctionName:(id)arg1;

@end

