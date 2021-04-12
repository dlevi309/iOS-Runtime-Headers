/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
*/


@protocol OS_dispatch_queue, OS_nw_path, OS_nw_path_evaluator, OS_dispatch_source;
@class NSObject, NSUUID;

@interface NRPreferWiFi : NSObject {

	BOOL _needsReassert;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_nw_path> _path;
	NSObject*<OS_nw_path_evaluator> _evaluator;
	unsigned long long _assertCount;
	NSUUID* _agentUUID;
	NSObject*<OS_dispatch_source> _timer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path> path;                             //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path_evaluator> evaluator;              //@synthesize evaluator=_evaluator - In the implementation block
@property (assign,nonatomic) unsigned long long assertCount;                         //@synthesize assertCount=_assertCount - In the implementation block
@property (nonatomic,retain) NSUUID * agentUUID;                                     //@synthesize agentUUID=_agentUUID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                    //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) BOOL needsReassert;                                     //@synthesize needsReassert=_needsReassert - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_nw_path>)path;
-(void)setPath:(NSObject*<OS_nw_path>)arg1 ;
-(void)reset;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_nw_path_evaluator>)evaluator;
-(void)setEvaluator:(NSObject*<OS_nw_path_evaluator>)arg1 ;
-(NSUUID *)agentUUID;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(void)submitRequest:(BOOL)arg1 ;
-(void)setAssertCount:(unsigned long long)arg1 ;
-(BOOL)hasPreferWiFi;
-(void)resetInner;
-(void)updateAgentUUID:(id)arg1 ;
-(unsigned long long)assertCount;
-(BOOL)needsReassert;
-(void)setNeedsReassert:(BOOL)arg1 ;
@end

