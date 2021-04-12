/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<RTIInputSystemPayloadDelegate>)payloadDelegate;
-(void)setSessionDelegate:(id)arg1 ;
-(void)flushOperations;
-(void)setPayloadDelegate:(id<RTIInputSystemPayloadDelegate>)arg1 ;
-(void)handleTextActionPayload:(id)arg1 ;
-(void)addSessionDelegate:(id)arg1 ;
-(id<RTIInputSystemPayloadDelegate>)forwardingPayloadDelegate;
-(RTIDataPayload *)currentForwardingDataPayload;
-(void)handleForwardingResponseActionPayload:(id)arg1 ;
-(void)setForwardingPayloadDelegate:(id<RTIInputSystemPayloadDelegate>)arg1 ;
@end

