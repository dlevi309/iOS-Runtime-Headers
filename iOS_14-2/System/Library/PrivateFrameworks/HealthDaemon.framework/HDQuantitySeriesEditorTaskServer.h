/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKQuantitySeriesSampleEditorTaskServerInterface.h>

@class HKQuantitySample;

@interface HDQuantitySeriesEditorTaskServer : HDStandardTaskServer <HKQuantitySeriesSampleEditorTaskServerInterface> {

	HKQuantitySample* _quantitySample;

}
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
-(id)exportedInterface;
-(id)remoteInterface;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)remote_commitRemovedDatums:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

