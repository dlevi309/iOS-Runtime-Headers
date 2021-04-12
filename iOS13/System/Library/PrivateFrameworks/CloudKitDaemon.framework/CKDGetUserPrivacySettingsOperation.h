/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>

@interface CKDGetUserPrivacySettingsOperation : CKDOperation {

	long long _discoverable;

}

@property (assign,nonatomic) long long discoverable;              //@synthesize discoverable=_discoverable - In the implementation block
-(void)main;
-(id)activityCreate;
-(void)setDiscoverable:(long long)arg1 ;
-(long long)discoverable;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)_handleRetrievedPrivacySettings:(id)arg1 ;
@end

