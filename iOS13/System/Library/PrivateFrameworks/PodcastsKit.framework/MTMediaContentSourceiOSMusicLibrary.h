/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/MTMediaContentSource.h>

@interface MTMediaContentSourceiOSMusicLibrary : MTMediaContentSource {

	BOOL _iTunesMatchEnabled;

}

@property (nonatomic,readonly) BOOL iTunesMatchEnabled;              //@synthesize iTunesMatchEnabled=_iTunesMatchEnabled - In the implementation block
+(id)sharedInstance;
-(void)determineiTunesMatchEnabledWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)iTunesMatchEnabled;
@end

