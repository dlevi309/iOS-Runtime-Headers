/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface STDynamicActivityAttributionPublisher : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSXPCConnection* _serverXPCConnection;
	NSString* _cachedLocalizedPlistKey;
	NSString* _cachedAppBundleID;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverXPCConnection;                     //@synthesize serverXPCConnection=_serverXPCConnection - In the implementation block
@property (nonatomic,retain) NSString * cachedLocalizedPlistKey;                        //@synthesize cachedLocalizedPlistKey=_cachedLocalizedPlistKey - In the implementation block
@property (nonatomic,retain) NSString * cachedAppBundleID;                              //@synthesize cachedAppBundleID=_cachedAppBundleID - In the implementation block
+(id)sharedInstance;
+(void)setCurrentAttributionKey:(id)arg1 andApp:(id)arg2 ;
-(NSXPCConnection *)serverXPCConnection;
-(id)init;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)_tearDownXPCConnection;
-(void)setServerXPCConnection:(NSXPCConnection *)arg1 ;
-(void)_internalQueue_setupXPCConnectionIfNecessary;
-(void)setCurrentAttributionKey:(id)arg1 application:(id)arg2 ;
-(void)setCachedLocalizedPlistKey:(NSString *)arg1 ;
-(void)setCachedAppBundleID:(NSString *)arg1 ;
-(void)_internalQueue_sendAttributionKey:(id)arg1 andApp:(id)arg2 ;
-(void)_resendAttributionData;
-(NSString *)cachedLocalizedPlistKey;
-(NSString *)cachedAppBundleID;
@end

