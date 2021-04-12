/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@interface PKSubcredentialProvisioningConfiguration : NSObject {

	long long _configurationType;

}

@property (nonatomic,readonly) long long configurationType;              //@synthesize configurationType=_configurationType - In the implementation block
-(id)transitionTable;
-(long long)startingState;
-(long long)configurationType;
-(id)remoteDeviceConfiguration;
-(id)initWithConfigurationType:(long long)arg1 ;
-(id)acceptInvitationConfiguration;
-(id)remoteDeviceInvitation;
-(id)localDeviceConfiguration;
-(id)ownerConfiguration;
@end

