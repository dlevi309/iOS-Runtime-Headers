/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
*/


@class NSXPCConnection;

@interface ACCCarPlay : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedManager;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)_init;
-(void)isCarPlayPairedWithCertSerial:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)isWirelessCarPlayAllowedForCertSerial:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)carPlayAppLinksStateForCertSerial:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)carPlayIconStateForCertSerial:(id)arg1 andAppCategories:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
-(void)carPlayStartSessionForConnectionID:(unsigned)arg1 properties:(id)arg2 ;
@end

