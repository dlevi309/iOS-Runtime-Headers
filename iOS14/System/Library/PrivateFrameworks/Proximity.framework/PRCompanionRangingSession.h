/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <Proximity/PRRangingDevice.h>
#import <libobjc.A.dylib/PRRangingClientProtocol.h>

@protocol OS_dispatch_queue, OS_os_log, PRGenericRangingSessionDelegate;
@class NSXPCConnection, NSObject, NSString;

@interface PRCompanionRangingSession : PRRangingDevice <PRRangingClientProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSObject*<OS_os_log> _logger;
	id<PRGenericRangingSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PRGenericRangingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PRGenericRangingSessionDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)connectToDaemon;
-(void)setDelegate:(id<PRGenericRangingSessionDelegate>)arg1 ;
-(id)remoteObject;
-(void)invalidate;
-(void)handleInterruption;
-(void)didFailWithError:(id)arg1 ;
-(void)handleInvalidation;
-(id)synchronousRemoteObject;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2 ;
-(void)didReceiveNewSolutions:(id)arg1 ;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1 ;
-(void)remoteDevice:(id)arg1 didChangeState:(long long)arg2 ;
-(void)configureForCompanionRanging:(id)arg1 options:(id)arg2 ;
-(BOOL)startCompanionRanging:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)stopCompanionRanging:(id)arg1 error:(id*)arg2 ;
@end

