/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setScanResult:(CWFScanResult *)arg1 ;
-(void)setKnownNetworkProfile:(CWFNetworkProfile *)arg1 ;
-(CWFScanResult *)scanResult;
-(CWFNetworkProfile *)knownNetworkProfile;
-(CWFEAPCredentials *)EAPCredentials;
-(BOOL)rememberUponSuccessfulAssociation;
-(BOOL)isEqualToAssocParameters:(id)arg1 ;
-(void)setEAPCredentials:(CWFEAPCredentials *)arg1 ;
-(void)setRememberUponSuccessfulAssociation:(BOOL)arg1 ;
@end

