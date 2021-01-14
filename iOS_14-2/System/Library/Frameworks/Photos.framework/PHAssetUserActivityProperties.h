/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetUserActivityProperties : PHAssetPropertySet {

	long long _syncedPlayCount;
	long long _syncedShareCount;
	long long _syncedViewCount;
	long long _pendingPlayCount;
	long long _pendingShareCount;
	long long _pendingViewCount;

}

@property (assign,nonatomic) long long syncedPlayCount;                //@synthesize syncedPlayCount=_syncedPlayCount - In the implementation block
@property (assign,nonatomic) long long syncedShareCount;               //@synthesize syncedShareCount=_syncedShareCount - In the implementation block
@property (assign,nonatomic) long long syncedViewCount;                //@synthesize syncedViewCount=_syncedViewCount - In the implementation block
@property (assign,nonatomic) long long pendingPlayCount;               //@synthesize pendingPlayCount=_pendingPlayCount - In the implementation block
@property (assign,nonatomic) long long pendingShareCount;              //@synthesize pendingShareCount=_pendingShareCount - In the implementation block
@property (assign,nonatomic) long long pendingViewCount;               //@synthesize pendingViewCount=_pendingViewCount - In the implementation block
@property (nonatomic,readonly) long long playCount; 
@property (nonatomic,readonly) long long shareCount; 
@property (nonatomic,readonly) long long viewCount; 
+(id)propertySetName;
+(id)propertiesToFetch;
-(long long)playCount;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(void)setSyncedPlayCount:(long long)arg1 ;
-(void)setPendingShareCount:(long long)arg1 ;
-(long long)pendingViewCount;
-(void)setPendingViewCount:(long long)arg1 ;
-(long long)shareCount;
-(void)setPendingPlayCount:(long long)arg1 ;
-(long long)viewCount;
-(long long)syncedShareCount;
-(long long)syncedPlayCount;
-(long long)pendingShareCount;
-(long long)syncedViewCount;
-(void)setSyncedShareCount:(long long)arg1 ;
-(void)setSyncedViewCount:(long long)arg1 ;
-(long long)pendingPlayCount;
@end

