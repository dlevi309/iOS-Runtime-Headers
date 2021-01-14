/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTUserLabel;

@interface CTCellularPlanPendingTransfer : NSObject <NSSecureCoding> {

	NSString* _sourceIccid;
	NSString* _carrierName;
	NSString* _deviceName;
	CTUserLabel* _planLabel;
	NSString* _phoneNumber;
	NSString* _countryCode;
	long long _status;

}

@property (nonatomic,retain) NSString * sourceIccid;               //@synthesize sourceIccid=_sourceIccid - In the implementation block
@property (nonatomic,retain) NSString * carrierName;               //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) CTUserLabel * planLabel;              //@synthesize planLabel=_planLabel - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * countryCode;               //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) long long status;                     //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCountryCode:(NSString *)arg1 ;
-(CTUserLabel *)planLabel;
-(NSString *)sourceIccid;
-(NSString *)deviceName;
-(void)setPlanLabel:(CTUserLabel *)arg1 ;
-(NSString *)countryCode;
-(id)init;
-(NSString *)carrierName;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setCarrierName:(NSString *)arg1 ;
-(long long)status;
-(void)setSourceIccid:(NSString *)arg1 ;
@end

