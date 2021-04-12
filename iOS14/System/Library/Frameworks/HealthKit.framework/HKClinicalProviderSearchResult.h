/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HKClinicalBrandable.h>

@class NSString, HKClinicalBrand;

@interface HKClinicalProviderSearchResult : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable> {

	BOOL _supported;
	NSString* _externalID;
	NSString* _batchID;
	NSString* _title;
	NSString* _subtitle;
	NSString* _location;
	HKClinicalBrand* _brand;
	NSString* _countryCode;

}

@property (nonatomic,copy,readonly) NSString * externalID;                     //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * batchID;                        //@synthesize batchID=_batchID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * location;                       //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) HKClinicalBrand * brand;                   //@synthesize brand=_brand - In the implementation block
@property (getter=isSupported,nonatomic,readonly) BOOL supported;              //@synthesize supported=_supported - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                    //@synthesize countryCode=_countryCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isSupported;
-(NSString *)countryCode;
-(HKClinicalBrand *)brand;
-(NSString *)location;
-(NSString *)externalID;
-(NSString *)subtitle;
-(NSString *)batchID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithExternalID:(id)arg1 batchID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 location:(id)arg5 supported:(BOOL)arg6 countryCode:(id)arg7 brand:(id)arg8 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)informationURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

