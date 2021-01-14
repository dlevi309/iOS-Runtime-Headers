/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateOperation;
-(BOOL)_shoudUsePermanentURLForResourceID:(id)arg1 ;
-(id)init;
-(NSArray *)resources;
-(id)fetchResourcesWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithContext:(id)arg1 resourceIDs:(id)arg2 downloadAssets:(BOOL)arg3 ;
-(id<FCContentContext>)context;
-(void)setResources:(NSArray *)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(id)downloadAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)setCacheLifetimeHint:(long long)arg1 ;
-(id)completeFetchOperation;
-(NSArray *)resourceIDs;
-(id)progressHandler;
-(long long)cacheLifetimeHint;
-(BOOL)downloadAssets;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

