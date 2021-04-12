/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
@interface PPUtils : NSObject
+(id)osBuild;
+(id)coordinatesToGeoHashWithLength:(unsigned long long)arg1 latitude:(double)arg2 longitude:(double)arg3 ;
+(void)enumerateChunksOfSize:(unsigned long long)arg1 fromArray:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(BOOL)isConstrainedDevice;
+(BOOL)isInternalDevice;
+(id)Sha256ForData:(id)arg1 withSalt:(id)arg2 ;
+(id)hexOfBytes:(const void*)arg1 size:(unsigned long long)arg2 ;
+(id)hexUUID;
+(long long)compareDouble:(double)arg1 withDouble:(double)arg2 ;
+(long long)reverseCompareDouble:(double)arg1 withDouble:(double)arg2 ;
+(id)formatStringArray:(id)arg1 truncatingAtLength:(unsigned long long)arg2 ;
+(BOOL)yesWithProbability:(double)arg1 ;
+(id)currentLocaleLanguageCode;
+(id)reduceSpotlightDomainIdentifiers:(id)arg1 ;
+(id)sqliteGlobEscape:(id)arg1 ;
+(BOOL)isFirstPartyApp:(id)arg1 ;
+(BOOL)localizedTimeStructForDate:(id)arg1 tm:(tm*)arg2 ;
@end

