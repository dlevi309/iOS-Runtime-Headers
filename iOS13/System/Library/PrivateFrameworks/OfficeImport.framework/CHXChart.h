/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXChart : NSObject
+(id)readFromXmlDocument:(xmlDoc*)arg1 chartStyleId:(int)arg2 state:(id)arg3 ;
+(void)readDefaultTextPropertiesFromXmlNode:(xmlNode*)arg1 chart:(id)arg2 state:(id)arg3 ;
+(void)readChartFromXmlNode:(xmlNode*)arg1 chart:(id)arg2 state:(id)arg3 ;
+(id)readFromXmlDocument:(xmlDoc*)arg1 state:(id)arg2 ;
+(int)chdDisplayBlanksAsEnumFromXmlElement:(xmlNode*)arg1 ;
@end

