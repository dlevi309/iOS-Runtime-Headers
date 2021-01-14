/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBAlignmentInfo : NSObject
+(int)convertXlHorizAlignEnumToED:(int)arg1 ;
+(int)convertXlVertAlignEnumToED:(int)arg1 ;
+(int)convertEDHorizontalAlignmentEnumToXl:(int)arg1 ;
+(int)convertEDVerticalAlignmentEnumToXl:(int)arg1 ;
+(id)edAlignmentInfoFromXlXf:(XlXf*)arg1 ;
+(id)edAlignmentInfoFromXlDXfAlign:(XlDXfAlign*)arg1 ;
+(id)edAlignmentInfoFromXlGraphicsInfo:(XlGraphicsInfo*)arg1 ;
+(void)writeAlignmentInfo:(id)arg1 toXlXf:(XlXf*)arg2 ;
+(XlDXfAlign*)xlDXfAlignFromEDAlignmentInfo:(id)arg1 ;
+(void)writeAlignmentInfo:(id)arg1 toXlGraphicsInfo:(XlGraphicsInfo*)arg2 ;
@end

