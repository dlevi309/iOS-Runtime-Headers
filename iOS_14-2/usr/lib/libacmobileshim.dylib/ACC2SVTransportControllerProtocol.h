/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

