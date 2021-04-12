/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/


@protocol SGSuggestion <NSObject>
@property (assign,nonatomic,__weak) id<SGSuggestionDelegate> suggestionDelegate; 
@optional
-(id)suggestionDismissAction;
-(id)suggestionSubtitle;
-(id)suggestionAttributedSubtitle;
-(id)suggestionImage;
-(id)suggestionPrimaryActionViewController;

@required
-(id<SGSuggestionDelegate>)suggestionDelegate;
-(id)suggestionTitle;
-(id)suggestionCategory;
-(id)suggestionPrimaryAction;
-(void)setSuggestionDelegate:(id)arg1;

@end

