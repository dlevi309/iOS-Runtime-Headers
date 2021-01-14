/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCellularPlanProvisioningOnDeviceActivationRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _useDS;
	BOOL _isESim;
	NSString* _eid;
	NSString* _iccid;
	NSString* _sourceIccid;
	NSString* _phoneNumber;
	NSString* _mcc;
	NSString* _mnc;
	NSString* _gid1;
	NSString* _gid2;
	NSString* _smdpAddress;

}

@property (nonatomic,readonly) NSString * eid;                      //@synthesize eid=_eid - In the implementation block
@property (nonatomic,readonly) NSString * iccid;                    //@synthesize iccid=_iccid - In the implementation block
@property (nonatomic,readonly) NSString * sourceIccid;              //@synthesize sourceIccid=_sourceIccid - In the implementation block
@property (nonatomic,readonly) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * mcc;                      //@synthesize mcc=_mcc - In the implementation block
@property (nonatomic,readonly) NSString * mnc;                      //@synthesize mnc=_mnc - In the implementation block
@property (nonatomic,readonly) NSString * gid1;                     //@synthesize gid1=_gid1 - In the implementation block
@property (nonatomic,readonly) NSString * gid2;                     //@synthesize gid2=_gid2 - In the implementation block
@property (nonatomic,readonly) NSString * smdpAddress;              //@synthesize smdpAddress=_smdpAddress - In the implementation block
@property (nonatomic,readonly) BOOL useDS;                          //@synthesize useDS=_useDS - In the implementation block
@property (nonatomic,readonly) BOOL isESim;                         //@synthesize isESim=_isESim - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)eid;
-(NSString *)gid1;
-(NSString *)gid2;
-(NSString *)iccid;
-(BOOL)useDS;
-(BOOL)isESim;
-(NSString *)sourceIccid;
-(NSString *)smdpAddress;
-(id)initWithEid:(id)arg1 installIccid:(id)arg2 sourceIccid:(id)arg3 phoneNumber:(id)arg4 mcc:(id)arg5 mnc:(id)arg6 gid1:(id)arg7 gid2:(id)arg8 smdp:(id)arg9 useDS:(BOOL)arg10 esim:(BOOL)arg11 ;
-(id)init;
-(NSString *)mnc;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)mcc;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

