/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

