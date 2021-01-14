/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TPSCondition.h>
#import <libobjc.A.dylib/TPSCloudDeviceDataSource.h>

@class NSArray, NSString;

@interface TPSCloudDevicesCondition : TPSCondition <TPSCloudDeviceDataSource> {

	NSArray* _registeredDevices;

}

@property (nonatomic,copy) NSArray * registeredDevices;              //@synthesize registeredDevices=_registeredDevices - In the implementation block
@property (nonatomic,copy) NSArray * values; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(id)_valuesFromValuesArray:(id)arg1 ;
-(id)targetingValidations;
-(void)setRegisteredDevices:(NSArray *)arg1 ;
-(NSArray *)registeredDevices;
@end

