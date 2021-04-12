/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CWFScanResult, CWFNetworkProfile, NSString, CWFEAPCredentials;

@interface CWFAssocParameters : NSObject <NSCopying, NSSecureCoding> {

	BOOL _rememberUponSuccessfulAssociation;
	CWFScanResult* _scanResult;
	CWFNetworkProfile* _knownNetworkProfile;
	NSString* _password;
	CWFEAPCredentials* _EAPCredentials;

}

@property (nonatomic,copy) CWFScanResult * scanResult;                            //@synthesize scanResult=_scanResult - In the implementation block
@property (nonatomic,copy) CWFNetworkProfile * knownNetworkProfile;               //@synthesize knownNetworkProfile=_knownNetworkProfile - In the implementation block
@property (nonatomic,copy) NSString * password;                                   //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) CWFEAPCredentials * EAPCredentials;                    //@synthesize EAPCredentials=_EAPCredentials - In the implementation block
@property (assign,nonatomic) BOOL rememberUponSuccessfulAssociation;              //@synthesize rememberUponSuccessfulAssociation=_rememberUponSuccessfulAssociation - In the implementation block
+(id)associationParametersFromScanRecord:(id)arg1 profile:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)setKnownNetworkProfile:(CWFNetworkProfile *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setScanResult:(CWFScanResult *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CWFNetworkProfile *)knownNetworkProfile;
-(CWFScanResult *)scanResult;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRememberUponSuccessfulAssociation:(BOOL)arg1 ;
-(CWFEAPCredentials *)EAPCredentials;
-(BOOL)rememberUponSuccessfulAssociation;
-(BOOL)isEqualToAssocParameters:(id)arg1 ;
-(void)setEAPCredentials:(CWFEAPCredentials *)arg1 ;
@end

