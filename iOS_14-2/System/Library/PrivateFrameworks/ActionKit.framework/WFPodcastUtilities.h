/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


#import <ActionKit/ActionKit-Structs.h>
@interface WFPodcastUtilities : NSObject
+(id)generatePlaybackQueueURL:(id)arg1 withQueryDictionary:(id)arg2 ;
+(MRSystemAppPlaybackQueueRef)createPlaybackQueueWithURLs:(id)arg1 setImmediatePlayback:(BOOL)arg2 ;
+(void*)createPlayerPathForOrigin:(void*)arg1 ;
+(void*)createLocalPlayerPath;
+(void)createPreferredPlayerPathWithCompletion:(/*^block*/id)arg1 ;
+(void)getPodcastsFromLibraryFetchingDetailsFromServer:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

