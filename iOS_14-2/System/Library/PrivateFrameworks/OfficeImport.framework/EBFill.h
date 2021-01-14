/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

