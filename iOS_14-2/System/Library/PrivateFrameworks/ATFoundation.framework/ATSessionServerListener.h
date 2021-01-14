/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)fetchActiveSessionCountForSessionTypeIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)start;
-(void)fetchSessionsWithTypeIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addSession:(id)arg1 ;
-(void)stop;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)removeSession:(id)arg1 ;
-(void)_dumpDebugInformation;
@end

