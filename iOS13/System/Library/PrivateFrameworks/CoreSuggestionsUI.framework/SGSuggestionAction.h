/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/


@class NSString;

@interface SGSuggestionAction : NSObject {

	NSString* _title;
	/*^block*/id _handler;

}
+(id)actionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)title;
-(void)execute;
-(id)initWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

