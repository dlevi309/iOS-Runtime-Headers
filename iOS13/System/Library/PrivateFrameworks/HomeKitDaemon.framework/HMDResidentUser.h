/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDUser.h>

@class HMDDevice;

@interface HMDResidentUser : HMDUser {

	HMDDevice* _device;
	unsigned long long _configurationState;

}

@property (assign) unsigned long long configurationState;              //@synthesize configurationState=_configurationState - In the implementation block
@property (readonly) HMDDevice * device;                               //@synthesize device=_device - In the implementation block
@property (getter=isBlocked,readonly) BOOL blocked; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)userID;
-(id)displayName;
-(BOOL)isBlocked;
-(HMDDevice *)device;
-(id)deviceIdentifier;
-(void)setDevice:(HMDDevice *)arg1 ;
-(unsigned long long)configurationState;
-(id)initWithModelObject:(id)arg1 ;
-(void)setConfigurationState:(unsigned long long)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(BOOL)refreshDisplayName;
-(void)configureWithHome:(id)arg1 ;
-(id)initWithDevice:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 configurationState:(unsigned long long)arg4 ;
-(BOOL)requiresMakoSupport;
-(id)legacyUser;
-(BOOL)updateWithDevice:(id)arg1 ;
-(void)registerIdentity;
-(id)encodingRemoteDisplayName;
@end

