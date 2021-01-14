/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSXPCConnection;

@interface RPClient : NSObject {

	NSMutableSet* _assertions;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	unsigned _type;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) unsigned type;                                           //@synthesize type=_type - In the implementation block
+(void)primaryAccountSignedIn;
+(void)primaryAccountSignedOut;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setType:(unsigned)arg1 ;
-(void)_ensureXPCStarted;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)addOrUpdateIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)diagnosticLogControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getIdentitiesWithCompletion:(/*^block*/id)arg1 ;
-(void)_interrupted;
-(void)getIdentitiesWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned)type;
-(void)_invalidated;
-(void)invalidate;
-(void)activateAssertionWithIdentifier:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)diagnosticCommand:(id)arg1 params:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)diagnosticShow:(id)arg1 level:(int)arg2 completion:(/*^block*/id)arg3 ;
-(id)invalidationHandler;
-(void)primaryAccountSignedInWithCompletion:(/*^block*/id)arg1 ;
-(id)interruptionHandler;
-(void)primaryAccountSignedOutWithCompletion:(/*^block*/id)arg1 ;
@end

