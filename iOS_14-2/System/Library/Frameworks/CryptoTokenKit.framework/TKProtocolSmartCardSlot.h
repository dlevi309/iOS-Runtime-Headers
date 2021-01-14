/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

