/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)timeZoneForSecondsFromGMT:(long long)arg1 ;
+(id)systemTimeZone;
+(id)abbreviationDictionary;
+(void)resetSystemTimeZone;
+(id)defaultTimeZone;
+(void)setDefaultTimeZone:(id)arg1 ;
+(id)localTimeZone;
+(id)knownTimeZoneNames;
+(void)setAbbreviationDictionary:(id)arg1 ;
+(id)timeZoneDataVersion;
+(id)timeZoneWithName:(id)arg1 data:(id)arg2 ;
+(id)timeZoneWithName:(id)arg1 ;
+(id)timeZoneWithAbbreviation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(BOOL)isNSTimeZone__;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(NSData *)data;
-(long long)secondsFromGMTForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(id)localizedName:(long long)arg1 locale:(id)arg2 ;
-(id)initWithName:(id)arg1 data:(id)arg2 ;
-(id)initWithName:(id)arg1 ;
-(BOOL)isEqualToTimeZone:(id)arg1 ;
-(id)abbreviation;
-(long long)secondsFromGMT;
-(BOOL)isDaylightSavingTime;
-(double)daylightSavingTimeOffset;
-(id)nextDaylightSavingTimeTransition;
@end

