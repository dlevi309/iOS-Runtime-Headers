/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, NSString;

@interface HKHealthRecordsAccountInfoStore : NSObject <_HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(id)init;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)determineMedicalRecordsAccountInfoStatusWithCompletion:(/*^block*/id)arg1 ;
@end

