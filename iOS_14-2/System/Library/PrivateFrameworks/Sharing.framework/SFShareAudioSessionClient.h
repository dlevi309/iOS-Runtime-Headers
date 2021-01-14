/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface SFShareAudioSessionClient : NSObject <NSSecureCoding> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_activate:(BOOL)arg1 ;
-(void)userConfirmed;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_ensureXPCStarted;
-(void)activate;
-(void)setProgressHandler:(id)arg1 ;
-(void)_interrupted;
-(void)_invalidated;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(id)progressHandler;
-(void)shareAudioProgressEvent:(int)arg1 info:(id)arg2 ;
@end

