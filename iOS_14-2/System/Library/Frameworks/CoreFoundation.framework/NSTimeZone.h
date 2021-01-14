/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
+(id)systemTimeZone;
+(id)defaultTimeZone;
+(void)resetSystemTimeZone;
+(void)setDefaultTimeZone:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)abbreviationDictionary;
+(id)timeZoneForSecondsFromGMT:(long long)arg1 ;
+(id)timeZoneDataVersion;
+(id)timeZoneWithName:(id)arg1 data:(id)arg2 ;
+(id)knownTimeZoneNames;
+(id)timeZoneWithAbbreviation:(id)arg1 ;
+(void)setAbbreviationDictionary:(id)arg1 ;
+(id)timeZoneWithName:(id)arg1 ;
+(id)localTimeZone;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithCoder:(id)arg1 ;
-(id)abbreviation;
-(BOOL)isNSTimeZone__;
-(id)nextDaylightSavingTimeTransition;
-(double)daylightSavingTimeOffset;
-(BOOL)isDaylightSavingTime;
-(BOOL)isEqualToTimeZone:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)localizedName:(long long)arg1 locale:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(NSData *)data;
-(long long)secondsFromGMT;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(long long)secondsFromGMTForDate:(id)arg1 ;
-(id)initWithName:(id)arg1 data:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

