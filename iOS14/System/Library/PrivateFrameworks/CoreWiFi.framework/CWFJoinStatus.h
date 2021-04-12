/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, CWFScanResult, CWFNetworkProfile, NSDate, NSError;

@interface CWFJoinStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _autoJoin;
	unsigned _EAP8021XSupplicantState;
	unsigned _EAP8021XControlMode;
	unsigned _EAP8021XControlState;
	int _EAP8021XClientStatus;
	NSUUID* _UUID;
	NSString* _interfaceName;
	CWFScanResult* _scanResult;
	CWFNetworkProfile* _knownNetworkProfile;
	NSDate* _startedAt;
	NSDate* _endedAt;
	NSDate* _associationEndedAt;
	NSDate* _authenticationEndedAt;
	NSDate* _IPv4AssignedAt;
	NSDate* _IPv6AssignedAt;
	NSError* _error;

}

@property (nonatomic,copy) NSUUID * UUID;                                        //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                             //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy) CWFScanResult * scanResult;                           //@synthesize scanResult=_scanResult - In the implementation block
@property (nonatomic,copy) CWFNetworkProfile * knownNetworkProfile;              //@synthesize knownNetworkProfile=_knownNetworkProfile - In the implementation block
@property (assign,nonatomic) unsigned EAP8021XSupplicantState;                   //@synthesize EAP8021XSupplicantState=_EAP8021XSupplicantState - In the implementation block
@property (assign,nonatomic) unsigned EAP8021XControlMode;                       //@synthesize EAP8021XControlMode=_EAP8021XControlMode - In the implementation block
@property (assign,nonatomic) unsigned EAP8021XControlState;                      //@synthesize EAP8021XControlState=_EAP8021XControlState - In the implementation block
@property (assign,nonatomic) int EAP8021XClientStatus;                           //@synthesize EAP8021XClientStatus=_EAP8021XClientStatus - In the implementation block
@property (nonatomic,copy) NSDate * startedAt;                                   //@synthesize startedAt=_startedAt - In the implementation block
@property (nonatomic,copy) NSDate * endedAt;                                     //@synthesize endedAt=_endedAt - In the implementation block
@property (nonatomic,copy) NSDate * associationEndedAt;                          //@synthesize associationEndedAt=_associationEndedAt - In the implementation block
@property (nonatomic,copy) NSDate * authenticationEndedAt;                       //@synthesize authenticationEndedAt=_authenticationEndedAt - In the implementation block
@property (nonatomic,copy) NSDate * IPv4AssignedAt;                              //@synthesize IPv4AssignedAt=_IPv4AssignedAt - In the implementation block
@property (nonatomic,copy) NSDate * IPv6AssignedAt;                              //@synthesize IPv6AssignedAt=_IPv6AssignedAt - In the implementation block
@property (nonatomic,copy) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (assign,getter=isAutoJoin,nonatomic) BOOL autoJoin;                    //@synthesize autoJoin=_autoJoin - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setKnownNetworkProfile:(CWFNetworkProfile *)arg1 ;
-(int)EAP8021XClientStatus;
-(NSUUID *)UUID;
-(void)setEndedAt:(NSDate *)arg1 ;
-(NSDate *)endedAt;
-(id)init;
-(BOOL)isAutoJoin;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setEAP8021XControlMode:(unsigned)arg1 ;
-(void)setStartedAt:(NSDate *)arg1 ;
-(NSError *)error;
-(NSDate *)authenticationEndedAt;
-(NSString *)interfaceName;
-(BOOL)isEqualToJoinStatus:(id)arg1 ;
-(id)description;
-(void)setAssociationEndedAt:(NSDate *)arg1 ;
-(void)setEAP8021XSupplicantState:(unsigned)arg1 ;
-(void)setIPv6AssignedAt:(NSDate *)arg1 ;
-(unsigned)EAP8021XSupplicantState;
-(unsigned)EAP8021XControlMode;
-(unsigned long long)hash;
-(void)setScanResult:(CWFScanResult *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)associationEndedAt;
-(void)setAutoJoin:(BOOL)arg1 ;
-(unsigned)EAP8021XControlState;
-(CWFNetworkProfile *)knownNetworkProfile;
-(NSDate *)IPv6AssignedAt;
-(CWFScanResult *)scanResult;
-(void)setIPv4AssignedAt:(NSDate *)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSDate *)IPv4AssignedAt;
-(void)setEAP8021XControlState:(unsigned)arg1 ;
-(NSDate *)startedAt;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setAuthenticationEndedAt:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEAP8021XClientStatus:(int)arg1 ;
@end

