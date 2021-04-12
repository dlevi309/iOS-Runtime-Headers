/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <ATFoundation/ATSessionProxy.h>
#import <ATFoundation/ATSessionObserver.h>

@class ATSession, NSXPCConnection, NSString;

@interface ATSessionProxyConnection : NSObject <ATSessionProxy, ATSessionObserver> {

	ATSession* _session;
	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)connect;
-(void)stop;
-(void)session:(id)arg1 didUpdateSessionTask:(id)arg2 ;
-(void)session:(id)arg1 didFinishSessionTask:(id)arg2 ;
-(void)session:(id)arg1 willBeginSessionTask:(id)arg2 ;
-(id)initWithSession:(id)arg1 connection:(id)arg2 ;
@end

