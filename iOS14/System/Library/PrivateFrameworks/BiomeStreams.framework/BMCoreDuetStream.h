/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <libobjc.A.dylib/BMStream.h>

@protocol _DKKnowledgeQuerying, _CDUserContext;
@class NSString, _DKEventQuery;

@interface BMCoreDuetStream : NSObject <BMStream> {

	NSString* _identifier;
	_DKEventQuery* _query;
	id<_DKKnowledgeQuerying> _store;
	id<_CDUserContext> _context;

}

@property (nonatomic,readonly) id<_DKKnowledgeQuerying> store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) id<_CDUserContext> context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) _DKEventQuery * query;                       //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
-(_DKEventQuery *)query;
-(id)init;
-(id<_DKKnowledgeQuerying>)store;
-(id<_CDUserContext>)context;
-(NSString *)identifier;
-(id)initWithKnowledgeStore:(id)arg1 clientContext:(id)arg2 identifier:(id)arg3 ;
-(id)publisherForQuery:(id)arg1 ;
@end

