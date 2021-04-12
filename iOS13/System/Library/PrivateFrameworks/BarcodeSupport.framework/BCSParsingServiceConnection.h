/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


@class NSXPCConnection;

@interface BCSParsingServiceConnection : NSObject {

	NSXPCConnection* _parsingServiceConnection;

}

@property (nonatomic,retain) NSXPCConnection * parsingServiceConnection;              //@synthesize parsingServiceConnection=_parsingServiceConnection - In the implementation block
-(void)dealloc;
-(NSXPCConnection *)parsingServiceConnection;
-(void)parseQRCodeString:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)parseQRCodeMetadata:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)parseQRCodeFeature:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setParsingServiceConnection:(NSXPCConnection *)arg1 ;
@end

