/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSString, NSDictionary, NSArray;

@interface VUISportsScoreboardViewModel : NSObject {

	BOOL _showScoreboard;
	NSString* _canonicalId;
	NSDictionary* _leagueContext;
	NSArray* _scores;

}

@property (nonatomic,readonly) NSString * canonicalId;                    //@synthesize canonicalId=_canonicalId - In the implementation block
@property (nonatomic,readonly) NSDictionary * leagueContext;              //@synthesize leagueContext=_leagueContext - In the implementation block
@property (nonatomic,readonly) NSArray * scores;                          //@synthesize scores=_scores - In the implementation block
@property (nonatomic,readonly) BOOL showScoreboard;                       //@synthesize showScoreboard=_showScoreboard - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)canonicalId;
-(NSArray *)scores;
-(id)jsContextDictionary;
-(BOOL)showScoreboard;
-(NSDictionary *)leagueContext;
@end

