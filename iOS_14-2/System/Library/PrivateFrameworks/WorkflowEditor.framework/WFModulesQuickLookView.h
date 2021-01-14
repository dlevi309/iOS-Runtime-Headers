/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setContainerView:(UIView *)arg1 ;
-(WFContentCollection *)content;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContent:(WFContentCollection *)arg1 ;
-(id<WFModulesQuickLookViewDelegate>)delegate;
-(WFContentCollection *)dataSource;
-(void)setDelegate:(id<WFModulesQuickLookViewDelegate>)arg1 ;
-(void)setDataSource:(WFContentCollection *)arg1 ;
-(void)setPageControl:(WFNumericPageControl *)arg1 ;
-(UIView *)containerView;
-(QLPreviewController *)previewController;
-(WFNumericPageControl *)pageControl;
-(void)dealloc;
-(void)numericPageControl:(id)arg1 changedPageTo:(long long)arg2 ;
-(void)fullscreenPressed;
-(void)sharePressed:(id)arg1 ;
@end

