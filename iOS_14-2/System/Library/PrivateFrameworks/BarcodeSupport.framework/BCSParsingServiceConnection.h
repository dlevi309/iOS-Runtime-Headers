/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

