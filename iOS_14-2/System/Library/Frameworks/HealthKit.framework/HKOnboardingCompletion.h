/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSUUID;

@interface HKOnboardingCompletion : NSObject <NSSecureCoding, NSCopying> {

	NSString* _featureIdentifier;
	long long _version;
	NSDate* _completionDate;
	NSString* _countryCode;
	NSUUID* _UUID;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;                             //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,readonly) long long version;                              //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSDate * completionDate;                   //@synthesize completionDate=_completionDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                    //@synthesize countryCode=_countryCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)countryCode;
-(NSUUID *)UUID;
-(id)initWithFeatureIdentifier:(id)arg1 version:(long long)arg2 completionDate:(id)arg3 countryCode:(id)arg4 UUID:(id)arg5 ;
-(id)initWithFeatureIdentifier:(id)arg1 version:(long long)arg2 completionDate:(id)arg3 countryCode:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)featureIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)completionDate;
@end

