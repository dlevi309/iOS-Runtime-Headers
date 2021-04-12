/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol AKAnisetteServiceProtocol <NSObject>
@optional
-(void)fetchPeerAttestationDataForRequest:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)provisionAnisetteWithCompletion:(/*^block*/id)arg1;
-(void)syncAnisetteWithSIMData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)eraseAnisetteWithCompletion:(/*^block*/id)arg1;

@end

