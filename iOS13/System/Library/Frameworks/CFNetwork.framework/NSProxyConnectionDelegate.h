/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol NSProxyConnectionDelegate <NSObject>
@required
-(void)cleanup;
-(void)connected:(int)arg1;
-(void)outboundConnectionReceivedData:(id)arg1 handler:(/*^block*/id)arg2;
-(void)outboundConnectionCompleteWithError:(int)arg1;

@end

