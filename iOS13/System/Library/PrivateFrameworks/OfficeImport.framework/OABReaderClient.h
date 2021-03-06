/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OABReaderClient
@required
+(int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2;
+(BOOL)tablesAreAllowed;
+(id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3;
+(void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+(BOOL)xmlEquivalentOfDrawableCanBeUsed;
+(void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+(void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+(BOOL)escherIsFullySupported;

@end

