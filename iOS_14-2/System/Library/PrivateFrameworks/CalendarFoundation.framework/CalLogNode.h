/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@protocol OS_dispatch_group, OS_dispatch_queue, CalLogWriter;
@class NSMutableArray, NSObject, CalLogFilter;

@interface CalLogNode : NSObject {

	NSMutableArray* _subnodes;
	NSObject*<OS_dispatch_group> _dispatchGroup;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	CalLogFilter* _filter;
	id<CalLogWriter> _writer;
	NSMutableArray* _accumulator;
	unsigned long long _accumulatorBufferSize;

}

@property (nonatomic,retain) NSMutableArray * subnodes;                             //@synthesize subnodes=_subnodes - In the implementation block
@property (nonatomic,retain) NSMutableArray * accumulator;                          //@synthesize accumulator=_accumulator - In the implementation block
@property (nonatomic,retain) CalLogFilter * filter;                                 //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) unsigned long long accumulatorBufferSize;              //@synthesize accumulatorBufferSize=_accumulatorBufferSize - In the implementation block
@property (nonatomic,retain) id<CalLogWriter> writer;                               //@synthesize writer=_writer - In the implementation block
-(BOOL)flush;
-(void)setFilter:(CalLogFilter *)arg1 ;
-(CalLogFilter *)filter;
-(id<CalLogWriter>)writer;
-(id)init;
-(NSMutableArray *)subnodes;
-(void)addSubnode:(id)arg1 ;
-(int)minimumLevelOfNodeTree;
-(id)allSubnodes;
-(void)processEnvelope:(id)arg1 ;
-(NSMutableArray *)accumulator;
-(void)setSubnodes:(NSMutableArray *)arg1 ;
-(void)flushAccumulator;
-(unsigned long long)accumulatorBufferSize;
-(void)setAccumulator:(NSMutableArray *)arg1 ;
-(void)clearAccumulator;
-(void)removeSubnode:(id)arg1 ;
-(void)setAccumulatorBufferSize:(unsigned long long)arg1 ;
-(void)setWriter:(id<CalLogWriter>)arg1 ;
@end

