/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@interface PPConnectionsAddressFormatter : NSObject
+(id)addressComponentValueWithLocationField:(unsigned char)arg1 forAddress:(id)arg2 duetEvent:(id)arg3 ;
+(BOOL)isValidAddressDictionary:(id)arg1 ;
+(id)formattedStreetNameWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2 ;
+(id)formattedCityAndStateWithCity:(id)arg1 state:(id)arg2 ;
+(id)singleLineFormattedAddressWithPostalAddress:(id)arg1 shortStyle:(BOOL)arg2 ;
+(id)postalAddressFromDuetEvent:(id)arg1 ;
+(id)postalAddressFromAttributeSet:(id)arg1 ;
+(id)formattedAddressWithLocationField:(unsigned char)arg1 address:(id)arg2 duetEvent:(id)arg3 shortStyle:(BOOL)arg4 ;
+(id)addressDictionaryFromAttributeSet:(id)arg1 ;
@end

