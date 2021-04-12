/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedGroupEmitting.h>

@protocol FCHeadlineClustering, FCHeadlineClusterOrdering;
@class NSSet, NSString;

@interface FCMyArticlesFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {

	id<FCHeadlineClustering> _headlineClusterer;
	id<FCHeadlineClusterOrdering> _headlineClusterOrderer;

}

@property (nonatomic,retain) id<FCHeadlineClustering> headlineClusterer;                        //@synthesize headlineClusterer=_headlineClusterer - In the implementation block
@property (nonatomic,retain) id<FCHeadlineClusterOrdering> headlineClusterOrderer;              //@synthesize headlineClusterOrderer=_headlineClusterOrderer - In the implementation block
@property (nonatomic,copy,readonly) NSSet * emittableGroupTypes; 
@property (nonatomic,readonly) BOOL shouldEmitContentInFavoritesOnlyMode; 
@property (nonatomic,readonly) BOOL emitsSingletonGroups; 
@property (nonatomic,readonly) BOOL emitsSingleRefreshSessionGroups; 
@property (nonatomic,readonly) long long requiredForYouContentTypes; 
@property (nonatomic,readonly) BOOL requiresHeavyweightContent; 
@property (nonatomic,readonly) BOOL isRequiredByFollowingEmitters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)groupEmitterIdentifier;
-(id<FCHeadlineClusterOrdering>)headlineClusterOrderer;
-(void)setHeadlineClusterer:(id<FCHeadlineClustering>)arg1 ;
-(BOOL)wantsToInsertGroupInContext:(id)arg1 ;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(id)initWithHeadlineClusterer:(id)arg1 headlineClusterOrderer:(id)arg2 ;
-(id<FCHeadlineClustering>)headlineClusterer;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(BOOL)canMergeHeadlinesFromGroup:(id)arg1 intoGroup:(id)arg2 ;
-(long long)requiredForYouContentTypes;
-(NSSet *)emittableGroupTypes;
-(BOOL)shouldEmitContentInFavoritesOnlyMode;
-(BOOL)supportsPagination;
-(void)setHeadlineClusterOrderer:(id<FCHeadlineClusterOrdering>)arg1 ;
@end

