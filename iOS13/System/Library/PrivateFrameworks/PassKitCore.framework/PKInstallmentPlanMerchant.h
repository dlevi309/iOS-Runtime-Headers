/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(NSString *)postalCode;
-(NSString *)city;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(BOOL)isEqualToInstallmentPlanMerchant:(id)arg1 ;
-(unsigned long long)categoryCode;
-(void)setCategoryCode:(unsigned long long)arg1 ;
@end

