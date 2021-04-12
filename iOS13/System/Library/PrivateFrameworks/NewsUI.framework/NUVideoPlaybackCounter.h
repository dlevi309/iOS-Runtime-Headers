/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUVideoPlayerEventTracker.h>
#import <libobjc.A.dylib/NUVideoPlaybackCounter.h>

@protocol NUVideoPlaybackCounter <NSObject>
@property (nonatomic,readonly) unsigned long long numberOfVideosPlayedInSession; 
@property (nonatomic,readonly) unsigned long long numberOfVideosPlayedSinceLastAd; 
@required
-(unsigned long long)numberOfVideosPlayedInSession;
-(unsigned long long)numberOfVideosPlayedSinceLastAd;

@end

#import <libobjc.A.dylib/NUAdContextProvider.h>

@class NSString;

@interface NUVideoPlaybackCounter : NSObject <NUVideoPlayerEventTracker, NUVideoPlaybackCounter, NUAdContextProvider> {

	unsigned long long numberOfVideosPlayedSinceLastAd;
	unsigned long long numberOfVideosPlayedInSession;

}

@property (assign,nonatomic) unsigned long long numberOfVideosPlayedInSession; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long numberOfVideosPlayedSinceLastAd; 
-(id)adContextValueForKeyPath:(id)arg1 ;
-(void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackStartedForVideoAdWithMetadata:(id)arg1 ;
-(void)resetNumberOfVideosPlayedSinceLastAd;
-(void)incrementNumberOfVideosPlayedSinceLastAd;
-(void)incrementNumberOfVideosPlayedInSession;
-(unsigned long long)numberOfVideosPlayedInSession;
-(unsigned long long)numberOfVideosPlayedSinceLastAd;
-(void)setNumberOfVideosPlayedInSession:(unsigned long long)arg1 ;
-(void)setNumberOfVideosPlayedSinceLastAd:(unsigned long long)arg1 ;
@end

