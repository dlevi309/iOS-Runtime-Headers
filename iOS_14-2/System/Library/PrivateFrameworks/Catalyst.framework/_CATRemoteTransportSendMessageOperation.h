/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(CATMessage *)arg1 ;
-(CATMessage *)message;
-(CATRemoteTransport *)transport;
-(void)setTransport:(CATRemoteTransport *)arg1 ;
-(BOOL)isAsynchronous;
-(void)main;
-(void)didFailWithError:(id)arg1 ;
-(void)didSendData;
-(void)didEncodeData:(id)arg1 ;
@end

