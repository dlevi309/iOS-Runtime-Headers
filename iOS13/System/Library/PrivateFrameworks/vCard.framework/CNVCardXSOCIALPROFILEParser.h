/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


@interface CNVCardXSOCIALPROFILEParser : NSObject
+(id)os_log;
+(id)valueWithParser:(id)arg1 ;
+(void)processExtensionValuesForLines:(id)arg1 parser:(id)arg2 ;
+(id)unfold:(id)arg1 ;
+(BOOL)propertyLooksLikeDOSAttackString:(id)arg1 ;
+(id)typeForSocialProperty:(id)arg1 ;
+(id)urlSuffixForSocialProperty:(id)arg1 ;
+(id)profileFromURL:(id)arg1 ;
+(id)parametersForSocialProperty:(id)arg1 ;
+(id)adjust:(id)arg1 withParameters:(id)arg2 ;
+(void)handleSpecialCaseUpdateForService:(id)arg1 socialProfile:(id)arg2 ;
+(void)handleBundleIndentifiersAsList:(id)arg1 socialProfile:(id)arg2 ;
+(id)rawForSocialProperty:(id)arg1 ;
+(id)unwrapDoubleQuotedProperty:(id)arg1 ;
@end

