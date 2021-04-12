/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
*/


@class NSXPCConnection;

@interface ACCCarPlay : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedManager;
-(id)_init;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)isCarPlayPairedWithCertSerial:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)isWirelessCarPlayAllowedForCertSerial:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)carPlayAppLinksStateForCertSerial:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)carPlayIconStateForCertSerial:(id)arg1 andAppCategories:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
@end

