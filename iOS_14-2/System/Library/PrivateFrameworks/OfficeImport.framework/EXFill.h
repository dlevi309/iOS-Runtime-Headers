/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXFill : NSObject
+(id)edFillFromXmlFillElement:(xmlNode*)arg1 differentialFill:(BOOL)arg2 state:(id)arg3 ;
+(id)edPatternFillFromXmlElement:(xmlNode*)arg1 differentialFill:(BOOL)arg2 state:(id)arg3 ;
+(id)edGradientFillFromXmlElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)patternFillTypeEnumMap;
+(id)gradientFillTypeEnumMap;
+(id)edFillFromXmlFillElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)edPatternTypeFromXmlPatternTypeString:(id)arg1 ;
+(int)edGradientTypeFromXmlGradientTypeString:(id)arg1 state:(id)arg2 ;
+(id)edStopFromXmlGradientElement:(xmlNode*)arg1 state:(id)arg2 ;
@end

