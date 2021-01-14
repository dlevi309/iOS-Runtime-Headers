/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol HKHealthStoreProviderProxyProvider;
@class NSString;

@interface HKHealthStoreProvider : NSObject <_HKXPCExportable> {

	id<HKHealthStoreProviderProxyProvider> _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)_fetchProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(id)init;
-(id)exportedInterface;
-(id)remoteInterface;
-(id)initWithProxyProvider:(id)arg1 ;
-(void)fetchStoreForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAvailableIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)requestAuthorizationToNewStoreWithCompletion:(/*^block*/id)arg1 ;
-(void)requestAuthorizationToNewStoreToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

