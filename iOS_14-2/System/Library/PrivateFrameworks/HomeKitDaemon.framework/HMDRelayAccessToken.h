/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)userIdentifier;
-(HMDRelayAccessTokenModel *)model;
-(NSData *)accessToken;
-(id)init;
-(void)setUserIdentifier:(NSUUID *)arg1 ;
-(void)setUser:(HMDUser *)arg1 ;
-(id)dumpState;
-(void)encodeWithCoder:(id)arg1 ;
-(HMDHAPAccessory *)accessory;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(HMDUser *)user;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSUUID *)accessoryIdentifier;
-(BOOL)isEqual:(id)arg1 ;
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

