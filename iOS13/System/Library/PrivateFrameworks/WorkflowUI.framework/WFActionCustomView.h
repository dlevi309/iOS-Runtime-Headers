/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIView.h>

@protocol WFComponentNavigationContext;
@class WFAction;

@interface WFActionCustomView : UIView {

	WFAction* _action;
	id<WFComponentNavigationContext> _navigationContext;

}

@property (assign,nonatomic,__weak) WFAction * action;                                               //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
+(double)preferredHeightForAction:(id)arg1 ;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(id<WFComponentNavigationContext>)navigationContext;
-(void)setNavigationContext:(id<WFComponentNavigationContext>)arg1 ;
-(void)didEnterReusePool;
-(void)willLeaveReusePool;
@end

