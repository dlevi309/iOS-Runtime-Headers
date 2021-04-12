/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol OS_os_log;
@class PGManager, NSObject;

@interface PGSharingManager : NSObject {

	PGManager* _manager;
	NSObject*<OS_os_log> _loggingConnection;

}
+(id)_defaultOptions;
-(id)initWithManager:(id)arg1 ;
-(id)coreDuetStream;
-(id)presenceStream;
-(id)contextualStream;
-(id)learningStream;
-(id)suggestionSourcesForSharingStream:(unsigned long long)arg1 ;
-(id)suggestionResultsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 ;
-(BOOL)canProvideSuggestionsWithOptions:(id)arg1 forGraph:(id)arg2 ;
-(BOOL)_canIncludeUnverified;
-(void)_mergeSuggestionResultByPersonIdentifer:(id)arg1 withSourceSuggestionResults:(id)arg2 ;
-(id)_filteredSuggestionResults:(id)arg1 withOptions:(id)arg2 graph:(id)arg3 ;
-(id)_sortedSuggestionResults:(id)arg1 withOptions:(id)arg2 ;
-(id)_learningStreamUtilsWithGraph:(id)arg1 ;
@end

