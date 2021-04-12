/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <ATFoundation/ATMessageLinkObserver.h>
#import <ATFoundation/ATMessageLinkRequestHandler.h>

@class NSString;

@interface ATProvisioningHandler : NSObject <ATMessageLinkObserver, ATMessageLinkRequestHandler> {

	int _endpointType;
	NSString* _expectedRequestCommand;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(id)initAsEndpointType:(int)arg1 ;
-(void)_processProvisioningRequest:(id)arg1 withParams:(id)arg2 onMessageLink:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_processProvisioningResponse:(id)arg1 withParams:(id)arg2 onMessageLink:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)_paramsForRequest:(id)arg1 ;
-(void)_sendProvisioningRequest:(id)arg1 OnMessageLink:(id)arg2 ;
-(void)_processProvisioningResponse:(id)arg1 toCommand:(id)arg2 onMessageLink:(id)arg3 ;
@end

