/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


@class NSXPCConnection;

@interface BCSConfigurationManager : NSObject {

	NSXPCConnection* _serviceConnection;

}

@property (nonatomic,retain) NSXPCConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
-(NSXPCConnection *)serviceConnection;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(void)setUpQRCodeControlCenterModuleWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)processAppClipImageWithURL:(id)arg1 scale:(double)arg2 completion:(/*^block*/id)arg3 ;
@end

