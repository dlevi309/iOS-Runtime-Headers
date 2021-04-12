/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCContentContext;
@interface FCFlintResourceManager : NSObject {

	id<FCContentContext> _context;

}

@property (nonatomic,readonly) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(id)fetchFontResourcesWithIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 relativePriority:(long long)arg3 callBackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id<FCContentContext>)context;
-(id)fetchResourcesWithIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 relativePriority:(long long)arg3 callBackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)fetchResourcesWithIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 cacheLifetimeHint:(long long)arg3 relativePriority:(long long)arg4 callBackQueue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)cachedResourcesWithIdentifiers:(id)arg1 ;
@end

