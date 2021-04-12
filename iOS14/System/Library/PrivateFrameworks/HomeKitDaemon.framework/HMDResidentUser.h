/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isBlocked;
-(id)deviceIdentifier;
-(id)userID;
-(void)encodeWithCoder:(id)arg1 ;
-(HMDDevice *)device;
-(id)initWithModelObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)configurationState;
-(void)setDevice:(HMDDevice *)arg1 ;
-(void)setConfigurationState:(unsigned long long)arg1 ;
-(id)displayName;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)configureWithHome:(id)arg1 ;
-(BOOL)refreshDisplayName;
-(id)initWithDevice:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 configurationState:(unsigned long long)arg4 ;
-(BOOL)requiresMakoSupport;
-(id)legacyUser;
-(BOOL)updateWithDevice:(id)arg1 ;
-(void)registerIdentity;
-(id)encodingRemoteDisplayName;
@end

