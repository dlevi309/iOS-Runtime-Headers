/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBGraphic : NSObject
+(id)readGraphicWithDictionary:(id)arg1 state:(id)arg2 ;
+(void)readNotesWithDictionary:(id)arg1 state:(id)arg2 ;
+(void)readChart:(id)arg1 chartIndex:(short)arg2 state:(id)arg3 ;
+(void)readGraphicsInChart:(id)arg1 state:(id)arg2 ;
+(id)readMainChartWithState:(id)arg1 ;
+(void)readOle:(id)arg1 xlGraphicsInfo:(XlGraphicsInfo*)arg2 state:(id)arg3 ;
+(void)readImage:(id)arg1 xlGraphicsInfo:(XlGraphicsInfo*)arg2 state:(id)arg3 ;
+(int)objectTypeForShape:(id)arg1 ;
+(void)readGraphicsWithState:(id)arg1 ;
@end

