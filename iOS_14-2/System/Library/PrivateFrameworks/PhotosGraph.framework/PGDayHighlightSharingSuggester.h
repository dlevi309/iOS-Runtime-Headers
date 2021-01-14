/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <libobjc.A.dylib/PGSuggester.h>

@class NSString;

@interface PGDayHighlightSharingSuggester : PGAbstractSuggester <PGSuggester>

@property (assign,nonatomic) BOOL lastSuggestionWasColliding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionTypes;
+(id)suggestionSubtypes;
+(BOOL)shouldSuggestHighlightNode:(id)arg1 loggingConnection:(id)arg2 ;
+(BOOL)canSuggestHighlightNodeWithoutPeople:(id)arg1 loggingConnection:(id)arg2 ;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
@end

