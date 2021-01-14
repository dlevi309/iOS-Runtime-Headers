/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

