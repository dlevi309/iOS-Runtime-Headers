/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSString;

@interface PGSharingSuggestionSource : NSObject

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * details; 
@property (nonatomic,readonly) double weight; 
-(double)weight;
-(NSString *)name;
-(id)description;
-(id)sourceDescription;
-(NSString *)details;
-(id)suggestedResultsForInput:(id)arg1 withOptions:(id)arg2 ;
-(id)suggestionResultWithPerson:(id)arg1 ;
-(id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2 ;
-(id)suggestionResultsWithPersons:(id)arg1 ;
-(BOOL)canRunWithOptions:(id)arg1 ;
-(BOOL)canRunWithInput:(id)arg1 ;
@end

