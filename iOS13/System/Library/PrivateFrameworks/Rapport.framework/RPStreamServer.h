/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_queue, RPMessageable;
@class NSObject, NSMutableDictionary;

@interface RPStreamServer : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	id _selfRef;
	NSMutableDictionary* _streamSessions;
	unsigned _streamFlags;
	/*^block*/id _invalidationHandler;
	id<RPMessageable> _messenger;
	/*^block*/id _streamAcceptHandler;
	/*^block*/id _streamPrepareHandlerEx;
	/*^block*/id _streamPrepareHandler;

}

@property (nonatomic,copy) id invalidationHandler;                     //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,retain) id<RPMessageable> messenger;              //@synthesize messenger=_messenger - In the implementation block
@property (nonatomic,copy) id streamAcceptHandler;                     //@synthesize streamAcceptHandler=_streamAcceptHandler - In the implementation block
@property (assign,nonatomic) unsigned streamFlags;                     //@synthesize streamFlags=_streamFlags - In the implementation block
@property (nonatomic,copy) id streamPrepareHandlerEx;                  //@synthesize streamPrepareHandlerEx=_streamPrepareHandlerEx - In the implementation block
@property (nonatomic,copy) id streamPrepareHandler;                    //@synthesize streamPrepareHandler=_streamPrepareHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_handleStopRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
-(unsigned)streamFlags;
-(void)setStreamFlags:(unsigned)arg1 ;
-(void)setStreamAcceptHandler:(id)arg1 ;
-(id)streamAcceptHandler;
-(id)streamPrepareHandlerEx;
-(void)setStreamPrepareHandlerEx:(id)arg1 ;
-(id)streamPrepareHandler;
-(void)setStreamPrepareHandler:(id)arg1 ;
@end

