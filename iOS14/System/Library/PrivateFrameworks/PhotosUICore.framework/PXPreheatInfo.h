/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXDisplayAssetFetchResult;
@class NSMutableIndexSet;

@interface PXPreheatInfo : NSObject {

	NSMutableIndexSet* _preheatedIndexes;
	id<PXDisplayAssetFetchResult> _fetchResult;
	long long _preheatOrigin;
	long long _cachedBytes;

}

@property (nonatomic,readonly) NSMutableIndexSet * preheatedIndexes;                   //@synthesize preheatedIndexes=_preheatedIndexes - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetFetchResult> fetchResult;              //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) long long preheatOrigin;                                //@synthesize preheatOrigin=_preheatOrigin - In the implementation block
@property (nonatomic,readonly) BOOL finished; 
@property (assign,nonatomic) long long cachedBytes;                                    //@synthesize cachedBytes=_cachedBytes - In the implementation block
-(void)markAsFinished;
-(id<PXDisplayAssetFetchResult>)fetchResult;
-(BOOL)finished;
-(long long)cachedBytes;
-(id)initWithFetchResult:(id)arg1 origin:(long long)arg2 ;
-(NSMutableIndexSet *)preheatedIndexes;
-(long long)preheatOrigin;
-(void)setCachedBytes:(long long)arg1 ;
@end

