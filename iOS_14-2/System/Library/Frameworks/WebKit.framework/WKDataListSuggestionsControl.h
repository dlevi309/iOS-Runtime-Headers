/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class WKContentView;

@interface WKDataListSuggestionsControl : NSObject {

	WeakPtr<WebKit::WebDataListSuggestionsDropdownIOS, WTF::EmptyCounter>* _dropdown;
	Vector<WebCore::DataListSuggestion, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _suggestions;
	WKContentView* _view;

}

@property (assign,nonatomic,__weak) WKContentView * view;              //@synthesize view=_view - In the implementation block
-(void)setView:(WKContentView *)arg1 ;
-(long long)textAlignment;
-(WKContentView *)view;
-(void)invalidate;
-(void)updateWithInformation:(DataListSuggestionInformation*)arg1 ;
-(id)initWithInformation:(DataListSuggestionInformation*)arg1 inView:(id)arg2 ;
-(void)showSuggestionsDropdown:(WebDataListSuggestionsDropdownIOS*)arg1 activationType:(unsigned char)arg2 ;
-(void)didSelectOptionAtIndex:(long long)arg1 ;
-(id)textSuggestions;
-(long long)suggestionsCount;
-(String*)suggestionAtIndex:(long long)arg1 ;
@end

