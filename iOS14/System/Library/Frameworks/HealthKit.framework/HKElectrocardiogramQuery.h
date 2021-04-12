/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKElectrocardiogramQueryClientInterface.h>

@class HKElectrocardiogram, NSString;

@interface HKElectrocardiogramQuery : HKQuery <HKElectrocardiogramQueryClientInterface> {

	HKElectrocardiogram* _elecrocardiogram;
	long long _lead;
	/*^block*/id _dataHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(id)initWithElectrocardiogram:(id)arg1 dataHandler:(/*^block*/id)arg2 ;
-(void)_enumerateDataWithHandler:(/*^block*/id)arg1 ;
-(void)client_deliverData;
-(id)initWithElectrocardiogram:(id)arg1 lead:(long long)arg2 dataHandler:(/*^block*/id)arg3 ;
@end

