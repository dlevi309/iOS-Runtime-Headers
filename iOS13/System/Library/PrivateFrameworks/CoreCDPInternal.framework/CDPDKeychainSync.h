/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@protocol CDPDCircleProxy;
@interface CDPDKeychainSync : NSObject {

	id<CDPDCircleProxy> _circleProxy;

}
+(id)keyChainSync;
+(id)keyChainSyncWithProxy:(id)arg1 ;
+(id)_defaultUserVisibleViewSet;
-(BOOL)isUserVisibleKeychainSyncEnabled;
-(void)setUserVisibleKeychainSyncEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeNonViewAwarePeersFromCircleWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)synchronizeKeychainViewSetWithOtherPeers:(id*)arg1 ;
-(BOOL)matchKeychainViewState:(BOOL)arg1 ;
-(BOOL)_isThisDeviceInCircle;
-(BOOL)_setKeychainSyncState:(BOOL)arg1 ;
-(void)_preflightCircleStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_processAuthFailure:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

