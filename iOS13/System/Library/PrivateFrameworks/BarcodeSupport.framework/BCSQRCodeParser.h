/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


#import <BarcodeSupport/BarcodeSupport-Structs.h>
@class BCSParsingServiceConnection, BCSNotificationServiceConnection;

@interface BCSQRCodeParser : NSObject {

	BCSParsingServiceConnection* _parsingServiceConnection;
	BCSNotificationServiceConnection* _notificationServiceConnection;

}

@property (nonatomic,readonly) BCSNotificationServiceConnection * notificationServiceConnection; 
-(void)parseCodeFromImage:(CGImageRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopQRCodeParsingSession;
-(void)startQRCodeParsingSessionWithMetadataObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_parseMetadataObject:(id)arg1 reply:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_qrCodeFeatureFromImage:(CGImageRef)arg1 ;
-(BCSNotificationServiceConnection *)notificationServiceConnection;
-(void)parseCodeFromMetadataMachineReadableCodeObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)parseCodeFromString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)postNotificationAfterParsingCodeFromImage:(CGImageRef)arg1 completion:(/*^block*/id)arg2 ;
@end

