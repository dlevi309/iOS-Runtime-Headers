/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKElectrocardiogramQueryClientInterface.h>

@class HKElectrocardiogram, NSString;

@interface HKElectrocardiogramQuery : HKQuery <HKElectrocardiogramQueryClientInterface> {

	HKElectrocardiogram* _elecrocardiogram;
	unsigned long long _leadName;
	/*^block*/id _dataHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)_enumerateDataWithHandler:(/*^block*/id)arg1 ;
-(void)client_deliverData;
-(id)initWithElectrocardiogram:(id)arg1 lead:(unsigned long long)arg2 dataHandler:(/*^block*/id)arg3 ;
@end

