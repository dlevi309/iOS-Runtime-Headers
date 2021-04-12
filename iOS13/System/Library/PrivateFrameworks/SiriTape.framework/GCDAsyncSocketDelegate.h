/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
*/


@protocol GCDAsyncSocketDelegate
@optional
-(id)newSocketQueueForConnectionFromAddress:(id)arg1 onSocket:(id)arg2;
-(void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
-(void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
-(void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
-(void)socket:(id)arg1 didReadPartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
-(void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
-(void)socket:(id)arg1 didWritePartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
-(double)socket:(id)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
-(double)socket:(id)arg1 shouldTimeoutWriteWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
-(void)socketDidCloseReadStream:(id)arg1;
-(void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
-(void)socketDidSecure:(id)arg1;
-(void)socket:(id)arg1 didReceiveTrust:(SecTrustRef)arg2 completionHandler:(/*^block*/id)arg3;

@end

