/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CUTDSXPCDaemonInterface.h>

@protocol OS_dispatch_queue;
@class CUTDSProvider, CUTDSSeeker, CUTDSSession, CUTDSDaemon, NSObject, NSXPCConnection;

@interface CUTDSXPCConnection : NSObject <CUTDSXPCDaemonInterface> {

	CUTDSProvider* _activatedProvider;
	CUTDSSeeker* _activatedSeeker;
	CUTDSSession* _activatedSession;
	LogCategory* _ucat;
	BOOL _entitled;
	CUTDSDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCConnection* _xpcCnx;

}

@property (nonatomic,readonly) CUTDSDaemon * daemon;                                  //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,readonly) BOOL entitled;                                         //@synthesize entitled=_entitled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcCnx;                              //@synthesize xpcCnx=_xpcCnx - In the implementation block
-(void)connectionInvalidated;
-(CUTDSDaemon *)daemon;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSXPCConnection *)xpcCnx;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(BOOL)entitled;
-(void)xpcTDSProviderActivate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcTDSSeekerActivate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcTDSSessionActivate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2 ;
-(BOOL)_entitledAndReturnError:(id*)arg1 ;
@end

