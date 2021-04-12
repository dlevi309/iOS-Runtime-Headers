/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NMSMediaItemDownloadInfo.h>

@interface NMSPartialMediaItemDownloadInfo : NMSMediaItemDownloadInfo {

	unsigned long long _offset;
	unsigned long long _minimumSize;

}

@property (nonatomic,readonly) unsigned long long minimumSize;              //@synthesize minimumSize=_minimumSize - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                   //@synthesize offset=_offset - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)offset;
-(unsigned long long)minimumSize;
-(id)initWithIdentifier:(id)arg1 size:(unsigned long long)arg2 manuallyAdded:(BOOL)arg3 minimumSize:(unsigned long long)arg4 offset:(unsigned long long)arg5 ;
@end

