/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>

@interface CKDGetUserPrivacySettingsOperation : CKDOperation {

	long long _discoverable;

}

@property (assign,nonatomic) long long discoverable;              //@synthesize discoverable=_discoverable - In the implementation block
-(int)operationType;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(long long)discoverable;
-(void)main;
-(void)setDiscoverable:(long long)arg1 ;
-(void)_handleRetrievedPrivacySettings:(id)arg1 ;
@end

