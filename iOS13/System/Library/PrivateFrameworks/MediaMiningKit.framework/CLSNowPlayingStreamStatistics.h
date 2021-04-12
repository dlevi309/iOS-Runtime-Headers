/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSArray;

@interface CLSNowPlayingStreamStatistics : NSObject {

	NSArray* _sortedAlbums;
	NSArray* _sortedArtists;
	NSArray* _sortedTitles;
	NSArray* _sortedGenres;
	NSArray* _sortedSources;
	NSArray* _sortedSessions;
	double _maxDurationInSeconds;
	double _minDurationInSeconds;

}

@property (nonatomic,readonly) NSArray * sortedAlbums;                   //@synthesize sortedAlbums=_sortedAlbums - In the implementation block
@property (nonatomic,readonly) NSArray * sortedArtists;                  //@synthesize sortedArtists=_sortedArtists - In the implementation block
@property (nonatomic,readonly) NSArray * sortedTitles;                   //@synthesize sortedTitles=_sortedTitles - In the implementation block
@property (nonatomic,readonly) NSArray * sortedGenres;                   //@synthesize sortedGenres=_sortedGenres - In the implementation block
@property (nonatomic,readonly) NSArray * sortedSources;                  //@synthesize sortedSources=_sortedSources - In the implementation block
@property (nonatomic,readonly) NSArray * sortedSessions;                 //@synthesize sortedSessions=_sortedSessions - In the implementation block
@property (nonatomic,readonly) double maxDurationInSeconds;              //@synthesize maxDurationInSeconds=_maxDurationInSeconds - In the implementation block
@property (nonatomic,readonly) double minDurationInSeconds;              //@synthesize minDurationInSeconds=_minDurationInSeconds - In the implementation block
-(id)initWithNowPlayingStreamSessions:(id)arg1 ;
-(void)computeStatistics;
-(void)logStatistics;
-(NSArray *)sortedAlbums;
-(NSArray *)sortedArtists;
-(NSArray *)sortedTitles;
-(NSArray *)sortedGenres;
-(NSArray *)sortedSources;
-(NSArray *)sortedSessions;
-(double)maxDurationInSeconds;
-(double)minDurationInSeconds;
@end

