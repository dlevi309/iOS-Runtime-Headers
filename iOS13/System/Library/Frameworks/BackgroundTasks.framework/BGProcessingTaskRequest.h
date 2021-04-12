/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_activity;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setRequiresNetworkConnectivity:(BOOL)arg1 ;
-(BOOL)requiresNetworkConnectivity;
-(void)setRequiresExternalPower:(BOOL)arg1 ;
-(BOOL)requiresExternalPower;
@end

