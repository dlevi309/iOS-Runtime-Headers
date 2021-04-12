/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSArray, NSMutableArray;

@interface PXPeoplePagingSuggestionProvider : NSObject {

	NSArray* _currentSuggestions;
	NSMutableArray* _unvisitedSuggestions;
	NSMutableArray* _visitedSuggestions;

}

@property (nonatomic,copy) NSArray * currentSuggestions;                         //@synthesize currentSuggestions=_currentSuggestions - In the implementation block
@property (nonatomic,retain) NSMutableArray * unvisitedSuggestions;              //@synthesize unvisitedSuggestions=_unvisitedSuggestions - In the implementation block
@property (nonatomic,retain) NSMutableArray * visitedSuggestions;                //@synthesize visitedSuggestions=_visitedSuggestions - In the implementation block
-(id)init;
-(BOOL)hasNextSuggestions;
-(BOOL)hasPreviousSuggestions;
-(id)previousSuggestions;
-(id)nextSuggestionsWithPageLimit:(long long)arg1 ;
-(void)appendSuggestionArray:(id)arg1 ;
-(void)removeSuggestions:(id)arg1 ;
-(void)removeAllSuggestions;
-(NSArray *)currentSuggestions;
-(void)setCurrentSuggestions:(NSArray *)arg1 ;
-(NSMutableArray *)visitedSuggestions;
-(NSMutableArray *)unvisitedSuggestions;
-(void)setUnvisitedSuggestions:(NSMutableArray *)arg1 ;
-(void)setVisitedSuggestions:(NSMutableArray *)arg1 ;
@end

