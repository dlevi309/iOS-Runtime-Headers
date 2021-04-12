/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSXPCConnection;

@interface STWebUsageController : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)_asynchronousProxyWithHandler:(/*^block*/id)arg1 ;
-(void)deleteWebHistoryForURL:(id)arg1 application:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteWebHistoryForDomain:(id)arg1 application:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteWebHistoryDuringInterval:(id)arg1 application:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteAllWebHistoryForApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

