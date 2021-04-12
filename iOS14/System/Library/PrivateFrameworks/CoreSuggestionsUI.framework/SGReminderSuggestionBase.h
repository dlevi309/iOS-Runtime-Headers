/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/

#import <libobjc.A.dylib/SGSuggestion.h>
#import <libobjc.A.dylib/SGSuggestionCategory.h>
#import <libobjc.A.dylib/SGSuggestionExtensions.h>

@protocol SGSuggestionDelegate;
@class SGReminder, NSString;

@interface SGReminderSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {

	SGReminder* _reminder;
	NSString* _notes;
	id<SGSuggestionDelegate> _suggestionDelegate;

}

@property (assign,nonatomic,__weak) id<SGSuggestionDelegate> suggestionDelegate;              //@synthesize suggestionDelegate=_suggestionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)notes;
-(id)userActivity;
-(id)locationString;
-(id)location;
-(id)url;
-(id<SGSuggestionDelegate>)suggestionDelegate;
-(id)dueDateComponents;
-(id)primaryActionTitle;
-(id)suggestionCategoryTitle;
-(id)suggestionTitle;
-(id)suggestionCategory;
-(id)suggestionPrimaryAction;
-(id)suggestionDismissAction;
-(id)suggestionSubtitle;
-(id)suggestionAttributedSubtitle;
-(id)suggestionCategoryId;
-(id)suggestionCategoryImage;
-(id)suggestionCategoryTitleForItems:(id)arg1 ;
-(id)suggestionCategorySubtitleForItems:(id)arg1 ;
-(id)suggestionCategoryLocalizedCountOfItems:(id)arg1 ;
-(void)setSuggestionDelegate:(id<SGSuggestionDelegate>)arg1 ;
-(id)title;
-(BOOL)wantsExtendedDetailOnlyView;
-(long long)locationProximity;
-(id)realtimeSuggestion;
-(id)initWithRealtimeReminder:(id)arg1 ;
-(id)suggestionsSecondTitle;
@end

