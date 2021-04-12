/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFCompactDialogViewController.h>
#import <libobjc.A.dylib/WFCompactContentPreviewViewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>

@class WFCompactHighlightedView, WFCompactContentPreviewViewController, WFContentCollection, NSString;

@interface WFShowContentDialogViewController : WFCompactDialogViewController <WFCompactContentPreviewViewControllerDelegate, QLPreviewControllerDelegate> {

	WFCompactHighlightedView* _highlightView;
	WFCompactContentPreviewViewController* _previewViewController;
	WFContentCollection* _dataSource;

}

@property (assign,nonatomic,__weak) WFCompactHighlightedView * highlightView;                            //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) WFCompactContentPreviewViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,retain) WFContentCollection * dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setHighlightView:(WFCompactHighlightedView *)arg1 ;
-(WFCompactHighlightedView *)highlightView;
-(void)handleTapGesture:(id)arg1 ;
-(WFContentCollection *)dataSource;
-(void)setDataSource:(WFContentCollection *)arg1 ;
-(void)loadView;
-(void)setPreviewViewController:(WFCompactContentPreviewViewController *)arg1 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(WFCompactContentPreviewViewController *)previewViewController;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 ;
-(double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2 ;
-(id)sourceViewForQuickLook;
-(double)targetHeightForAnimatingPreviewViewController:(id)arg1 toProposedHeight:(double)arg2 ;
-(void)previewViewControllerDidInvalidateSize:(id)arg1 ;
-(double)contentHeightWithPreferredHeight:(double)arg1 maxVisibleHeight:(double)arg2 ;
-(void)updateActions;
-(void)presentFullScreenPreview;
@end

