/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSNumber;

@interface MCPasswordPolicyPayload : MCPayload {

	NSNumber* _isSimplePasscodeAllowed;
	NSNumber* _isPasscodeRequired;
	NSNumber* _isAlphanumericPasscodeRequired;
	NSNumber* _isManualFetchingWhenRoaming;
	NSNumber* _minLength;
	NSNumber* _maxFailedAttempts;
	NSNumber* _maxGracePeriodMinutes;
	NSNumber* _maxInactivityMinutes;
	NSNumber* _maxPasscodeAgeDays;
	NSNumber* _passcodeHistoryCount;
	NSNumber* _minComplexCharacters;

}

@property (nonatomic,retain,readonly) NSNumber * isSimplePasscodeAllowed;                     //@synthesize isSimplePasscodeAllowed=_isSimplePasscodeAllowed - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * isPasscodeRequired;                          //@synthesize isPasscodeRequired=_isPasscodeRequired - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * isAlphanumericPasscodeRequired;              //@synthesize isAlphanumericPasscodeRequired=_isAlphanumericPasscodeRequired - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * isManualFetchingWhenRoaming;                 //@synthesize isManualFetchingWhenRoaming=_isManualFetchingWhenRoaming - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * minLength;                                   //@synthesize minLength=_minLength - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * maxFailedAttempts;                           //@synthesize maxFailedAttempts=_maxFailedAttempts - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * maxGracePeriodMinutes;                       //@synthesize maxGracePeriodMinutes=_maxGracePeriodMinutes - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * maxInactivityMinutes;                        //@synthesize maxInactivityMinutes=_maxInactivityMinutes - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * maxPasscodeAgeDays;                          //@synthesize maxPasscodeAgeDays=_maxPasscodeAgeDays - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * passcodeHistoryCount;                        //@synthesize passcodeHistoryCount=_passcodeHistoryCount - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * minComplexCharacters;                        //@synthesize minComplexCharacters=_minComplexCharacters - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)subtitle1Description;
-(id)filterForUserEnrollmentOutError:(id*)arg1 ;
-(NSNumber *)maxFailedAttempts;
-(NSNumber *)isManualFetchingWhenRoaming;
-(NSNumber *)isSimplePasscodeAllowed;
-(NSNumber *)isAlphanumericPasscodeRequired;
-(NSNumber *)maxGracePeriodMinutes;
-(NSNumber *)maxInactivityMinutes;
-(NSNumber *)maxPasscodeAgeDays;
-(NSNumber *)passcodeHistoryCount;
-(NSNumber *)minComplexCharacters;
-(NSNumber *)minLength;
-(id)verboseDescription;
-(id)restrictions;
-(NSNumber *)isPasscodeRequired;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

