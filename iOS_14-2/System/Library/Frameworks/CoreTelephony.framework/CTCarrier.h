/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/


@class NSString;

@interface CTCarrier : NSObject {

	NSString* _carrierName;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	NSString* _isoCountryCode;
	BOOL _allowsVOIP;

}

@property (nonatomic,retain) NSString * carrierName;                    //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,retain) NSString * mobileCountryCode;              //@synthesize mobileCountryCode=_mobileCountryCode - In the implementation block
@property (nonatomic,retain) NSString * mobileNetworkCode;              //@synthesize mobileNetworkCode=_mobileNetworkCode - In the implementation block
@property (nonatomic,retain) NSString * isoCountryCode;                 //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (assign,nonatomic) BOOL allowsVOIP;                           //@synthesize allowsVOIP=_allowsVOIP - In the implementation block
-(void)setMobileNetworkCode:(NSString *)arg1 ;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(id)init;
-(NSString *)mobileNetworkCode;
-(NSString *)carrierName;
-(NSString *)mobileCountryCode;
-(BOOL)allowsVOIP;
-(NSString *)isoCountryCode;
-(id)description;
-(void)setMobileCountryCode:(NSString *)arg1 ;
-(void)setAllowsVOIP:(BOOL)arg1 ;
-(void)setCarrierName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

