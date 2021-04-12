/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_alertController;
-(id)initWithAlertController:(id)arg1 actionGroup:(id)arg2 actionHandlerInvocationDelegate:(id)arg3 ;
-(BOOL)_shouldShowSeparatorAboveActionsSequenceView;
-(BOOL)_shouldInstallContentGuideConstraints;
-(void)setScrollableHeaderViewHasRealContent:(BOOL)arg1 ;
-(UIAlertController *)alertController;
-(BOOL)scrollableHeaderViewHasRealContent;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2 ;
@end

