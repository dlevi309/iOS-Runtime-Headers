/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
*/


@class NSXPCConnection;

@interface ACCAppLinksIconInfo : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)_init;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)getIconDataForBundleID:(id)arg1 forIconSize:(double)arg2 withReply:(/*^block*/id)arg3 ;
@end

