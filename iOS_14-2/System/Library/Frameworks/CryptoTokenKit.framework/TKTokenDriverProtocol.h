/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@protocol TKTokenDriverProtocol <NSObject>
@required
-(void)acquireTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)configureWithReply:(/*^block*/id)arg1;
-(void)releaseTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(/*^block*/id)arg3;

@end

