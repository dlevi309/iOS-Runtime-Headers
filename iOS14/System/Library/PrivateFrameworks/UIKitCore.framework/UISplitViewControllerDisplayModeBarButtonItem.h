/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setImpl:(id)arg1 ;
-(SEL)action;
-(BOOL)_hasBeenUsed;
-(id)_impl;
-(id)target;
-(void)_setOwningNavigationItem:(id)arg1 ;
-(void)_wasUsed;
@end

