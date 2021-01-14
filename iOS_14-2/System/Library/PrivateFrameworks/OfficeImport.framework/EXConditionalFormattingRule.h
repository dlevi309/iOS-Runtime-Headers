/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXConditionalFormattingRule : NSObject
+(void)readFrom:(xmlNode*)arg1 x14:(BOOL)arg2 edConditionalFormatting:(id)arg3 edReference:(id)arg4 state:(id)arg5 ;
+(int)edRuleTypeFromXmlRuleTypeString:(id)arg1 ;
+(int)edOperatorFromXmlOperatorString:(id)arg1 ;
+(int)edTimePeriodFromXmlTimePeriodString:(id)arg1 ;
+(id)timePeriodEnumMap;
+(id)operatorStringEnumMap;
+(id)conditionalFormattingRuleTypeEnumMap;
@end

