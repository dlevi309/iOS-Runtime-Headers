/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol AKAnisetteServiceProtocol;
@class NSXPCConnection, NSLock, NSXPCListenerEndpoint, AKDevice;

@interface AKAnisetteProvisioningController : NSObject {

	NSXPCConnection* _anisetteServiceConnection;
	NSLock* _connectionLock;
	NSXPCListenerEndpoint* _daemonXPCEndpoint;
	AKDevice* _targetDevice;
	id<AKAnisetteServiceProtocol> _anisetteDataProvider;

}

@property (nonatomic,retain) AKDevice * targetDevice;                                         //@synthesize targetDevice=_targetDevice - In the implementation block
@property (nonatomic,retain) id<AKAnisetteServiceProtocol> anisetteDataProvider;              //@synthesize anisetteDataProvider=_anisetteDataProvider - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setTargetDevice:(AKDevice *)arg1 ;
-(void)setAnisetteDataProvider:(id<AKAnisetteServiceProtocol>)arg1 ;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(id<AKAnisetteServiceProtocol>)anisetteDataProvider;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)anisetteDataForURLRequest:(id)arg1 error:(id*)arg2 ;
-(void)anisetteDataWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAttestationForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initForDevice:(id)arg1 provider:(id)arg2 ;
-(id)anisetteDataWithError:(id*)arg1 ;
-(void)anisetteDataForURLRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)syncWithSIMData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)provisionWithCompletion:(/*^block*/id)arg1 ;
-(void)eraseWithCompletion:(/*^block*/id)arg1 ;
-(id)_anisetteServiceConnection;
-(id)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 error:(id*)arg2 ;
-(AKDevice *)targetDevice;
@end

