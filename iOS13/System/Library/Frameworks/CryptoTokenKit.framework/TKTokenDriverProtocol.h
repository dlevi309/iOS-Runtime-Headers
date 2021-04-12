/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@protocol TKTokenDriverProtocol <NSObject>
@required
-(void)acquireTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)configureWithReply:(/*^block*/id)arg1;
-(void)releaseTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2;

@end

