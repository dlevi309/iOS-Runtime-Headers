/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/


@protocol SRAuthorizationStoreDelegate <NSObject>
@optional
-(void)authorizationStore:(id)arg1 didDetermineInitialAuthorizationValues:(id)arg2;
-(void)authorizationStore:(id)arg1 grantedAuthorizations:(id)arg2 forBundleId:(id)arg3;
-(void)authorizationStore:(id)arg1 revokedAuthorizations:(id)arg2 forBundleId:(id)arg3;
-(void)authorizationStore:(id)arg1 resetAuthorizations:(id)arg2 forBundleId:(id)arg3;

@end

