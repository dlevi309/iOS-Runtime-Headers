/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class _PSEnsembleModel;

@interface _PSSuggesterConfiguration : NSObject {

	long long _maximumNumberOfSuggestions;
	_PSEnsembleModel* _suggestionModel;

}

@property (assign,nonatomic) long long maximumNumberOfSuggestions;              //@synthesize maximumNumberOfSuggestions=_maximumNumberOfSuggestions - In the implementation block
@property (nonatomic,retain) _PSEnsembleModel * suggestionModel;                //@synthesize suggestionModel=_suggestionModel - In the implementation block
+(id)defaultConfiguration;
-(_PSEnsembleModel *)suggestionModel;
-(void)setSuggestionModel:(_PSEnsembleModel *)arg1 ;
-(id)description;
-(long long)maximumNumberOfSuggestions;
-(void)setMaximumNumberOfSuggestions:(long long)arg1 ;
@end

