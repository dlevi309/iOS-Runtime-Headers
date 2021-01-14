/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class NSString;

@interface HKKeyValueDomainServerConfiguration : HKTaskConfiguration {

	long long _category;
	NSString* _domainName;

}

@property (nonatomic,readonly) long long category;                      //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * domainName;              //@synthesize domainName=_domainName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)domainName;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)category;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCategory:(long long)arg1 domainName:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

