/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXPageSetup : NSObject
+(int)edPageOrientationFromPageOrientationString:(id)arg1 ;
+(int)edPageOrderFromPageOrderString:(id)arg1 ;
+(id)pageOrderEnumMap;
+(id)pageOrientationEnumMap;
+(id)edPageSetupFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(id)edPageMarginsFrom:(xmlNode*)arg1 state:(id)arg2 ;
@end

