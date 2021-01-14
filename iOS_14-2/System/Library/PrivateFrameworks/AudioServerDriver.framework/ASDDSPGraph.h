/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/


#import <AudioServerDriver/AudioServerDriver-Structs.h>
@class NSString, NSSet;

@interface ASDDSPGraph : NSObject {

	shared_ptr<DSPGraph::Graph>* _graph;

}

@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph;              //@synthesize graph=_graph - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) long long numberOfInputs; 
@property (nonatomic,readonly) long long numberOfOutputs; 
@property (nonatomic,readonly) long long sliceDurationInSamples; 
@property (nonatomic,readonly) BOOL configured; 
@property (nonatomic,readonly) BOOL initialized; 
@property (nonatomic,readonly) NSSet * boxes; 
-(shared_ptr<DSPGraph::Graph>*)graph;
-(BOOL)initialize;
-(BOOL)configure;
-(id)init;
-(long long)numberOfInputs;
-(long long)numberOfOutputs;
-(NSSet *)boxes;
-(BOOL)initialized;
-(NSString *)name;
-(BOOL)reset;
-(void)setName:(NSString *)arg1 ;
-(BOOL)unconfigure;
-(BOOL)configured;
-(BOOL)uninitialize;
-(BOOL)setAUStrip:(id)arg1 ;
-(id)initWithDSPGraph:(shared_ptr<DSPGraph::Graph>*)arg1 ;
-(BOOL)setVariableSliceDuration:(long long)arg1 forSampleRate:(long long)arg2 ;
-(long long)sliceDurationInSamples;
-(BOOL)getParameter:(float*)arg1 forID:(unsigned)arg2 ;
-(BOOL)hasParameter:(unsigned)arg1 ;
-(BOOL)setParameter:(float)arg1 forID:(unsigned)arg2 ;
-(BOOL)getPropertySize:(unsigned*)arg1 isWritable:(BOOL*)arg2 forID:(unsigned)arg3 ;
-(BOOL)getProperty:(void*)arg1 withSize:(unsigned*)arg2 forID:(unsigned)arg3 ;
-(BOOL)setProperty:(const void*)arg1 withSize:(unsigned)arg2 forID:(unsigned)arg3 ;
-(id)boxWithName:(id)arg1 ;
-(BOOL)setPropertyStrip:(id)arg1 ;
@end

