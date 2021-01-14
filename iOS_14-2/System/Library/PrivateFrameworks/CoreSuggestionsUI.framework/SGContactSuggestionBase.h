/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/

#import <libobjc.A.dylib/SGSuggestion.h>
#import <libobjc.A.dylib/SGSuggestionCategory.h>
#import <libobjc.A.dylib/SGSuggestionExtensions.h>

@protocol SGSuggestionDelegate;
@class SGRealtimeContact, NSString;

@interface SGContactSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {

	SGRealtimeContact* _realtimeContact;
	id<SGSuggestionDelegate> _suggestionDelegate;

}

@property (assign,nonatomic,__weak) id<SGSuggestionDelegate> suggestionDelegate;              //@synthesize suggestionDelegate=_suggestionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactImage;
+(void)confirm:(BOOL)arg1 suggestion:(id)arg2 completion:(/*^block*/id)arg3 ;
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
-(id)realtimeSuggestion;
-(id)initWithRealtimeContact:(id)arg1 ;
@end

