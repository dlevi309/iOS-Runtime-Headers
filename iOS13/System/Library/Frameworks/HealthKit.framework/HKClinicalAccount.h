/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HKClinicalBrandable.h>

@class NSUUID, NSDate, HKClinicalGateway, NSString, HKClinicalBrand;

@interface HKClinicalAccount : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable> {

	BOOL _userEnabled;
	BOOL _needsRelogin;
	NSUUID* _identifier;
	long long _state;
	NSDate* _lastFetchDate;
	NSDate* _lastFullFetchDate;
	HKClinicalGateway* _gateway;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long state;                                    //@synthesize state=_state - In the implementation block
@property (getter=isUserEnabled,nonatomic,readonly) BOOL userEnabled;              //@synthesize userEnabled=_userEnabled - In the implementation block
@property (nonatomic,readonly) BOOL needsRelogin;                                  //@synthesize needsRelogin=_needsRelogin - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastFetchDate;                        //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastFullFetchDate;                    //@synthesize lastFullFetchDate=_lastFullFetchDate - In the implementation block
@property (nonatomic,copy,readonly) HKClinicalGateway * gateway;                   //@synthesize gateway=_gateway - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) HKClinicalBrand * brand; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(long long)state;
-(NSString *)title;
-(NSString *)subtitle;
-(NSDate *)lastFetchDate;
-(HKClinicalBrand *)brand;
-(BOOL)isUserEnabled;
-(BOOL)needsRelogin;
-(NSDate *)lastFullFetchDate;
-(HKClinicalGateway *)gateway;
-(id)initWithIdentifier:(id)arg1 state:(long long)arg2 userEnabled:(BOOL)arg3 needsRelogin:(BOOL)arg4 lastFetchDate:(id)arg5 lastFullFetchDate:(id)arg6 gateway:(id)arg7 ;
@end

