/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)scores;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)canonicalId;
-(BOOL)showScoreboard;
-(id)jsContextDictionary;
-(NSDictionary *)leagueContext;
@end

