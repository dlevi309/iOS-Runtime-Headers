/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@interface WBSCyclerRandomnessUtilities : NSObject
+(void)initialize;
+(unsigned long long)seed;
+(id)randomString;
+(void)setSeed:(unsigned long long)arg1 ;
+(id)randomElementOfArray:(id)arg1 ;
+(id)randomElementOfArray:(id)arg1 relativeProbabilities:(id)arg2 ;
+(unsigned long long)randomIntegerWithUpperBound:(unsigned long long)arg1 ;
+(id)randomURL;
+(void)reseed;
+(id)_randomStringWithCharactersFromString:(id)arg1 ;
@end

