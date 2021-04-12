/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)redownloadableItemCount;
-(void)setRedownloadableItemCount:(long long)arg1 ;
-(NSArray *)pendingItemIdentifiers;
-(void)setPendingItemIdentifiers:(NSArray *)arg1 ;
-(long long)downloadEnabledItemCount;
-(void)setDownloadEnabledItemCount:(long long)arg1 ;
-(long long)nonPurgeableItemCount;
-(void)setNonPurgeableItemCount:(long long)arg1 ;
@end

