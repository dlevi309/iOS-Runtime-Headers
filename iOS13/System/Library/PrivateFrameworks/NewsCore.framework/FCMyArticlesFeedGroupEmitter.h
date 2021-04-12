/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedGroupEmitting.h>

@protocol FCHeadlineClustering, FCHeadlineClusterOrdering;
@class NSString, NSSet;

@interface FCMyArticlesFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {

	id<FCHeadlineClustering> _headlineClusterer;
	id<FCHeadlineClusterOrdering> _headlineClusterOrderer;

}

@property (nonatomic,retain) id<FCHeadlineClustering> headlineClusterer;                        //@synthesize headlineClusterer=_headlineClusterer - In the implementation block
@property (nonatomic,retain) id<FCHeadlineClusterOrdering> headlineClusterOrderer;              //@synthesize headlineClusterOrderer=_headlineClusterOrderer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * emittableGroupTypes; 
@property (nonatomic,readonly) BOOL shouldEmitContentInFavoritesOnlyMode; 
@property (nonatomic,readonly) BOOL emitsSingletonGroups; 
@property (nonatomic,readonly) BOOL emitsSingleRefreshSessionGroups; 
@property (nonatomic,readonly) long long requiredForYouContentTypes; 
@property (nonatomic,readonly) BOOL requiresHeavyweightContent; 
@property (nonatomic,readonly) BOOL isRequiredByFollowingEmitters; 
+(id)groupEmitterIdentifier;
-(BOOL)wantsToInsertGroupInContext:(id)arg1 ;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(NSSet *)emittableGroupTypes;
-(BOOL)shouldEmitContentInFavoritesOnlyMode;
-(BOOL)supportsPagination;
-(BOOL)canMergeHeadlinesFromGroup:(id)arg1 intoGroup:(id)arg2 ;
-(long long)requiredForYouContentTypes;
-(id)initWithHeadlineClusterer:(id)arg1 headlineClusterOrderer:(id)arg2 ;
-(id<FCHeadlineClustering>)headlineClusterer;
-(void)setHeadlineClusterer:(id<FCHeadlineClustering>)arg1 ;
-(id<FCHeadlineClusterOrdering>)headlineClusterOrderer;
-(void)setHeadlineClusterOrderer:(id<FCHeadlineClusterOrdering>)arg1 ;
@end

