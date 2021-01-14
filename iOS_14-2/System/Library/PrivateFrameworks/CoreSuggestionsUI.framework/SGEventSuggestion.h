/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/

#import <CoreSuggestionsUI/SGEventSuggestionBase.h>
#import <libobjc.A.dylib/EKEventViewDelegate.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegatePrivate.h>

@class UIImage, NSString;

@interface SGEventSuggestion : SGEventSuggestionBase <EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate> {

	UIImage* _calendarImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)calendarImage;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(id)suggestionPrimaryAction;
-(id)suggestionAttributedSubtitle;
-(id)suggestionImage;
-(void)_dismissViewController:(id)arg1 andSignalCompletionWithResult:(BOOL)arg2 ;
@end

