/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

