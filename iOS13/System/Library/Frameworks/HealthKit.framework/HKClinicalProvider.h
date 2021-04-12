/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HKClinicalBrandable.h>

@class NSString, NSURL, HKClinicalBrand, NSArray;

@interface HKClinicalProvider : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable> {

	NSString* _externalID;
	NSString* _title;
	NSString* _subtitle;
	NSString* _location;
	NSURL* _informationURL;
	HKClinicalBrand* _brand;
	NSArray* _gateways;

}

@property (nonatomic,copy,readonly) NSString * externalID;                     //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * location;                       //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSURL * informationURL;                    //@synthesize informationURL=_informationURL - In the implementation block
@property (nonatomic,copy,readonly) HKClinicalBrand * brand;                   //@synthesize brand=_brand - In the implementation block
@property (nonatomic,copy,readonly) NSArray * gateways;                        //@synthesize gateways=_gateways - In the implementation block
@property (getter=isSupported,nonatomic,readonly) BOOL supported; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSString *)location;
-(NSString *)subtitle;
-(NSArray *)gateways;
-(BOOL)isSupported;
-(NSString *)externalID;
-(HKClinicalBrand *)brand;
-(NSURL *)informationURL;
-(id)initWithExternalID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 location:(id)arg4 informationURL:(id)arg5 brand:(id)arg6 gateways:(id)arg7 ;
@end

