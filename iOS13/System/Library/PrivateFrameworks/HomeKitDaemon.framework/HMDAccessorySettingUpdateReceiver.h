/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAccessorySettingUpdateBase.h>

@class NSNumber;

@interface HMDAccessorySettingUpdateReceiver : HMDAccessorySettingUpdateBase {

	NSNumber* _configurationVersion;

}

@property (nonatomic,readonly) NSNumber * configurationVersion;              //@synthesize configurationVersion=_configurationVersion - In the implementation block
+(id)logCategory;
-(id)description;
-(void)update;
-(NSNumber *)configurationVersion;
-(void)updateWithAdditionalModel:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 setting:(id)arg2 clientQueue:(id)arg3 delegate:(id)arg4 message:(id)arg5 configurationVersion:(id)arg6 outError:(id*)arg7 ;
@end

