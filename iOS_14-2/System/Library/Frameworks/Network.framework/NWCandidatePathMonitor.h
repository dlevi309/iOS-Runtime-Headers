/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@protocol OS_nw_path_evaluator, OS_dispatch_queue;
#import <Network/Network-Structs.h>
@class NSObject, NSArray, NSMutableDictionary, NWParameters;

@interface NWCandidatePathMonitor : NSObject {

	os_unfair_lock_s lock;
	NSObject*<OS_nw_path_evaluator> _primaryEvaluator;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _remoteEndpoints;
	NSMutableDictionary* _candidatePathEvaluators;
	/*^block*/id _updateHandler;

}

@property (nonatomic,retain) NSObject*<OS_nw_path_evaluator> primaryEvaluator;              //@synthesize primaryEvaluator=_primaryEvaluator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSArray * remoteEndpoints;                                     //@synthesize remoteEndpoints=_remoteEndpoints - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * candidatePathEvaluators;                 //@synthesize candidatePathEvaluators=_candidatePathEvaluators - In the implementation block
@property (nonatomic,copy) id updateHandler;                                                //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,readonly) NWParameters * parameters; 
@property (nonatomic,readonly) NSArray * interfaces; 
@property (nonatomic,readonly) NSArray * candidatePaths; 
-(NWParameters *)parameters;
-(id)init;
-(NSArray *)interfaces;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(NSObject*<OS_nw_path_evaluator>)primaryEvaluator;
-(id)cParameters;
-(void)cancelCandidatePathEvaluators;
-(void)resetCandidatePathEvaluators;
-(void)startWithQueue:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)cancelWithHandler:(/*^block*/id)arg1 ;
-(id)interfacesLocked;
-(NSArray *)candidatePaths;
-(void)updateRemoteEndpoints:(id)arg1 ;
-(NSArray *)remoteEndpoints;
-(void)setRemoteEndpoints:(NSArray *)arg1 ;
-(NSMutableDictionary *)candidatePathEvaluators;
-(void)setCandidatePathEvaluators:(NSMutableDictionary *)arg1 ;
-(void)setPrimaryEvaluator:(NSObject*<OS_nw_path_evaluator>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(void)dealloc;
@end

