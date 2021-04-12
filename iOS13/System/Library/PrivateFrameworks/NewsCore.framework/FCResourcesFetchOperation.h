/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCMultiStepFetchOperation.h>

@protocol FCContentContext;
@class NSArray;

@interface FCResourcesFetchOperation : FCMultiStepFetchOperation {

	BOOL _downloadAssets;
	long long _cacheLifetimeHint;
	/*^block*/id _progressHandler;
	id<FCContentContext> _context;
	NSArray* _resourceIDs;
	NSArray* _resources;

}

@property (nonatomic,retain) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * resourceIDs;                   //@synthesize resourceIDs=_resourceIDs - In the implementation block
@property (nonatomic,readonly) BOOL downloadAssets;                     //@synthesize downloadAssets=_downloadAssets - In the implementation block
@property (nonatomic,retain) NSArray * resources;                       //@synthesize resources=_resources - In the implementation block
@property (assign,nonatomic) long long cacheLifetimeHint;               //@synthesize cacheLifetimeHint=_cacheLifetimeHint - In the implementation block
@property (nonatomic,copy) id progressHandler;                          //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(BOOL)validateOperation;
-(long long)cacheLifetimeHint;
-(void)setCacheLifetimeHint:(long long)arg1 ;
-(id)initWithContext:(id)arg1 resourceIDs:(id)arg2 downloadAssets:(BOOL)arg3 ;
-(id)completeFetchOperation;
-(id)fetchResourcesWithCompletion:(/*^block*/id)arg1 ;
-(id)downloadAssetsWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)resourceIDs;
-(BOOL)_shoudUsePermanentURLForResourceID:(id)arg1 ;
-(BOOL)downloadAssets;
@end

