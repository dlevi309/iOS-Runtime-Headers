/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class HDCloudSyncStore, HDCloudSyncTarget;

@interface HDCloudSyncPreparePushZoneForStoreOperation : HDCloudSyncOperation {

	HDCloudSyncStore* _store;
	HDCloudSyncTarget* _pushTarget;

}

@property (nonatomic,readonly) HDCloudSyncTarget * pushTarget;              //@synthesize pushTarget=_pushTarget - In the implementation block
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 store:(id)arg3 ;
-(HDCloudSyncTarget *)pushTarget;
-(void)_finishWithZone:(id)arg1 ;
-(void)_createZoneWithIdentifier:(id)arg1 ;
@end

