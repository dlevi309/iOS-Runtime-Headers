/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIInterfaceActionGroupView.h>

@class UIAlertController;

@interface _UIAlertControllerInterfaceActionGroupView : UIInterfaceActionGroupView {

	BOOL _scrollableHeaderViewHasRealContent;
	UIAlertController* _alertController;

}

@property (assign,nonatomic,__weak) UIAlertController * alertController;              //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic) BOOL scrollableHeaderViewHasRealContent;                 //@synthesize scrollableHeaderViewHasRealContent=_scrollableHeaderViewHasRealContent - In the implementation block
-(void)setAlertController:(UIAlertController *)arg1 ;
-(id)_alertController;
-(UIAlertController *)alertController;
-(BOOL)_shouldInstallContentGuideConstraints;
-(BOOL)_shouldShowSeparatorAboveActionsSequenceView;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2 ;
-(BOOL)scrollableHeaderViewHasRealContent;
-(id)initWithAlertController:(id)arg1 actionGroup:(id)arg2 actionHandlerInvocationDelegate:(id)arg3 ;
-(void)setScrollableHeaderViewHasRealContent:(BOOL)arg1 ;
@end

