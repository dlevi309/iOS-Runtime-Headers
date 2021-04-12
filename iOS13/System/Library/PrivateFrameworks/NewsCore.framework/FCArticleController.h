/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCContentContext;
@interface FCArticleController : NSObject {

	id<FCContentContext> _context;

}

@property (nonatomic,retain) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)articleWithID:(id)arg1 qualityOfService:(long long)arg2 relativePriority:(long long)arg3 ;
-(id)articleWithID:(id)arg1 forceArticleUpdate:(BOOL)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 ;
-(id)articleWithID:(id)arg1 ;
-(id)articleWithHeadline:(id)arg1 ;
-(id)headlinesFetchOperationForArticleIDs:(id)arg1 ;
-(id)headlinesFetchOperationForArticleIDs:(id)arg1 ignoreCacheForArticleIDs:(id)arg2 ;
@end

