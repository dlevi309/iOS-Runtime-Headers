/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)logIdentifier;
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(HMDeviceSetupSession *)setupSession;
-(void)_handleReceivedRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)setupSession:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)setupSession:(id)arg1 didReceiveExchangeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

