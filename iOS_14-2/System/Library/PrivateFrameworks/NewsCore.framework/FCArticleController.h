/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCContentContext;
@interface FCArticleController : NSObject {

	id<FCContentContext> _context;

}

@property (nonatomic,retain) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
-(id)articleWithID:(id)arg1 forceArticleUpdate:(BOOL)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 ;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(id)articleWithID:(id)arg1 ;
-(id<FCContentContext>)context;
-(id)articleWithHeadline:(id)arg1 ;
-(id)articleWithID:(id)arg1 qualityOfService:(long long)arg2 relativePriority:(long long)arg3 ;
-(id)headlinesFetchOperationForArticleIDs:(id)arg1 ignoreCacheForArticleIDs:(id)arg2 ;
-(id)headlinesFetchOperationForArticleIDs:(id)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

