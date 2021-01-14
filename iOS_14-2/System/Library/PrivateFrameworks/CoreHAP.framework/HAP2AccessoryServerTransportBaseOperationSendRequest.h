/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2AccessoryServerTransportBaseOperation.h>

@class HAP2AccessoryServerTransportRequest, NSData;

@interface HAP2AccessoryServerTransportBaseOperationSendRequest : HAP2AccessoryServerTransportBaseOperation {

	HAP2AccessoryServerTransportRequest* _request;
	NSData* _response;
	/*^block*/id _clientCompletion;

}
-(void)main;
-(id)initWithTransport:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

