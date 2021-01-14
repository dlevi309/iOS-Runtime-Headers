/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class PHSuggestion, PHSuggestionMessageContext, NSMutableDictionary;

@interface PHSuggestionMessageMatchingResult : NSObject {

	PHSuggestion* _suggestion;
	PHSuggestionMessageContext* _messageContext;
	NSMutableDictionary* _scoreByCMMSuggestionMatchingType;

}

@property (nonatomic,retain) PHSuggestion * suggestion;                                           //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,retain) PHSuggestionMessageContext * messageContext;                         //@synthesize messageContext=_messageContext - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * scoreByCMMSuggestionMatchingType;              //@synthesize scoreByCMMSuggestionMatchingType=_scoreByCMMSuggestionMatchingType - In the implementation block
-(PHSuggestion *)suggestion;
-(void)setSuggestion:(PHSuggestion *)arg1 ;
-(PHSuggestionMessageContext *)messageContext;
-(id)initWithSuggestion:(id)arg1 messageContext:(id)arg2 ;
-(void)registerMatchingType:(long long)arg1 weight:(double)arg2 ;
-(double)scoreForSuggestionMatchingType:(long long)arg1 ;
-(void)setMessageContext:(PHSuggestionMessageContext *)arg1 ;
-(NSMutableDictionary *)scoreByCMMSuggestionMatchingType;
-(void)setScoreByCMMSuggestionMatchingType:(NSMutableDictionary *)arg1 ;
@end

