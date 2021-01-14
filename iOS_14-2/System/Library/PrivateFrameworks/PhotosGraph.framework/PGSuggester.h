/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGSuggester <NSObject>
@property (assign,nonatomic) BOOL lastSuggestionWasColliding; 
@required
+(id)suggesterWithSession:(id)arg1;
+(id)suggestionTypes;
+(id)suggestionSubtypes;
-(id)initWithSession:(id)arg1;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2;
-(id)reasonsForSuggestion:(id)arg1;
-(BOOL)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2;
-(BOOL)lastSuggestionWasColliding;
-(void)setLastSuggestionWasColliding:(BOOL)arg1;

@end

