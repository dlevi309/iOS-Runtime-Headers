/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPLibraryKeepLocalStatusObserverConfiguration.h>

@class NSArray;

@interface MPLibraryKeepLocalStatusObserverDetailedContainerConfiguration : MPLibraryKeepLocalStatusObserverConfiguration {

	NSArray* _pendingItemIdentifiers;
	long long _downloadEnabledItemCount;
	long long _nonPurgeableItemCount;
	long long _redownloadableItemCount;

}

@property (nonatomic,copy) NSArray * pendingItemIdentifiers;                  //@synthesize pendingItemIdentifiers=_pendingItemIdentifiers - In the implementation block
@property (assign,nonatomic) long long downloadEnabledItemCount;              //@synthesize downloadEnabledItemCount=_downloadEnabledItemCount - In the implementation block
@property (assign,nonatomic) long long nonPurgeableItemCount;                 //@synthesize nonPurgeableItemCount=_nonPurgeableItemCount - In the implementation block
@property (assign,nonatomic) long long redownloadableItemCount;               //@synthesize redownloadableItemCount=_redownloadableItemCount - In the implementation block
-(void)setNonPurgeableItemCount:(long long)arg1 ;
-(void)setRedownloadableItemCount:(long long)arg1 ;
-(NSArray *)pendingItemIdentifiers;
-(long long)downloadEnabledItemCount;
-(void)setPendingItemIdentifiers:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(long long)nonPurgeableItemCount;
-(long long)redownloadableItemCount;
-(void)setDownloadEnabledItemCount:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

