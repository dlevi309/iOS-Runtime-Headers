/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class FigStateMachine, NSMutableArray, NSString;

@interface BWSinkNode : BWNode {

	FigStateMachine* _stateMachine;
	os_unfair_lock_s _stateLock;
	NSMutableArray* _handlersToCallWhenIdle;
	NSMutableArray* _handlersToCallWhenActive;
	NSString* _sinkID;
	OpaqueFigSimpleMutexRef _configurationHandlerLock;
	long long _liveConfigurationID;
	NSMutableArray* _configurationLiveHandlers;
	NSMutableArray* _configurationLiveIDs;

}

@property (nonatomic,copy,readonly) NSString * sinkID;                //@synthesize sinkID=_sinkID - In the implementation block
@property (readonly) NSString * currentStateDebugString; 
@property (readonly) BOOL isActive; 
@property (readonly) long long liveConfigurationID; 
+(void)initialize;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(long long)liveConfigurationID;
-(NSString *)sinkID;
-(BOOL)isActive;
-(void)addOutput:(id)arg1 ;
-(id)initWithSinkID:(id)arg1 ;
-(void)_setupSinkNodeStateMachine;
-(void)notifyWhenActive:(/*^block*/id)arg1 ;
-(void)notifyWhenIdle:(/*^block*/id)arg1 ;
-(void)notifyWhenConfigurationID:(long long)arg1 becomesLive:(/*^block*/id)arg2 ;
-(NSString *)currentStateDebugString;
-(void)dealloc;
@end

