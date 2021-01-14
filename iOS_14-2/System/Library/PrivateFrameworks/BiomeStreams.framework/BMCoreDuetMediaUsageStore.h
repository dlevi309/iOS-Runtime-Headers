/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <libobjc.A.dylib/BMCoreDuetMediaUsageStore.h>

@protocol BMCoreDuetMediaUsageStore
@required
-(id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2;
-(BOOL)addContextValue:(id)arg1 toArrayAtKeyPath:(id)arg2;
-(void)saveKnowledgeEvent:(id)arg1 error:(id*)arg2;

@end


@protocol _DKKnowledgeSaving;
@class _CDClientContext;

@interface BMCoreDuetMediaUsageStore : NSObject <BMCoreDuetMediaUsageStore> {

	id<_DKKnowledgeSaving> _knowledgeStore;
	_CDClientContext* _contextStore;

}

@property (nonatomic,readonly) id<_DKKnowledgeSaving> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) _CDClientContext * contextStore;                    //@synthesize contextStore=_contextStore - In the implementation block
-(id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2 ;
-(id)init;
-(_CDClientContext *)contextStore;
-(id<_DKKnowledgeSaving>)knowledgeStore;
-(BOOL)addContextValue:(id)arg1 toArrayAtKeyPath:(id)arg2 ;
-(void)saveKnowledgeEvent:(id)arg1 error:(id*)arg2 ;
@end

