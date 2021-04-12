/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HKClinicalBrandable.h>

@class NSUUID, NSDate, HKClinicalGateway, NSString, HKClinicalBrand;

@interface HKClinicalAccount : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable> {

	BOOL _userEnabled;
	NSUUID* _identifier;
	long long _state;
	NSDate* _lastFetchDate;
	NSDate* _lastFullFetchDate;
	HKClinicalGateway* _gateway;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long state;                                    //@synthesize state=_state - In the implementation block
@property (getter=isUserEnabled,nonatomic,readonly) BOOL userEnabled;              //@synthesize userEnabled=_userEnabled - In the implementation block
@property (nonatomic,readonly) BOOL needsRelogin; 
@property (nonatomic,readonly) BOOL needsScopeUpgrade; 
@property (nonatomic,copy,readonly) NSDate * lastFetchDate;                        //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastFullFetchDate;                    //@synthesize lastFullFetchDate=_lastFullFetchDate - In the implementation block
@property (nonatomic,copy,readonly) HKClinicalGateway * gateway;                   //@synthesize gateway=_gateway - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) HKClinicalBrand * brand; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(HKClinicalBrand *)brand;
-(id)init;
-(BOOL)isUserEnabled;
-(HKClinicalGateway *)gateway;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)needsRelogin;
-(NSDate *)lastFullFetchDate;
-(id)initWithIdentifier:(id)arg1 state:(long long)arg2 userEnabled:(BOOL)arg3 lastFetchDate:(id)arg4 lastFullFetchDate:(id)arg5 gateway:(id)arg6 ;
-(BOOL)needsScopeUpgrade;
-(NSString *)description;
-(NSDate *)lastFetchDate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

