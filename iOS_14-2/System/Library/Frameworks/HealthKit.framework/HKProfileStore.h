/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKProfileStoreClient.h>

@protocol HKProfileStoreObserver;
@class HKProxyProvider, HKObserverSet, NSString;

@interface HKProfileStore : NSObject <_HKXPCExportable, HKProfileStoreClient> {

	HKProxyProvider* _proxyProvider;
	HKObserverSet*<HKProfileStoreObserver> _observers;
	BOOL _startedObserving;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)_fetchProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(void)_getSynchronousProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)deleteProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchDisplayName:(/*^block*/id)arg1 ;
-(void)fetchDisplayImageData:(/*^block*/id)arg1 ;
-(void)dispatchProfileListDidUpdate;
-(void)startObservingOnlyIfSuccessful:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)client_remoteDidUpdateProfileList;
-(void)fetchAllProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchProfileIdentifierForNRDeviceUUID:(id)arg1 ownerAppleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDisplayFirstName:(id)arg1 lastName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDisplayImageData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(id)synchronouslyFetchFirstName;
-(void)fetchProfileIdentifierForNRDeviceUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

