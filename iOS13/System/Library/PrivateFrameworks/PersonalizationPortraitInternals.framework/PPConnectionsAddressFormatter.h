/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

