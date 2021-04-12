/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol NSProxyConnectionDelegate <NSObject>
@required
-(void)connected:(int)arg1;
-(void)outboundConnectionReceivedData:(id)arg1 handler:(/*^block*/id)arg2;
-(void)outboundConnectionCompleteWithError:(int)arg1;
-(void)cleanup;

@end

