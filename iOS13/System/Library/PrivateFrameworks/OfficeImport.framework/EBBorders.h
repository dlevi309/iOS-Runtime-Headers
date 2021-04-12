/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBBorders : NSObject
+(int)convertXlBorderEnumToED:(int)arg1 ;
+(int)convertXlDiagStyleEnumToED:(int)arg1 ;
+(int)convertEDBorderEnumToXl:(int)arg1 ;
+(int)convertEDDiagonalEnumToXl:(int)arg1 ;
+(id)edBordersFromXlXf:(XlXf*)arg1 edResources:(id)arg2 ;
+(id)edBordersFromXlDXf:(XlDXf*)arg1 edResources:(id)arg2 ;
@end

