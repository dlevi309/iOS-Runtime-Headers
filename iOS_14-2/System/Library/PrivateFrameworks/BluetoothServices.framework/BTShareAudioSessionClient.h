/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSXPCListenerEndpoint;

@interface BTShareAudioSessionClient : NSObject <NSSecureCoding> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	int _mode;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _progressHandler;
	NSXPCListenerEndpoint* _testListenerEndpoint;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) int mode;                                                  //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) id progressHandler;                                          //@synthesize progressHandler=_progressHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTestListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(int)mode;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_activate:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setMode:(int)arg1 ;
-(void)_ensureXPCStarted;
-(void)activate;
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(void)setProgressHandler:(id)arg1 ;
-(void)_interrupted;
-(void)_invalidated;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(id)progressHandler;
-(void)shareAudioProgressEvent:(int)arg1 info:(id)arg2 ;
-(void)userConfirmed:(BOOL)arg1 ;
@end

