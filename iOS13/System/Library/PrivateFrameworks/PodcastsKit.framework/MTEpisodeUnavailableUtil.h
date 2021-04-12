/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/MTSingleton.h>

@interface MTEpisodeUnavailableUtil : MTSingleton
+(id)longReasonTextForNoInternet;
+(id)longStringForUnavailableReason:(unsigned long long)arg1 podcastTitle:(id)arg2 ;
+(unsigned long long)unavailableReasonForEpisode:(id)arg1 ;
+(id)stringForUnavailableReason:(unsigned long long)arg1 ;
-(void)_presentErrorDialogWithTitle:(id)arg1 message:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)showDialogForReason:(unsigned long long)arg1 podcastTitle:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

