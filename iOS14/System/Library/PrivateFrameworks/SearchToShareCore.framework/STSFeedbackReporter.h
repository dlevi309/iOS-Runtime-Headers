/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/


@class PARSession;

@interface STSFeedbackReporter : NSObject {

	PARSession* _parsecSession;

}

@property (nonatomic,retain) PARSession * parsecSession;              //@synthesize parsecSession=_parsecSession - In the implementation block
+(id)sharedInstance;
-(void)didEngageResult:(id)arg1 ;
-(void)didGoToSearch:(id)arg1 ;
-(void)didEngageCategoryResult:(id)arg1 suggestion:(id)arg2 ;
-(void)didLoadCategoryResults:(id)arg1 recents:(id)arg2 queryId:(unsigned long long)arg3 ;
-(id)didStartNetworkRequest:(id)arg1 query:(id)arg2 queryId:(unsigned long long)arg3 ;
-(void)didEndNetworkRequest:(id)arg1 infoDict:(id)arg2 ;
-(void)didShowResults:(id)arg1 scrolling:(BOOL)arg2 ;
-(void)didPreviewResultLongPress:(id)arg1 ;
-(void)didPreviewResult:(id)arg1 peek:(BOOL)arg2 ;
-(void)didShowProactiveSuggestions:(id)arg1 conversationId:(id)arg2 ;
-(void)didClearSearchBarInput;
-(void)didClearRecents;
-(void)didSearchWithSuggestedQuery:(id)arg1 ;
-(void)didEngageProviderLogo;
-(void)searchBarDidCancel;
-(void)didSearchWithCustomQuery:(id)arg1 ;
-(void)didLoadResults:(id)arg1 indexPaths:(id)arg2 queryId:(unsigned long long)arg3 ;
-(void)didShowQuerySuggestions:(id)arg1 queryId:(unsigned long long)arg2 ;
-(PARSession *)parsecSession;
-(void)setParsecSession:(PARSession *)arg1 ;
-(void)searchViewDidAppearWithEvent:(unsigned long long)arg1 ;
-(void)didShowResults:(id)arg1 trigger:(unsigned long long)arg2 ;
-(void)didShowProactiveCategories:(id)arg1 conversationId:(id)arg2 ;
-(void)searchViewDidDisappear;
-(void)resourceDidLoad:(id)arg1 ;
@end

