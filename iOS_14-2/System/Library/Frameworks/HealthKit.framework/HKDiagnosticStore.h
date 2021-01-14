/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKDiagnosticStoreClient.h>

@class HKProxyProvider, NSString;

@interface HKDiagnosticStore : NSObject <_HKXPCExportable, HKDiagnosticStoreClient> {

	HKProxyProvider* _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)fetchDiagnosticsForKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchURLForAnalyticsFileWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

