/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSString;

@interface PGSharingSuggestionSource : NSObject

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * details; 
@property (nonatomic,readonly) double weight; 
-(id)description;
-(NSString *)name;
-(double)weight;
-(NSString *)details;
-(id)sourceDescription;
-(id)suggestedResultsForInput:(id)arg1 withOptions:(id)arg2 ;
-(id)suggestionResultWithPerson:(id)arg1 ;
-(id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2 ;
-(id)suggestionResultsWithPersons:(id)arg1 ;
-(BOOL)canRunWithOptions:(id)arg1 ;
-(BOOL)canRunWithInput:(id)arg1 ;
@end

