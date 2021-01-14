/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@interface SGNames : NSObject
+(id)cleanName:(id)arg1 ;
+(id)surnameFromName:(id)arg1 ;
+(BOOL)isProbablyShortCJKName:(id)arg1 ;
+(BOOL)isCommonNameWord:(id)arg1 ;
+(BOOL)isSalientNameByChars:(id)arg1 ;
+(id)cjkSpacerCharacters;
+(id)nameFromEmail:(id)arg1 ;
+(id)bestName:(id)arg1 ;
+(BOOL)isSalientName:(id)arg1 ;
+(double)unnormalizedNameSimilarity:(id)arg1 and:(id)arg2 ;
+(SCD_Struct_SG23)namePayload:(id)arg1 ;
+(id)cjkSpacersToWhiteSpace:(id)arg1 ;
+(BOOL)unnormalizedNamesApproximatelyMatch:(id)arg1 and:(id)arg2 threshold:(double)arg3 ;
+(BOOL)namesApproximatelyMatch:(id)arg1 and:(id)arg2 ;
+(BOOL)isFamilyName:(id)arg1 ;
+(id)stripAndReturnHonorifics:(id)arg1 ;
+(BOOL)shouldInvertOrderOfFirst:(id)arg1 last:(id)arg2 ;
+(id)handleLastNameFirstOrder:(id)arg1 ;
+(BOOL)isCommonVietnameseSurname:(id)arg1 ;
+(BOOL)namesApproximatelyMatch:(id)arg1 and:(id)arg2 threshold:(double)arg3 ;
+(id)possibleNameStringFromEmailAddress:(id)arg1 ;
+(id)nameStringFromEmailAddress:(id)arg1 ;
+(BOOL)isDifficultName:(id)arg1 ;
+(double)nameSimilarity:(id)arg1 and:(id)arg2 ;
+(id)sketchesForName:(id)arg1 ;
+(id)sgNameFromString:(id)arg1 origin:(id)arg2 recordId:(id)arg3 extractionInfo:(id)arg4 ;
+(BOOL)isLowercaseStringCommonNameWord:(id)arg1 ;
+(id)stripHonorifics:(id)arg1 ;
+(unsigned)attributesForNameWord:(id)arg1 ;
+(id)universalCleanName:(id)arg1 ;
+(BOOL)unnormalizedNamesApproximatelyMatch:(id)arg1 and:(id)arg2 ;
+(BOOL)isCapitalized:(id)arg1 ;
@end

