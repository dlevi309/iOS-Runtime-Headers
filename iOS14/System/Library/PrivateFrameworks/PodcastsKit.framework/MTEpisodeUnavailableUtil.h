/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <Podcasts/MTSingleton.h>

@interface MTEpisodeUnavailableUtil : MTSingleton
+(id)longReasonTextForNoInternet;
+(id)longStringForUnavailableReason:(unsigned long long)arg1 podcastTitle:(id)arg2 ;
+(unsigned long long)unavailableReasonForEpisode:(id)arg1 ;
+(id)stringForUnavailableReason:(unsigned long long)arg1 ;
-(void)_presentErrorDialogWithTitle:(id)arg1 message:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)showDialogForReason:(unsigned long long)arg1 podcastTitle:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

