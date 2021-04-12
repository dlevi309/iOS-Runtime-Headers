/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/BackgroundTasks.framework/BackgroundTasks
*/

#import <BackgroundTasks/BackgroundTasks-Structs.h>
#import <BackgroundTasks/BGTaskRequest.h>

@interface BGProcessingTaskRequest : BGTaskRequest {

	BOOL _requiresNetworkConnectivity;
	BOOL _requiresExternalPower;

}

@property (assign) BOOL requiresNetworkConnectivity;              //@synthesize requiresNetworkConnectivity=_requiresNetworkConnectivity - In the implementation block
@property (assign) BOOL requiresExternalPower;                    //@synthesize requiresExternalPower=_requiresExternalPower - In the implementation block
+(Class)_correspondingTaskClass;
+(id)_requestFromActivity:(id)arg1 ;
-(BOOL)requiresNetworkConnectivity;
-(id)_activity;
-(id)description;
-(void)setRequiresExternalPower:(BOOL)arg1 ;
-(BOOL)requiresExternalPower;
-(unsigned long long)hash;
-(void)setRequiresNetworkConnectivity:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

