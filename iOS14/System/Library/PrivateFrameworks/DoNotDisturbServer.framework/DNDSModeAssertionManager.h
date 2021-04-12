/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSBackingStoreDelegate.h>
#import <libobjc.A.dylib/DNDSSysdiagnoseDataProvider.h>
#import <libobjc.A.dylib/DNDSModeAssertionQuerying.h>
#import <libobjc.A.dylib/DNDSModeAssertionUpdating.h>

@protocol DNDSBackingStore;
@class DNDSModeAssertionStore, DNDSClientDetailsProvider, NSString;

@interface DNDSModeAssertionManager : NSObject <DNDSBackingStoreDelegate, DNDSSysdiagnoseDataProvider, DNDSModeAssertionQuerying, DNDSModeAssertionUpdating> {

	id<DNDSBackingStore> _backingStore;
	DNDSModeAssertionStore* _store;
	DNDSClientDetailsProvider* _clientDetailsProvider;
	os_unfair_lock_s _storeLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sysdiagnoseDataIdentifier; 
-(id)clientDetailsForClientIdentifier:(id)arg1 ;
-(NSString *)sysdiagnoseDataIdentifier;
-(id)sysdiagnoseDataForDate:(id)arg1 ;
-(id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4 ;
-(id)modeAssertionsMatchingPredicate:(id)arg1 ;
-(void)_loadDataFromBackingStore;
-(id)updateModeAssertionsWithContextHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)initWithBackingStore:(id)arg1 clientDetailsProvider:(id)arg2 ;
-(id)modeAssertionInvalidationsMatchingPredicate:(id)arg1 ;
-(BOOL)_saveDataToBackingStoreWithError:(id*)arg1 ;
-(id)initWithBackingStoreURL:(id)arg1 clientDetailsProvider:(id)arg2 ;
-(void)dealloc;
@end

