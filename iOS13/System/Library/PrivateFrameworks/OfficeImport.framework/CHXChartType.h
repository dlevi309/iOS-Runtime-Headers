/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXChartType : NSObject
+(int)chdGroupingFromXmlGroupingElement:(xmlNode*)arg1 ;
+(id)chdChartTypeFromXmlChartTypeElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)chdShapeTypeFromXmlShapeTypeElement:(xmlNode*)arg1 ;
+(Class)chxChartTypeClassWithXmlElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)stringWithGroupingEnum:(int)arg1 ;
+(void)resolveStyle:(id)arg1 state:(id)arg2 ;
+(void)prepareChartTypeForWriting:(id)arg1 ;
@end

