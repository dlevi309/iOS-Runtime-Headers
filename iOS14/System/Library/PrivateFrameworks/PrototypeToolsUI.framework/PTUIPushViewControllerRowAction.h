/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
*/

#import <PrototypeTools/PTRowAction.h>

@interface PTUIPushViewControllerRowAction : PTRowAction {

	/*^block*/id _viewControllerCreator;

}

@property (nonatomic,readonly) id viewControllerCreator;              //@synthesize viewControllerCreator=_viewControllerCreator - In the implementation block
+(id)actionWithViewControllerCreator:(/*^block*/id)arg1 ;
-(/*^block*/id)defaultHandler;
-(BOOL)deselectsRowOnSuccess;
-(id)viewControllerCreator;
@end

