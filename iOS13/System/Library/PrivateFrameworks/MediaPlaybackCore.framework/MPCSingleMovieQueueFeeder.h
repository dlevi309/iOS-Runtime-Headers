/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPQueueFeeder.h>
#import <libobjc.A.dylib/MPCQueueControllerDataSource.h>

@protocol MPMutableIdentifierListSection;
@class NSString, MPMovie;

@interface MPCSingleMovieQueueFeeder : MPQueueFeeder <MPCQueueControllerDataSource> {

	NSString* _uniqueIdentifier;
	MPMovie* _movie;
	NSString* _movieIdentifier;
	id<MPMutableIdentifierListSection> _section;

}

@property (nonatomic,retain) MPMovie * movie;                                           //@synthesize movie=_movie - In the implementation block
@property (nonatomic,retain) NSString * movieIdentifier;                                //@synthesize movieIdentifier=_movieIdentifier - In the implementation block
@property (nonatomic,readonly) id<MPMutableIdentifierListSection> section;              //@synthesize section=_section - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL containsLiveStream; 
@property (nonatomic,readonly) BOOL containsTransportableContent; 
-(id)init;
-(id)uniqueIdentifier;
-(id<MPMutableIdentifierListSection>)section;
-(MPMovie *)movie;
-(void)setMovie:(MPMovie *)arg1 ;
-(id)playbackInfoForItem:(id)arg1 ;
-(void)reloadSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)movieIdentifier;
-(void)setMovieIdentifier:(NSString *)arg1 ;
-(BOOL)section:(id)arg1 supportsShuffleType:(long long)arg2 ;
-(void)loadPlaybackContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)itemForItem:(id)arg1 inSection:(id)arg2 ;
-(BOOL)containsLiveStream;
-(BOOL)containsTransportableContent;
@end

