/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
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

