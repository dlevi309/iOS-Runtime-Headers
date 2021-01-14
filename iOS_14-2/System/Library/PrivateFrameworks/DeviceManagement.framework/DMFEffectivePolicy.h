/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface DMFEffectivePolicy : NSObject <NSCopying, NSSecureCoding> {

	NSString* _type;
	NSDictionary* _currentPoliciesByIdentifier;
	NSDictionary* _prioritiesByIdentifier;
	long long _defaultPolicy;
	unsigned long long _defaultPriority;

}

@property (nonatomic,copy,readonly) NSDictionary * currentPoliciesByIdentifier;              //@synthesize currentPoliciesByIdentifier=_currentPoliciesByIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * prioritiesByIdentifier;                   //@synthesize prioritiesByIdentifier=_prioritiesByIdentifier - In the implementation block
@property (nonatomic,readonly) long long defaultPolicy;                                      //@synthesize defaultPolicy=_defaultPolicy - In the implementation block
@property (nonatomic,readonly) unsigned long long defaultPriority;                           //@synthesize defaultPriority=_defaultPriority - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL downtimeEnforced; 
+(BOOL)supportsSecureCoding;
+(id)downtimeCategoryIdentifiers;
+(id)systemCategoryIdentifiers;
+(id)unblockableBundleIdentifiers;
+(id)unblockableCategoryIdentifiers;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)defaultPriority;
-(long long)policyForIdentifier:(id)arg1 ;
-(BOOL)downtimeEnforced;
-(NSString *)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(id)arg1 defaultPolicy:(long long)arg2 currentPoliciesByIdentifier:(id)arg3 defaultPriority:(unsigned long long)arg4 prioritiesByIdentifier:(id)arg5 ;
-(NSDictionary *)currentPoliciesByIdentifier;
-(NSDictionary *)prioritiesByIdentifier;
-(long long)priorityForIdentifier:(id)arg1 ;
-(id)_valueForMatchingHostName:(id)arg1 inRegisteredHostNames:(id)arg2 ;
-(long long)policyForHostName:(id)arg1 ;
-(unsigned long long)priorityForHostName:(id)arg1 ;
-(long long)defaultPolicy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

