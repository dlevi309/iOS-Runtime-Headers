/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXPeopleSuggestionManagerDelegate <NSObject>
@optional
-(void)confirmationCountUpdatedForSuggestionManager:(id)arg1 undoing:(BOOL)arg2;
-(void)willLoadMoreSuggestionsForSuggestionManager:(id)arg1;

@required
-(void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;
-(void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;

@end

