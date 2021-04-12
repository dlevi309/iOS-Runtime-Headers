/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)category;
-(NSString *)domainName;
-(id)initWithCategory:(long long)arg1 domainName:(id)arg2 ;
@end

