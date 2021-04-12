/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@interface PKSubcredentialProvisioningConfiguration : NSObject {

	long long _configurationType;

}

@property (nonatomic,readonly) long long configurationType;              //@synthesize configurationType=_configurationType - In the implementation block
-(id)remoteDeviceInvitation;
-(id)ownerConfiguration;
-(id)acceptInvitationConfiguration;
-(id)localDeviceConfiguration;
-(id)initWithConfigurationType:(long long)arg1 ;
-(id)remoteDeviceConfiguration;
-(id)transitionTable;
-(long long)startingState;
-(long long)configurationType;
@end

