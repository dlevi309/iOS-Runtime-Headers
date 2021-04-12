/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomePubSub/BPSPublisher.h>
#import <libobjc.A.dylib/BMLiveEventsPublisher.h>

@protocol _DKKnowledgeQuerying, _CDUserContext;
@class _DKEventQuery, NSString;

@interface BMKnowledgeContextPublisher : BPSPublisher <BMLiveEventsPublisher> {

	BOOL _includeLiveEvents;
	_DKEventQuery* _query;
	id<_DKKnowledgeQuerying> _store;
	id<_CDUserContext> _context;

}

@property (nonatomic,retain) _DKEventQuery * query;                       //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) id<_CDUserContext> context;                  //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL includeLiveEvents;                      //@synthesize includeLiveEvents=_includeLiveEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_DKEventQuery *)query;
-(void)setStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id<_DKKnowledgeQuerying>)store;
-(id<_CDUserContext>)context;
-(void)subscribe:(id)arg1 ;
-(void)setQuery:(_DKEventQuery *)arg1 ;
-(void)setContext:(id<_CDUserContext>)arg1 ;
-(BOOL)includeLiveEvents;
-(id)initWithQuery:(id)arg1 store:(id)arg2 context:(id)arg3 includeLiveEvents:(BOOL)arg4 ;
-(id)withLiveEvents;
-(void)setIncludeLiveEvents:(BOOL)arg1 ;
@end

