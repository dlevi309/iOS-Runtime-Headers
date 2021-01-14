/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@protocol SXScrollViewControllerDelegate <NSObject>
@optional
-(void)scrollViewControllerDidScroll:(id)arg1;
-(void)scrollViewControllerWillLayoutContent:(id)arg1;
-(void)scrollViewControllerDidLayoutContent:(id)arg1;
-(void)scrollViewController:(id)arg1 didApplyDocumentStyle:(id)arg2;
-(double)navigationBarHeightForScrollViewController:(id)arg1;
-(double)toolBarHeightForScrollViewController:(id)arg1;
-(void)scrollViewControllerRequestsFullscreen:(id)arg1;
-(void)scrollViewController:(id)arg1 enableNavigation:(BOOL)arg2;
-(void)willReturnToFullscreen:(id)arg1;
-(void)scrollViewControllerWillDismissFullscreen:(id)arg1;
-(void)scrollViewControllerDismissFullscreen:(id)arg1;
-(BOOL)scrollViewController:(id)arg1 shouldOccludeAccessibilityElement:(id)arg2;
-(BOOL)accessibilityShouldScrollForScrollViewController:(id)arg1 defaultValue:(BOOL)arg2;
-(void)scrollViewControllerDidStopScrolling:(id)arg1;
-(void)scrollViewController:(id)arg1 triggerAction:(id)arg2;
-(BOOL)accessibilityShouldScrollForScrollViewController:(id)arg1;

@end

