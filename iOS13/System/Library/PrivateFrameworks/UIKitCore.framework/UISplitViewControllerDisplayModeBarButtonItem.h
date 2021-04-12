/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIBarButtonItem.h>

@protocol UISplitViewControllerImpl;
@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem {

	BOOL _hasBeenUsed;
	id<UISplitViewControllerImpl> _impl;

}

@property (assign,setter=_setImpl:,getter=_impl,nonatomic,__weak) id<UISplitViewControllerImpl> impl;              //@synthesize impl=_impl - In the implementation block
@property (getter=_hasBeenUsed,nonatomic,readonly) BOOL hasBeenUsed;                                               //@synthesize hasBeenUsed=_hasBeenUsed - In the implementation block
-(id)target;
-(id)_impl;
-(SEL)action;
-(void)_setOwningNavigationItem:(id)arg1 ;
-(void)_wasUsed;
-(void)_setImpl:(id)arg1 ;
-(BOOL)_hasBeenUsed;
@end

