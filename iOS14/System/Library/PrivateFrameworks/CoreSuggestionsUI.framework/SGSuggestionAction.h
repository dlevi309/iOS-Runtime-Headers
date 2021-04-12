/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/


@class NSString;

@interface SGSuggestionAction : NSObject {

	NSString* _title;
	/*^block*/id _handler;

}
+(id)actionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)execute;
-(id)initWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)title;
@end

