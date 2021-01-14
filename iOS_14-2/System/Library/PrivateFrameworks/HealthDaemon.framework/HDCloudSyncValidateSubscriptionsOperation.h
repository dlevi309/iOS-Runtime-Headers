/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@interface HDCloudSyncValidateSubscriptionsOperation : HDCloudSyncOperation {

	BOOL _includeSecondaryContainers;

}

@property (assign,nonatomic) BOOL includeSecondaryContainers;              //@synthesize includeSecondaryContainers=_includeSecondaryContainers - In the implementation block
-(void)main;
-(id)_subcriptionsToValidate;
-(id)_registerOperationForSubscriptions:(id)arg1 container:(id)arg2 ;
-(BOOL)includeSecondaryContainers;
-(void)setIncludeSecondaryContainers:(BOOL)arg1 ;
@end

