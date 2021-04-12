/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSDictionary;

@interface NMSMediaSyncInfoUpdaterOperation : MPAsyncOperation {

	NSDictionary* _syncInfo;

}

@property (nonatomic,readonly) NSDictionary * syncInfo;              //@synthesize syncInfo=_syncInfo - In the implementation block
+(id)sharedLibraryRequestQueue;
-(void)execute;
-(NSDictionary *)syncInfo;
@end

