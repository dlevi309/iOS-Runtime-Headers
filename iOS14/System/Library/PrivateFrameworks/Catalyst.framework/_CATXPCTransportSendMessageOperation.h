/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATOperation.h>

@class CATXPCTransport, CATMessage;

@interface _CATXPCTransportSendMessageOperation : CATOperation {

	CATXPCTransport* _transport;
	CATMessage* _message;

}

@property (assign,nonatomic,__weak) CATXPCTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) CATMessage * message;                            //@synthesize message=_message - In the implementation block
-(void)setMessage:(CATMessage *)arg1 ;
-(CATMessage *)message;
-(CATXPCTransport *)transport;
-(void)setTransport:(CATXPCTransport *)arg1 ;
-(BOOL)isAsynchronous;
-(void)main;
-(void)didProcessMessage;
-(void)didFailWithError:(id)arg1 ;
@end

