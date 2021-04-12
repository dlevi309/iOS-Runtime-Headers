/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@class NSString, NSSet;

@interface SNDSPGraph : NSObject {

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
-(id)init;
-(BOOL)initialize;
-(NSString *)name;
-(BOOL)initialized;
-(void)setName:(NSString *)arg1 ;
-(BOOL)reset;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(BOOL)configure;
-(long long)numberOfInputs;
-(long long)numberOfOutputs;
-(BOOL)configured;
-(BOOL)unconfigure;
-(BOOL)setAUStrip:(id)arg1 ;
-(id)initWithDSPGraph:(shared_ptr<DSPGraph::Graph>*)arg1 ;
-(BOOL)setVariableSliceDuration:(long long)arg1 forSampleRate:(long long)arg2 ;
-(long long)sliceDurationInSamples;
-(BOOL)uninitialize;
-(BOOL)getParameter:(float*)arg1 forID:(unsigned)arg2 ;
-(BOOL)hasParameter:(unsigned)arg1 ;
-(BOOL)setParameter:(float)arg1 forID:(unsigned)arg2 ;
-(BOOL)getPropertySize:(unsigned*)arg1 isWritable:(BOOL*)arg2 forID:(unsigned)arg3 ;
-(BOOL)getProperty:(void*)arg1 withSize:(unsigned*)arg2 forID:(unsigned)arg3 ;
-(BOOL)setProperty:(const void*)arg1 withSize:(unsigned)arg2 forID:(unsigned)arg3 ;
-(id)boxWithName:(id)arg1 ;
-(NSSet *)boxes;
-(BOOL)setPropertyStrip:(id)arg1 withResourcePath:(id)arg2 ;
-(void)writeDotFileToPath:(id)arg1 ;
@end

