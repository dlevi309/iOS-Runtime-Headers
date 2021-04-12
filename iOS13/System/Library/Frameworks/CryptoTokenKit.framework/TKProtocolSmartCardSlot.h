/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@protocol TKProtocolSmartCardSlot <TKProtocolSlot>
@required
-(void)reserveProtocols:(id)arg1 reservationId:(id)arg2 exclusive:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)sessionWithParameters:(id)arg1 reply:(/*^block*/id)arg2;
-(void)sendControl:(id)arg1 data:(id)arg2 expectedLength:(unsigned)arg3 reply:(/*^block*/id)arg4;
-(void)getAttrib:(unsigned)arg1 reply:(/*^block*/id)arg2;
-(void)setAttrib:(unsigned)arg1 data:(id)arg2 reply:(/*^block*/id)arg3;
-(void)runUserInteraction:(id)arg1 reply:(/*^block*/id)arg2;

@end

