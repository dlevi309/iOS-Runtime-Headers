/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKPeerPaymentAccountInvitation : NSObject <NSSecureCoding> {

	NSString* _altDSID;
	long long _status;
	unsigned long long _registrationResult;
	long long _remoteRegistrationRequestLevel;

}

@property (nonatomic,copy) NSString * altDSID;                                      //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) long long status;                                      //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long registrationResult;                 //@synthesize registrationResult=_registrationResult - In the implementation block
@property (assign,nonatomic) long long remoteRegistrationRequestLevel;              //@synthesize remoteRegistrationRequestLevel=_remoteRegistrationRequestLevel - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(unsigned long long)registrationResult;
-(void)setRegistrationResult:(unsigned long long)arg1 ;
-(long long)remoteRegistrationRequestLevel;
-(void)setRemoteRegistrationRequestLevel:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
@end

