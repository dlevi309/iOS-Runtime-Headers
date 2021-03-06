/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SiriUISuggestionsViewDelegate <NSObject>
@optional
-(double)contentWidthForSuggestionsView:(id)arg1;
-(double)statusBarHeightForSuggestionsView:(id)arg1;
-(BOOL)suggestionsViewIsInTextInputMode:(id)arg1;
-(double)statusViewHeightForSuggestionsView:(id)arg1;
-(void)getNextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(id)nextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2;
-(void)didShowSuggestionsForSuggestionsView:(id)arg1;
-(void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2;

@end

