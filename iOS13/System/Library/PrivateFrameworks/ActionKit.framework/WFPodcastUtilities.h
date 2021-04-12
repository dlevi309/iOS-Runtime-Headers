/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


#import <ActionKit/ActionKit-Structs.h>
@interface WFPodcastUtilities : NSObject
+(void*)createPlayerPath;
+(void)getPodcastsFromLibraryFetchingDetailsFromServer:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
+(id)generatePlaybackQueueURL:(id)arg1 withQueryDictionary:(id)arg2 ;
+(MRSystemAppPlaybackQueueRef)createPlaybackQueueWithURLs:(id)arg1 setImmediatePlayback:(BOOL)arg2 ;
@end

