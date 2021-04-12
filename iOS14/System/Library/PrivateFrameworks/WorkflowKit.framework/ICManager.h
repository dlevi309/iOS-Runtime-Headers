/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFApplicationStateObserver.h>

@class ICScheme, NSMutableArray, NSLock;

@interface ICManager : NSObject <WFApplicationStateObserver> {

	BOOL _allowsOpeningFromBackground;
	BOOL _enteringForeground;
	BOOL _resignedActiveWhileOpeningURL;
	ICScheme* _callbackScheme;
	NSMutableArray* _queuedRequests;
	NSLock* _queueLock;

}

@property (nonatomic,retain) NSMutableArray * queuedRequests;                 //@synthesize queuedRequests=_queuedRequests - In the implementation block
@property (nonatomic,retain) NSLock * queueLock;                              //@synthesize queueLock=_queueLock - In the implementation block
@property (assign,nonatomic) BOOL enteringForeground;                         //@synthesize enteringForeground=_enteringForeground - In the implementation block
@property (assign,nonatomic) BOOL resignedActiveWhileOpeningURL;              //@synthesize resignedActiveWhileOpeningURL=_resignedActiveWhileOpeningURL - In the implementation block
@property (nonatomic,retain) ICScheme * callbackScheme;                       //@synthesize callbackScheme=_callbackScheme - In the implementation block
@property (assign,nonatomic) BOOL allowsOpeningFromBackground;                //@synthesize allowsOpeningFromBackground=_allowsOpeningFromBackground - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)performRequest:(id)arg1 ;
-(BOOL)enteringForeground;
-(void)dealloc;
-(void)_performRequest:(id)arg1 ;
-(ICScheme *)callbackScheme;
-(void)setCallbackScheme:(ICScheme *)arg1 ;
-(void)setEnteringForeground:(BOOL)arg1 ;
-(NSMutableArray *)queuedRequests;
-(void)setQueuedRequests:(NSMutableArray *)arg1 ;
-(NSLock *)queueLock;
-(void)setQueueLock:(NSLock *)arg1 ;
-(void)queueRequest:(id)arg1 ;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)registerHandler:(/*^block*/id)arg1 forIncomingRequestsWithAction:(id)arg2 scheme:(id)arg3 ;
-(void)removeHandlerForIncomingRequestsWithAction:(id)arg1 scheme:(id)arg2 ;
-(BOOL)handleOpenURL:(id)arg1 fromSourceApplication:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(BOOL)handleIncomingRequest:(id)arg1 ;
-(void)registerHandler:(/*^block*/id)arg1 forIncomingRequestsWithAction:(id)arg2 legacyAction:(id)arg3 scheme:(id)arg4 ;
-(id)popQueuedRequest;
-(void)performQueuedRequestIfApplicable;
-(BOOL)allowsOpeningFromBackground;
-(void)setAllowsOpeningFromBackground:(BOOL)arg1 ;
-(BOOL)resignedActiveWhileOpeningURL;
-(void)setResignedActiveWhileOpeningURL:(BOOL)arg1 ;
@end

