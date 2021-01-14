/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTCallCapabilities : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isWifiCallingAvailable;
	BOOL _isVoLTECallingAvailable;
	BOOL _isCSCallingAvailable;
	BOOL _isEmergencyCallingOnWifiAllowed;
	BOOL _isEmergencyCallingOnWifiAvailable;
	BOOL _isCarrierSupportsEmergencyCallOnWifiNoLimit;

}

@property (assign,nonatomic) BOOL isWifiCallingAvailable;                                   //@synthesize isWifiCallingAvailable=_isWifiCallingAvailable - In the implementation block
@property (assign,nonatomic) BOOL isVoLTECallingAvailable;                                  //@synthesize isVoLTECallingAvailable=_isVoLTECallingAvailable - In the implementation block
@property (assign,nonatomic) BOOL isCSCallingAvailable;                                     //@synthesize isCSCallingAvailable=_isCSCallingAvailable - In the implementation block
@property (assign,nonatomic) BOOL isEmergencyCallingOnWifiAllowed;                          //@synthesize isEmergencyCallingOnWifiAllowed=_isEmergencyCallingOnWifiAllowed - In the implementation block
@property (assign,nonatomic) BOOL isEmergencyCallingOnWifiAvailable;                        //@synthesize isEmergencyCallingOnWifiAvailable=_isEmergencyCallingOnWifiAvailable - In the implementation block
@property (assign,nonatomic) BOOL isCarrierSupportsEmergencyCallOnWifiNoLimit;              //@synthesize isCarrierSupportsEmergencyCallOnWifiNoLimit=_isCarrierSupportsEmergencyCallOnWifiNoLimit - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isCarrierSupportsEmergencyCallOnWifiNoLimit;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isCSCallingAvailable;
-(BOOL)isVoLTECallingAvailable;
-(void)setIsWifiCallingAvailable:(BOOL)arg1 ;
-(id)description;
-(void)setIsEmergencyCallingOnWifiAllowed:(BOOL)arg1 ;
-(void)setIsCSCallingAvailable:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsCarrierSupportsEmergencyCallOnWifiNoLimit:(BOOL)arg1 ;
-(void)setIsVoLTECallingAvailable:(BOOL)arg1 ;
-(BOOL)isWifiCallingAvailable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmergencyCallingOnWifiAvailable;
-(void)setIsEmergencyCallingOnWifiAvailable:(BOOL)arg1 ;
-(BOOL)isEmergencyCallingOnWifiAllowed;
@end

