/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@class NSString;

@interface SNDSPGraphBox : NSObject {

	Box* _box;
	shared_ptr<DSPGraph::Graph>* _graph;

}

@property (nonatomic,readonly) Box* box;                          //@synthesize box=_box - In the implementation block
@property (nonatomic,readonly) long long numInputs; 
@property (nonatomic,readonly) long long numOutputs; 
@property (nonatomic,readonly) NSString * name; 
-(long long)numOutputs;
-(id)init;
-(long long)numInputs;
-(NSString *)name;
-(Box*)box;
-(id)initWithBox:(Box*)arg1 fromGraph:(shared_ptr<DSPGraph::Graph>*)arg2 ;
-(BOOL)startRecordingPort:(long long)arg1 toFile:(id)arg2 ;
-(BOOL)stopRecordingPort:(long long)arg1 ;
-(BOOL)startInjectingPort:(long long)arg1 toFile:(id)arg2 shouldLoop:(BOOL)arg3 ;
-(BOOL)stopInjectingPort:(long long)arg1 ;
-(BOOL)getParameterList:(unsigned*)arg1 numParameterIDs:(long long*)arg2 inScope:(unsigned)arg3 ;
-(BOOL)getParameterInfo:(AudioUnitParameterInfo*)arg1 forID:(unsigned)arg2 inScope:(unsigned)arg3 ;
-(BOOL)getParameter:(float*)arg1 forID:(unsigned)arg2 scope:(unsigned)arg3 element:(unsigned)arg4 ;
-(BOOL)hasParameter:(unsigned)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
-(BOOL)setParameter:(float)arg1 forID:(unsigned)arg2 scope:(unsigned)arg3 element:(unsigned)arg4 bufferOffset:(long long)arg5 ;
@end

