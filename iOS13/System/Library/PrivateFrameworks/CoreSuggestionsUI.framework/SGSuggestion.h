/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/


@protocol SGSuggestion <NSObject>
@property (assign,nonatomic,__weak) id<SGSuggestionDelegate> suggestionDelegate; 
@optional
-(id)suggestionAttributedSubtitle;
-(id)suggestionImage;
-(id)suggestionDismissAction;
-(id)suggestionSubtitle;
-(id)suggestionPrimaryActionViewController;

@required
-(id)suggestionPrimaryAction;
-(id)suggestionCategory;
-(id)suggestionTitle;
-(id<SGSuggestionDelegate>)suggestionDelegate;
-(void)setSuggestionDelegate:(id)arg1;

@end

