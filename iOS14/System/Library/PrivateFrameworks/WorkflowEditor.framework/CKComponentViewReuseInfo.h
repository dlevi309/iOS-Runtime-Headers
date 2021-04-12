/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@class UIView, NSMutableArray;

@interface CKComponentViewReuseInfo : NSObject {

	UIView* _view;
	/*^block*/id _didEnterReusePoolBlock;
	/*^block*/id _willLeaveReusePoolBlock;
	NSMutableArray* _childViewInfos;
	BOOL _hidden;
	BOOL _ancestorHidden;

}
-(void)didHide;
-(id)initWithView:(id)arg1 didEnterReusePoolBlock:(/*^block*/id)arg2 willLeaveReusePoolBlock:(/*^block*/id)arg3 ;
-(void)registerChildViewInfo:(id)arg1 ;
-(void)willUnhide;
-(void)ancestorDidHide;
-(void)ancestorWillUnhide;
@end

