/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKElectrocardiogramSessionClientInterface.h>

@protocol HKElectrocardiogramSessionDelegate;
@class HKHealthStore, HKTaskServerProxyProvider, HKElectrocardiogramSessionConfiguration, NSString;

@interface HKElectrocardiogramSession : NSObject <_HKXPCExportable, HKElectrocardiogramSessionClientInterface> {

	HKHealthStore* _healthStore;
	HKTaskServerProxyProvider* _proxyProvider;
	HKElectrocardiogramSessionConfiguration* _sessionConfiguration;
	id<HKElectrocardiogramSessionDelegate> _delegate;

}

@property (nonatomic,copy,readonly) HKElectrocardiogramSessionConfiguration * sessionConfiguration;              //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<HKElectrocardiogramSessionDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
+(BOOL)isElectrocardiogramSessionAvailable;
-(id)init;
-(id<HKElectrocardiogramSessionDelegate>)delegate;
-(void)setDelegate:(id<HKElectrocardiogramSessionDelegate>)arg1 ;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(HKElectrocardiogramSessionConfiguration *)sessionConfiguration;
-(/*^block*/id)_successCompletionBlockOnClientQueue:(/*^block*/id)arg1 ;
-(void)clientRemote_didDetectContactAtDate:(id)arg1 ;
-(void)clientRemote_didEndWithReason:(long long)arg1 error:(id)arg2 ;
-(void)clientRemote_didDetectEmergencyCallbackModeWithEndDate:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 configuration:(id)arg2 ;
-(void)abortWithCompletion:(/*^block*/id)arg1 ;
@end

