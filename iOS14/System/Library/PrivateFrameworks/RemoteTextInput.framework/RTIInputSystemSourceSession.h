/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
*/

#import <RemoteTextInput/RTIInputSystemSession.h>
#import <libobjc.A.dylib/RTIInputSystemPayloadDelegate.h>

@protocol RTIInputSystemPayloadDelegate;
@class RTIDataPayload, NSString;

@interface RTIInputSystemSourceSession : RTIInputSystemSession <RTIInputSystemPayloadDelegate> {

	id<RTIInputSystemPayloadDelegate> _forwardingPayloadDelegate;
	id<RTIInputSystemPayloadDelegate> _payloadDelegate;

}

@property (assign,nonatomic,__weak) id<RTIInputSystemPayloadDelegate> payloadDelegate;                        //@synthesize payloadDelegate=_payloadDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<RTIInputSystemPayloadDelegate> forwardingPayloadDelegate;              //@synthesize forwardingPayloadDelegate=_forwardingPayloadDelegate - In the implementation block
@property (nonatomic,copy,readonly) RTIDataPayload * currentForwardingDataPayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleTextActionPayload:(id)arg1 ;
-(void)setSessionDelegate:(id)arg1 ;
-(void)flushOperations;
-(void)handleForwardingResponseActionPayload:(id)arg1 ;
-(id<RTIInputSystemPayloadDelegate>)payloadDelegate;
-(void)setForwardingPayloadDelegate:(id<RTIInputSystemPayloadDelegate>)arg1 ;
-(id<RTIInputSystemPayloadDelegate>)forwardingPayloadDelegate;
-(void)addSessionDelegate:(id)arg1 ;
-(RTIDataPayload *)currentForwardingDataPayload;
-(void)setPayloadDelegate:(id<RTIInputSystemPayloadDelegate>)arg1 ;
@end

