/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKInstallmentPlanMerchant : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	NSString* _name;
	unsigned long long _categoryCode;
	NSString* _city;
	NSString* _state;
	NSString* _postalCode;
	NSString* _country;

}

@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long categoryCode;              //@synthesize categoryCode=_categoryCode - In the implementation block
@property (nonatomic,copy) NSString * city;                                //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSString * state;                               //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * postalCode;                          //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,copy) NSString * country;                             //@synthesize country=_country - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)postalCode;
-(NSString *)city;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)country;
-(void)setPostalCode:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqualToInstallmentPlanMerchant:(id)arg1 ;
-(unsigned long long)categoryCode;
-(void)setCategoryCode:(unsigned long long)arg1 ;
-(void)setState:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

