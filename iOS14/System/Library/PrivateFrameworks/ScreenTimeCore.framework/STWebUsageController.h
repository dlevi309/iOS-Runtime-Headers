/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSXPCConnection;

@interface STWebUsageController : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(NSXPCConnection *)xpcConnection;
-(id)init;
-(void)deleteAllWebHistoryForApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteWebHistoryDuringInterval:(id)arg1 application:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteWebHistoryForURL:(id)arg1 application:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)_asynchronousProxyWithHandler:(/*^block*/id)arg1 ;
-(void)deleteWebHistoryForDomain:(id)arg1 application:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

