/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <libobjc.A.dylib/CARSessionRequestService.h>

@protocol CARSessionRequestHandling;
@interface CARSessionRequestHandlerProxy : NSObject <CARSessionRequestService> {

	id<CARSessionRequestHandling> _requestHandler;

}

@property (assign,nonatomic,__weak) id<CARSessionRequestHandling> requestHandler;              //@synthesize requestHandler=_requestHandler - In the implementation block
-(id<CARSessionRequestHandling>)requestHandler;
-(void)setRequestHandler:(id<CARSessionRequestHandling>)arg1 ;
-(void)service_startSessionWithHost:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)service_cancelRequestsWithReply:(/*^block*/id)arg1 ;
-(void)service_startAdvertisingCarPlayControlForUSBWithReply:(/*^block*/id)arg1 ;
-(void)service_startAdvertisingCarPlayControlForWiFiUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)service_prepareForRemovingWiFiUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

