/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


@interface CNVCardADRParser : NSObject
+(id)valueWithParser:(id)arg1 ;
+(void)processExtensionValuesForLines:(id)arg1 validCountryCodes:(id)arg2 parser:(id)arg3 ;
+(id)parseStreetAddressComponentsWithParser:(id)arg1 ;
+(void)collectStreetAddressComponentsIntoSingleKeyInAddress:(id)arg1 ;
+(BOOL)parseNextStringWithParser:(id)arg1 components:(id)arg2 key:(id)arg3 ;
+(id)addressValueWithPrimaryAddress:(id)arg1 extendedAddress:(id)arg2 poBox:(id)arg3 ;
+(id)countryCodeForLine:(id)arg1 validCountryCodes:(id)arg2 parser:(id)arg3 ;
@end

