/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@class NSMutableDictionary, NSMutableArray;

@interface NFContainerPool : NSObject {

	BOOL _objectGraphDrainingEnabled;
	NSMutableDictionary* _singletons;
	NSMutableDictionary* _graph;
	unsigned long long _depth;
	unsigned long long _drainDepth;
	NSMutableArray* _onDrainBlocks;
	NSMutableArray* _onDrainCopyPoolObjectGraphBlocks;

}

@property (nonatomic,retain) NSMutableDictionary * singletons;                                                     //@synthesize singletons=_singletons - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * graph;                                                          //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) unsigned long long depth;                                                             //@synthesize depth=_depth - In the implementation block
@property (assign,nonatomic) unsigned long long drainDepth;                                                        //@synthesize drainDepth=_drainDepth - In the implementation block
@property (assign,getter=isObjectGraphDrainingEnabled,nonatomic) BOOL objectGraphDrainingEnabled;                  //@synthesize objectGraphDrainingEnabled=_objectGraphDrainingEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * onDrainBlocks;                                                       //@synthesize onDrainBlocks=_onDrainBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * onDrainCopyPoolObjectGraphBlocks;                                    //@synthesize onDrainCopyPoolObjectGraphBlocks=_onDrainCopyPoolObjectGraphBlocks - In the implementation block
@property (getter=isPoolPreparedForLockingGraph,nonatomic,readonly) BOOL poolPreparedForLockingGraph; 
-(id)init;
-(void)drain;
-(unsigned long long)depth;
-(NSMutableDictionary *)graph;
-(void)setGraph:(NSMutableDictionary *)arg1 ;
-(void)setDepth:(unsigned long long)arg1 ;
-(BOOL)isPoolPreparedForLockingGraph;
-(void)onDrainCopyPoolObjectGraph:(/*^block*/id)arg1 ;
-(id)copyWithObjectGraphDrainingDisabled;
-(void)linkDepth:(/*^block*/id)arg1 ;
-(void)onDrain:(/*^block*/id)arg1 ;
-(id)enter:(/*^block*/id)arg1 ;
-(unsigned long long)drainDepth;
-(void)setDrainDepth:(unsigned long long)arg1 ;
-(NSMutableArray *)onDrainBlocks;
-(void)setOnDrainBlocks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)onDrainCopyPoolObjectGraphBlocks;
-(void)setOnDrainCopyPoolObjectGraphBlocks:(NSMutableArray *)arg1 ;
-(BOOL)isObjectGraphDrainingEnabled;
-(NSMutableDictionary *)singletons;
-(void)setSingletons:(NSMutableDictionary *)arg1 ;
-(void)setObjectGraphDrainingEnabled:(BOOL)arg1 ;
@end

