/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)showSuggestionsDropdown:(WebDataListSuggestionsDropdownIOS*)arg1 activationType:(unsigned char)arg2 ;
-(void)didSelectOptionAtIndex:(long long)arg1 ;
@end

