/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <ATFoundation/ATSessionServer.h>

@class NSXPCListener, NSMutableDictionary, NSString;

@interface ATSessionServerListener : NSObject <NSXPCListenerDelegate, ATSessionServer> {

	NSXPCListener* _listener;
	NSMutableDictionary* _sessionProxiesBySessionID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSessionServer;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)stop;
-(void)start;
-(void)addSession:(id)arg1 ;
-(void)removeSession:(id)arg1 ;
-(void)fetchSessionsWithTypeIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchActiveSessionCountForSessionTypeIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dumpDebugInformation;
@end

