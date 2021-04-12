/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NMSMediaItemDownloadInfo.h>

@interface NMSPartialMediaItemDownloadInfo : NMSMediaItemDownloadInfo {

	unsigned long long _offset;
	unsigned long long _minimumSize;

}

@property (nonatomic,readonly) unsigned long long minimumSize;              //@synthesize minimumSize=_minimumSize - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                   //@synthesize offset=_offset - In the implementation block
-(unsigned long long)offset;
-(id)description;
-(unsigned long long)minimumSize;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 size:(unsigned long long)arg2 manuallyAdded:(BOOL)arg3 minimumSize:(unsigned long long)arg4 offset:(unsigned long long)arg5 ;
@end

