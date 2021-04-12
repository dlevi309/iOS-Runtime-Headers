/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

