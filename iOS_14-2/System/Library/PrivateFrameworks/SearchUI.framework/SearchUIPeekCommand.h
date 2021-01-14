/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICommand.h>

@class UIViewController;

@interface SearchUIPeekCommand : SearchUICommand {

	UIViewController* _viewController;

}

@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
+(id)urlMatchingScheme:(id)arg1 inPunchout:(id)arg2 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(/*^block*/id)actionProvider;
-(UIViewController *)viewController;
-(id)generateViewController;
@end

