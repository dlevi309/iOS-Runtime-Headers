/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

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
-(void)dealloc;
-(BOOL)isActive;
-(id)nodeType;
-(void)addOutput:(id)arg1 ;
-(NSString *)sinkID;
-(id)initWithSinkID:(id)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(long long)liveConfigurationID;
-(void)_setupSinkNodeStateMachine;
-(void)notifyWhenActive:(/*^block*/id)arg1 ;
-(void)notifyWhenIdle:(/*^block*/id)arg1 ;
-(void)notifyWhenConfigurationID:(long long)arg1 becomesLive:(/*^block*/id)arg2 ;
-(NSString *)currentStateDebugString;
@end

