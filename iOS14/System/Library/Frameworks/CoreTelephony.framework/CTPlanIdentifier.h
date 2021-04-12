/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTPlanIdentifier : NSObject <NSSecureCoding> {

	NSString* _iccid;
	NSString* _carrierName;
	NSString* _phoneNumber;
	NSString* _countryCode;
	NSString* _label;

}

@property (nonatomic,retain) NSString * iccid;                    //@synthesize iccid=_iccid - In the implementation block
@property (nonatomic,retain) NSString * carrierName;              //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * label;                    //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)iccid;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setIccid:(NSString *)arg1 ;
-(id)initWithIccid:(id)arg1 carrierName:(id)arg2 phoneNumber:(id)arg3 countryCode:(id)arg4 label:(id)arg5 ;
-(NSString *)countryCode;
-(NSString *)carrierName;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setCarrierName:(NSString *)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

