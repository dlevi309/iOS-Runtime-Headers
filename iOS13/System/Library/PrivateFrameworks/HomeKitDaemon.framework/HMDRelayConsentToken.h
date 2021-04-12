/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(HMDUser *)user;
-(void)setUserIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)userIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setUser:(HMDUser *)arg1 ;
-(NSDate *)expirationDate;
-(HMDHAPAccessory *)accessory;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(NSUUID *)accessoryIdentifier;
-(void)configureWithHome:(id)arg1 ;
-(id)initWithConsentToken:(id)arg1 expiration:(id)arg2 accessory:(id)arg3 user:(id)arg4 ;
-(NSData *)consentToken;
@end

