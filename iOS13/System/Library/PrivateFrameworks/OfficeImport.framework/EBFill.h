/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBFill : NSObject
+(id)edFillFromXlXf:(XlXf*)arg1 edResources:(id)arg2 ;
+(id)edFillFromXlDXf:(XlDXf*)arg1 edResources:(id)arg2 ;
+(int)convertXlFillPatternEnumToED:(int)arg1 ;
+(int)convertEDPatternFillEnumToXl:(int)arg1 ;
+(BOOL)extractFromEDFill:(id)arg1 foreColorReference:(id*)arg2 backColorReference:(id*)arg3 fillPatternEnum:(int*)arg4 ;
@end

