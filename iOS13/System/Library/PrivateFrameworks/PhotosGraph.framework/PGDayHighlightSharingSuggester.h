/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <libobjc.A.dylib/PGSuggester.h>

@class NSString;

@interface PGDayHighlightSharingSuggester : PGAbstractSuggester <PGSuggester>

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

