/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKDataListSuggestionsControl.h>

@interface WKDataListSuggestionsPopover : WKDataListSuggestionsControl {

	RetainPtr<WKFormRotatingAccessoryPopover>* _popover;
	RetainPtr<WKDataListSuggestionsViewController>* _suggestionsViewController;

}
-(void)invalidate;
-(void)updateWithInformation:(DataListSuggestionInformation*)arg1 ;
-(id)initWithInformation:(DataListSuggestionInformation*)arg1 inView:(id)arg2 ;
-(void)showSuggestionsDropdown:(WebDataListSuggestionsDropdownIOS*)arg1 activationType:(int)arg2 ;
-(void)didSelectOptionAtIndex:(long long)arg1 ;
@end

