/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKProxyProvider, NSString;

@interface HKAuthorizationStore : NSObject <_HKXPCExportable> {

	HKProxyProvider* _readProxyProvider;
	HKProxyProvider* _writeProxyProvider;
	HKProxyProvider* _resetProxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)writeTaskIdentifier;
+(id)resetTaskIdentifier;
+(id)readTaskIdentifier;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(void)_fetchWriteProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_fetchReadProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_fetchResetProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)fetchAuthorizationRecordsForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetAuthorizationStatusesForObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAuthorizationStatusesForSample:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSourcesRequestingAuthorizationForTypes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAuthorizationStatusesForDocumentType:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setObjectAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetAllObjectAuthorizationStatusForBundleIdentifier:(id)arg1 objectType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
@end

