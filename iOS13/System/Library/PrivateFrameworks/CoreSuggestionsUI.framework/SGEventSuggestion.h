/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)arg1 ;
-(id)suggestionAttributedSubtitle;
-(id)suggestionPrimaryAction;
-(void)_dismissViewController:(id)arg1 andSignalCompletionWithResult:(BOOL)arg2 ;
-(id)suggestionImage;
@end

