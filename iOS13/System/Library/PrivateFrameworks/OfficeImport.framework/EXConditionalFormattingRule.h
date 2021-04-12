/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

