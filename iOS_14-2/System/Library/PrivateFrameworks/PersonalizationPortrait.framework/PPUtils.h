/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
@interface PPUtils : NSObject
+(long long)compareDouble:(double)arg1 withDouble:(double)arg2 ;
+(id)coordinatesToGeoHashWithLength:(unsigned long long)arg1 latitude:(double)arg2 longitude:(double)arg3 ;
+(id)osBuild;
+(BOOL)yesWithProbability:(double)arg1 ;
+(id)preferredLanguages;
+(BOOL)isInternalDevice;
+(BOOL)isFirstPartyApp:(id)arg1 ;
+(id)hexUUID;
+(BOOL)localizedTimeStructForSecondsFrom1970:(double)arg1 tm:(tm*)arg2 ;
+(BOOL)localizedTimeStructForDate:(id)arg1 tm:(tm*)arg2 ;
+(id)sqliteGlobEscape:(id)arg1 ;
+(long long)reverseCompareDouble:(double)arg1 withDouble:(double)arg2 ;
+(void)enumerateChunksOfSize:(unsigned long long)arg1 fromArray:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(id)formatStringArray:(id)arg1 truncatingAtLength:(unsigned long long)arg2 ;
+(id)Sha256ForData:(id)arg1 withSalt:(id)arg2 ;
+(id)reduceSpotlightDomainIdentifiers:(id)arg1 ;
+(id)hexOfBytes:(const void*)arg1 size:(unsigned long long)arg2 ;
+(id)currentLocaleLanguageCode;
@end

