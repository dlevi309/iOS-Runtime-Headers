/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBConditionalFormat : NSObject
+(int)convertXlConditionalFmtTypeEnumToED:(int)arg1 ;
+(int)convertXlConditionalFmtOperatorEnumToED:(int)arg1 ;
+(void)readXlConditionalFormat:(XlConditionalFormat*)arg1 toEDConditionalFormatting:(id)arg2 state:(id)arg3 ;
+(BOOL)validXlCf:(XlCf*)arg1 ;
+(int)convertEDConditionalFmtTypeEnumToXl:(int)arg1 ;
+(int)convertEDConditionalFmtOperatorEnumToXl:(int)arg1 ;
@end

