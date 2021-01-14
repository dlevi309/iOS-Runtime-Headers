/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMIPCore.framework/FMIPCore
*/


#import <FMIPCore/FMIPCore-Structs.h>
@interface FMIPPhoneNumberUtils : NSObject
+(id)countryCode;
+(id)normalizedPhoneNumber:(id)arg1 ;
+(id)formatPhoneNumber:(id)arg1 ;
+(BOOL)isEmail:(id)arg1 ;
+(id)unformatPhoneNumber:(id)arg1 ;
+(BOOL)isPhoneNumberValid:(id)arg1 ;
+(BOOL)isPossiblyTruncatedPhoneNumberValid:(id)arg1 ;
+(id)formatFullyQualifiedPhoneNumber:(id)arg1 ;
+(BOOL)updateTextView:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
+(BOOL)updateTextField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
+(id)completeNumberForPhoneNumber:(id)arg1 formatted:(BOOL)arg2 ;
+(id)formattedHandle:(id)arg1 ;
+(BOOL)handle:(id)arg1 matchesHandle:(id)arg2 ;
@end

