/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class MPModelSong, MPModelPlayEvent, NSString, NSData;

@interface MPCReportingLyricsViewEvent : NSObject {

	MPModelSong* _modelSong;
	MPModelPlayEvent* _modelPlayEvent;
	NSString* _lyricsID;
	double _visibleDuration;
	long long _displayType;
	long long _displayedCharacterCount;
	NSString* _language;
	NSString* _featureName;
	NSData* _recommendationData;
	long long _sourceType;

}

@property (nonatomic,retain) MPModelSong * modelSong;                        //@synthesize modelSong=_modelSong - In the implementation block
@property (nonatomic,retain) MPModelPlayEvent * modelPlayEvent;              //@synthesize modelPlayEvent=_modelPlayEvent - In the implementation block
@property (nonatomic,retain) NSString * lyricsID;                            //@synthesize lyricsID=_lyricsID - In the implementation block
@property (assign,nonatomic) double visibleDuration;                         //@synthesize visibleDuration=_visibleDuration - In the implementation block
@property (assign,nonatomic) long long displayType;                          //@synthesize displayType=_displayType - In the implementation block
@property (assign,nonatomic) long long displayedCharacterCount;              //@synthesize displayedCharacterCount=_displayedCharacterCount - In the implementation block
@property (nonatomic,copy) NSString * language;                              //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) NSString * featureName;                           //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,copy) NSData * recommendationData;                      //@synthesize recommendationData=_recommendationData - In the implementation block
@property (assign,nonatomic) long long sourceType;                           //@synthesize sourceType=_sourceType - In the implementation block
-(long long)displayType;
-(void)setDisplayType:(long long)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(NSString *)featureName;
-(MPModelPlayEvent *)modelPlayEvent;
-(NSString *)lyricsID;
-(void)setLyricsID:(NSString *)arg1 ;
-(NSData *)recommendationData;
-(void)setFeatureName:(NSString *)arg1 ;
-(void)setRecommendationData:(NSData *)arg1 ;
-(MPModelSong *)modelSong;
-(double)visibleDuration;
-(void)setModelPlayEvent:(MPModelPlayEvent *)arg1 ;
-(long long)displayedCharacterCount;
-(void)setModelSong:(MPModelSong *)arg1 ;
-(void)setVisibleDuration:(double)arg1 ;
-(void)setDisplayedCharacterCount:(long long)arg1 ;
@end

