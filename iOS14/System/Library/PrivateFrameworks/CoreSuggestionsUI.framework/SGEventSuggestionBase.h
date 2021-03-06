/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/

#import <libobjc.A.dylib/SGSuggestion.h>
#import <libobjc.A.dylib/SGSuggestionCategory.h>
#import <libobjc.A.dylib/SGSuggestionExtensions.h>

@protocol SGSuggestionDelegate;
@class SGRealtimeEvent, EKEvent, NSString;

@interface SGEventSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {

	SGRealtimeEvent* _realtimeEvent;
	EKEvent* _eventKitEvent;
	id<SGSuggestionDelegate> _suggestionDelegate;

}

@property (assign,nonatomic,__weak) id<SGSuggestionDelegate> suggestionDelegate;              //@synthesize suggestionDelegate=_suggestionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)calendarImage;
+(id)_eventStore;
+(void)confirm:(BOOL)arg1 event:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<SGSuggestionDelegate>)suggestionDelegate;
-(id)primaryActionTitle;
-(id)suggestionCategoryTitle;
-(id)suggestionTitle;
-(id)suggestionCategory;
-(id)suggestionPrimaryAction;
-(id)suggestionDismissAction;
-(id)suggestionSubtitle;
-(id)suggestionCategoryId;
-(id)suggestionCategoryImage;
-(id)suggestionCategoryTitleForItems:(id)arg1 ;
-(id)suggestionCategorySubtitleForItems:(id)arg1 ;
-(id)suggestionCategoryLocalizedCountOfItems:(id)arg1 ;
-(void)setSuggestionDelegate:(id<SGSuggestionDelegate>)arg1 ;
-(void)dealloc;
-(id)realtimeSuggestion;
-(id)initWithRealtimeEvent:(id)arg1 ;
-(id)suggestionsEvent;
-(void)eventKitStoreChangedNotification:(id)arg1 ;
-(id)eventKitEvent;
@end

