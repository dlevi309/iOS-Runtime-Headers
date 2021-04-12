/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDHAPAccessory, HMDUser, NSData, NSDate;

@interface HMDRelayConsentToken : HMFObject <NSSecureCoding> {

	NSUUID* _accessoryIdentifier;
	NSUUID* _userIdentifier;
	NSUUID* _identifier;
	HMDHAPAccessory* _accessory;
	HMDUser* _user;
	NSData* _consentToken;
	NSDate* _expirationDate;

}

@property (assign,nonatomic,__weak) HMDHAPAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic,__weak) HMDUser * user;                           //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSUUID * accessoryIdentifier;                  //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * userIdentifier;                         //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * consentToken;                    //@synthesize consentToken=_consentToken - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                       //@synthesize expirationDate=_expirationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)userIdentifier;
-(id)init;
-(void)setUserIdentifier:(NSUUID *)arg1 ;
-(void)setUser:(HMDUser *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HMDHAPAccessory *)accessory;
-(NSDate *)expirationDate;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(HMDUser *)user;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSUUID *)accessoryIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)configureWithHome:(id)arg1 ;
-(id)initWithConsentToken:(id)arg1 expiration:(id)arg2 accessory:(id)arg3 user:(id)arg4 ;
-(NSData *)consentToken;
@end

