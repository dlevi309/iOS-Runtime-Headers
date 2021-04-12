/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)presenceStream;
-(id)contextualStream;
-(id)learningStream;
-(id)coreDuetStream;
-(id)suggestionSourcesForSharingStream:(unsigned long long)arg1 ;
-(id)suggestionResultsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 ;
-(BOOL)_canIncludeUnverified;
-(void)_mergeSuggestionResultByPersonIdentifer:(id)arg1 withSourceSuggestionResults:(id)arg2 ;
-(id)_sortedSuggestionResults:(id)arg1 withOptions:(id)arg2 graph:(id)arg3 ;
-(id)_learningStreamUtilsWithGraph:(id)arg1 ;
@end

