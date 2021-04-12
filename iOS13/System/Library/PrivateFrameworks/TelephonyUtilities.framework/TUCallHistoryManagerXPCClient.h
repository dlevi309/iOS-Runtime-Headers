/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUCallHistoryManagerXPCClient.h>

@protocol TUCallHistoryManagerXPCClient <NSObject>
@end

#import <libobjc.A.dylib/TUCallHistoryManagerDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface TUCallHistoryManagerXPCClient : NSObject <TUCallHistoryManagerXPCClient, TUCallHistoryManagerDataSource> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                 //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)asynchronousServer;
+(void)setAsynchronousServer:(id)arg1 ;
+(id)synchronousServer;
+(void)setSynchronousServer:(id)arg1 ;
+(id)callHistoryManagerAllowedClasses;
+(id)callHistoryManagerServerXPCInterface;
+(id)callHistoryManagerClientXPCInterface;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2 ;
-(void)handleServerDisconnect;
-(id)synchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(id)serverWithErrorHandler:(/*^block*/id)arg1 ;
@end

