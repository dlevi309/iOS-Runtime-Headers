/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSMutableDictionary, NSIndexSet;

@interface _CPLEngineScopeCache : NSObject {

	NSMutableDictionary* _scopeCache;
	NSMutableDictionary* _scopeByLocalIndex;
	NSMutableDictionary* _scopeByCloudIndex;
	NSMutableDictionary* _scopeByStableIndex;
	NSIndexSet* _validLocalIndexes;
	NSIndexSet* _validCloudIndexes;

}
-(id)init;
-(id)scopeWithIdentifier:(id)arg1 ;
-(void)cacheValidCloudIndexes:(id)arg1 ;
-(id)validCloudIndexes;
-(void)cacheValidLocalIndexes:(id)arg1 ;
-(id)validLocalIndexes;
-(id)scopeWithStableIndex:(long long)arg1 ;
-(id)scopeWithCloudIndex:(long long)arg1 ;
-(id)scopeWithLocalIndex:(long long)arg1 ;
-(void)cacheScope:(id)arg1 forScopeStorage:(id)arg2 ;
@end

