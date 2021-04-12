/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFNumericPageControlDelegate.h>

@protocol WFModulesQuickLookViewDelegate;
@class WFContentCollection, QLPreviewController, UIView, WFNumericPageControl;

@interface WFModulesQuickLookView : UIView <WFNumericPageControlDelegate> {

	WFContentCollection* _content;
	id<WFModulesQuickLookViewDelegate> _delegate;
	QLPreviewController* _previewController;
	UIView* _containerView;
	WFNumericPageControl* _pageControl;
	WFContentCollection* _dataSource;

}

@property (assign,nonatomic,__weak) UIView * containerView;                                   //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) WFNumericPageControl * pageControl;                       //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) WFContentCollection * dataSource;                                //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) WFContentCollection * content;                                   //@synthesize content=_content - In the implementation block
@property (assign,nonatomic,__weak) id<WFModulesQuickLookViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) QLPreviewController * previewController;                       //@synthesize previewController=_previewController - In the implementation block
-(void)dealloc;
-(id<WFModulesQuickLookViewDelegate>)delegate;
-(void)setDelegate:(id<WFModulesQuickLookViewDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(WFContentCollection *)dataSource;
-(void)setDataSource:(WFContentCollection *)arg1 ;
-(WFContentCollection *)content;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(WFNumericPageControl *)pageControl;
-(void)setPageControl:(WFNumericPageControl *)arg1 ;
-(void)setContent:(WFContentCollection *)arg1 ;
-(QLPreviewController *)previewController;
-(void)numericPageControl:(id)arg1 changedPageTo:(long long)arg2 ;
-(void)fullscreenPressed;
-(void)sharePressed:(id)arg1 ;
@end

