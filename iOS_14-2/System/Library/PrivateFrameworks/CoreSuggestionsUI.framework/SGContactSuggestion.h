/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/

#import <CoreSuggestionsUI/SGContactSuggestionBase.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@protocol SGContactSuggestionDelegate;
@class NSString;

@interface SGContactSuggestion : SGContactSuggestionBase <CNContactViewControllerDelegate> {

	id<SGContactSuggestionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SGContactSuggestionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactImage;
-(id<SGContactSuggestionDelegate>)delegate;
-(void)setDelegate:(id<SGContactSuggestionDelegate>)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(id)suggestionPrimaryAction;
-(id)suggestionImage;
@end

