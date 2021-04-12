/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@class NSMutableDictionary, NSMutableArray;

@interface NFContainerPool : NSObject {

	BOOL _objectGraphDrainingEnabled;
	NSMutableDictionary* _singletons;
	NSMutableDictionary* _containerSingletons;
	NSMutableDictionary* _graph;
	unsigned long long _depth;
	unsigned long long _drainDepth;
	NSMutableArray* _onDrainBlocks;
	NSMutableArray* _onDrainCopyPoolObjectGraphBlocks;

}

@property (nonatomic,retain) NSMutableDictionary * singletons;                                                     //@synthesize singletons=_singletons - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * containerSingletons;                                            //@synthesize containerSingletons=_containerSingletons - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * graph;                                                          //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) unsigned long long depth;                                                             //@synthesize depth=_depth - In the implementation block
@property (assign,nonatomic) unsigned long long drainDepth;                                                        //@synthesize drainDepth=_drainDepth - In the implementation block
@property (assign,getter=isObjectGraphDrainingEnabled,nonatomic) BOOL objectGraphDrainingEnabled;                  //@synthesize objectGraphDrainingEnabled=_objectGraphDrainingEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * onDrainBlocks;                                                       //@synthesize onDrainBlocks=_onDrainBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * onDrainCopyPoolObjectGraphBlocks;                                    //@synthesize onDrainCopyPoolObjectGraphBlocks=_onDrainCopyPoolObjectGraphBlocks - In the implementation block
@property (getter=isPoolPreparedForLockingGraph,nonatomic,readonly) BOOL poolPreparedForLockingGraph; 
-(NSMutableDictionary *)graph;
-(void)drain;
-(BOOL)isObjectGraphDrainingEnabled;
-(id)init;
-(void)setSingletons:(NSMutableDictionary *)arg1 ;
-(id)copyWithObjectGraphDrainingDisabled;
-(id)initWithSingletonPool:(id)arg1 ;
-(void)setDepth:(unsigned long long)arg1 ;
-(void)setOnDrainCopyPoolObjectGraphBlocks:(NSMutableArray *)arg1 ;
-(void)setDrainDepth:(unsigned long long)arg1 ;
-(void)setOnDrainBlocks:(NSMutableArray *)arg1 ;
-(void)onDrainCopyPoolObjectGraph:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)singletons;
-(NSMutableDictionary *)containerSingletons;
-(NSMutableArray *)onDrainBlocks;
-(void)linkDepth:(/*^block*/id)arg1 ;
-(unsigned long long)drainDepth;
-(id)enter:(/*^block*/id)arg1 ;
-(void)onDrain:(/*^block*/id)arg1 ;
-(void)setObjectGraphDrainingEnabled:(BOOL)arg1 ;
-(unsigned long long)depth;
-(void)setGraph:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)onDrainCopyPoolObjectGraphBlocks;
-(void)setContainerSingletons:(NSMutableDictionary *)arg1 ;
-(BOOL)isPoolPreparedForLockingGraph;
@end

