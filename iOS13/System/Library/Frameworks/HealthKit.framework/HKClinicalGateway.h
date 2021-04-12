/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HKClinicalBrandable.h>

@class NSString, HKClinicalBrand, NSURL;

@interface HKClinicalGateway : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable> {

	NSString* _externalID;
	NSString* _title;
	NSString* _subtitle;
	NSString* _displayableDescription;
	NSString* _phoneNumber;
	NSURL* _informationURL;
	NSURL* _passwordResetURL;
	NSURL* _patientPortalURL;
	NSURL* _signupURL;
	long long _status;
	long long _type;
	HKClinicalBrand* _brand;
	NSString* _country;

}

@property (nonatomic,copy,readonly) NSString * externalID;                          //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                            //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayableDescription;              //@synthesize displayableDescription=_displayableDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumber;                         //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy,readonly) NSURL * informationURL;                         //@synthesize informationURL=_informationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * passwordResetURL;                       //@synthesize passwordResetURL=_passwordResetURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * patientPortalURL;                       //@synthesize patientPortalURL=_patientPortalURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * signupURL;                              //@synthesize signupURL=_signupURL - In the implementation block
@property (nonatomic,readonly) long long status;                                    //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) HKClinicalBrand * brand;                        //@synthesize brand=_brand - In the implementation block
@property (nonatomic,copy,readonly) NSString * country;                             //@synthesize country=_country - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
-(NSString *)title;
-(NSString *)phoneNumber;
-(NSString *)subtitle;
-(NSString *)country;
-(NSString *)externalID;
-(NSString *)displayableDescription;
-(HKClinicalBrand *)brand;
-(NSURL *)informationURL;
-(NSURL *)passwordResetURL;
-(NSURL *)patientPortalURL;
-(NSURL *)signupURL;
-(id)initWithExternalID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 displayableDescription:(id)arg4 phoneNumber:(id)arg5 informationURL:(id)arg6 passwordResetURL:(id)arg7 patientPortalURL:(id)arg8 signupURL:(id)arg9 status:(long long)arg10 type:(long long)arg11 brand:(id)arg12 country:(id)arg13 ;
@end

