/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@protocol ACC2SVTransportControllerProtocol <NSObject>
@optional
-(void)getImageWithURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelImageFetching;
-(void)verifyRecoveryKeyWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)validateServiceTicketWithContext:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)generateAndSendSecCodeWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)verifySecureCodeWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)loadTrustedDevicesWithContext:(id)arg1 completion:(/*^block*/id)arg2;

@end

