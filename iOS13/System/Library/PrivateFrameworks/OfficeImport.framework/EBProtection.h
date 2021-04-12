/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBProtection : NSObject
+(id)edProtectionFromXlXf:(XlXf*)arg1 ;
+(id)edProtectionFromXlDXfProtect:(XlDXfProtect*)arg1 ;
+(id)edProtectionFromXlGraphicsInfo:(XlGraphicsInfo*)arg1 ;
+(void)writeProtection:(id)arg1 toXlXf:(XlXf*)arg2 ;
+(void)writeProtection:(id)arg1 toXlGraphicsInfo:(XlGraphicsInfo*)arg2 ;
+(XlDXfProtect*)xlDXfProtectFromEDProtection:(id)arg1 ;
@end

