/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDHAPAccessory, HMDUser, NSData, HMDRelayAccessTokenModel, NSString;

@interface HMDRelayAccessToken : HMFObject <HMFDumpState, HMDBackingStoreObjectProtocol, NSSecureCoding> {

	NSUUID* _accessoryIdentifier;
	NSUUID* _userIdentifier;
	NSUUID* _identifier;
	HMDHAPAccessory* _accessory;
	HMDUser* _user;
	NSData* _accessToken;

}

@property (assign,nonatomic,__weak) HMDHAPAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic,__weak) HMDUser * user;                           //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSUUID * accessoryIdentifier;                  //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * userIdentifier;                         //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (copy,readonly) HMDRelayAccessTokenModel * model; 
@property (nonatomic,readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * accessToken;                     //@synthesize accessToken=_accessToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(HMDRelayAccessTokenModel *)model;
-(HMDHAPAccessory *)accessory;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(NSData *)accessToken;
-(id)dumpState;
-(NSUUID *)accessoryIdentifier;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)configureWithHome:(id)arg1 ;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(id)initWithAccessToken:(id)arg1 consentToken:(id)arg2 ;
-(void)migrateCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithUser:(id)arg1 model:(id)arg2 ;
-(void)fixupUserIdentifier;
-(id)deleteTokenInAccessoryModel;
@end

