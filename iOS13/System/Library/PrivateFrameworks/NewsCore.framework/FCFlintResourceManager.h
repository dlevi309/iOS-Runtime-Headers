/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCContentContext;
@interface FCFlintResourceManager : NSObject {

	id<FCContentContext> _context;

}

@property (nonatomic,readonly) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(id)initWithContext:(id)arg1 ;
-(id)fetchResourcesWithIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 cacheLifetimeHint:(long long)arg3 relativePriority:(long long)arg4 callBackQueue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)fetchResourcesWithIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 relativePriority:(long long)arg3 callBackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)fetchFontResourcesWithIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 relativePriority:(long long)arg3 callBackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)cachedResourcesWithIdentifiers:(id)arg1 ;
@end

