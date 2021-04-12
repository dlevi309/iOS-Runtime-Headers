/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSMutableDictionary, NSTimer;

@interface VUISportsScoreboardManager : NSObject {

	BOOL _updateInProgress;
	NSMutableDictionary* _sportsEventsById;
	NSTimer* _scoreboardUpdateTimer;
	long long _scoreboardUpdateInterval;

}

@property (nonatomic,retain) NSMutableDictionary * sportsEventsById;              //@synthesize sportsEventsById=_sportsEventsById - In the implementation block
@property (nonatomic,retain) NSTimer * scoreboardUpdateTimer;                     //@synthesize scoreboardUpdateTimer=_scoreboardUpdateTimer - In the implementation block
@property (assign,nonatomic) long long scoreboardUpdateInterval;                  //@synthesize scoreboardUpdateInterval=_scoreboardUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL updateInProgress;                               //@synthesize updateInProgress=_updateInProgress - In the implementation block
+(id)sharedInstance;
+(void)registerDelegate:(id)arg1 canonicalId:(id)arg2 ;
+(void)unregisterDelegate:(id)arg1 canonicalId:(id)arg2 ;
-(id)init;
-(void)_invalidateTimer;
-(void)_updateTimer;
-(void)setUpdateInProgress:(BOOL)arg1 ;
-(void)_resetTimer;
-(BOOL)updateInProgress;
-(NSMutableDictionary *)sportsEventsById;
-(id)_prepareJSContextDictionaryArgument;
-(void)_updateScores:(id)arg1 ;
-(void)_getScoreboardUpdates;
-(void)setSportsEventsById:(NSMutableDictionary *)arg1 ;
-(NSTimer *)scoreboardUpdateTimer;
-(void)setScoreboardUpdateTimer:(NSTimer *)arg1 ;
-(long long)scoreboardUpdateInterval;
-(void)setScoreboardUpdateInterval:(long long)arg1 ;
@end

