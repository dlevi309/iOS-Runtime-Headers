/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMDeviceSetupSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/TROperationHandler.h>

@class HMDeviceSetupSession, NSString;

@interface HMDeviceSetupOperationHandler : NSObject <HMDeviceSetupSessionDelegate, HMFLogging, TROperationHandler> {

	HMDeviceSetupSession* _setupSession;

}

@property (nonatomic,readonly) HMDeviceSetupSession * setupSession;              //@synthesize setupSession=_setupSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(id)logIdentifier;
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(HMDeviceSetupSession *)setupSession;
-(void)setupSession:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)_handleReceivedRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)setupSession:(id)arg1 didReceiveExchangeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

