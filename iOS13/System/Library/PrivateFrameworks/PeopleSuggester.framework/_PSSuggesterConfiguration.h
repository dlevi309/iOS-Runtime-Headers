/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)setMaximumNumberOfSuggestions:(long long)arg1 ;
-(long long)maximumNumberOfSuggestions;
-(_PSEnsembleModel *)suggestionModel;
-(void)setSuggestionModel:(_PSEnsembleModel *)arg1 ;
@end

