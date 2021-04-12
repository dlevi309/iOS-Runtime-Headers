/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATOperation.h>

@class CATRemoteTransport, CATMessage;

@interface _CATRemoteTransportSendMessageOperation : CATOperation {

	CATRemoteTransport* _transport;
	CATMessage* _message;

}

@property (assign,nonatomic,__weak) CATRemoteTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) CATMessage * message;                               //@synthesize message=_message - In the implementation block
-(void)main;
-(BOOL)isAsynchronous;
-(CATMessage *)message;
-(void)setMessage:(CATMessage *)arg1 ;
-(CATRemoteTransport *)transport;
-(void)setTransport:(CATRemoteTransport *)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(void)didSendData;
-(void)didEncodeData:(id)arg1 ;
@end

