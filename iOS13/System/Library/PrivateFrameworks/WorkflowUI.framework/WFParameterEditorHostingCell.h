/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/CKComponentProvider.h>
#import <libobjc.A.dylib/CKComponentHostingViewDelegate.h>
#import <libobjc.A.dylib/WFParameterEventObserver.h>

@protocol WFParameterEditorHostingCellDelegate;
@class UIViewController, CKComponentHostingView, WFParameterEditorModel, NSString;

@interface WFParameterEditorHostingCell : UITableViewCell <CKComponentProvider, CKComponentHostingViewDelegate, WFParameterEventObserver> {

	id<WFParameterEditorHostingCellDelegate> _delegate;
	UIViewController* _containingViewController;
	CKComponentHostingView* _hostingView;
	WFParameterEditorModel* _model;
	double _lastWidth;

}

@property (assign,nonatomic,__weak) CKComponentHostingView * hostingView;                           //@synthesize hostingView=_hostingView - In the implementation block
@property (nonatomic,retain) WFParameterEditorModel * model;                                        //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) double lastWidth;                                                      //@synthesize lastWidth=_lastWidth - In the implementation block
@property (assign,nonatomic,__weak) id<WFParameterEditorHostingCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * containingViewController;                    //@synthesize containingViewController=_containingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(id<WFParameterEditorHostingCellDelegate>)delegate;
-(void)setDelegate:(id<WFParameterEditorHostingCellDelegate>)arg1 ;
-(WFParameterEditorModel *)model;
-(void)setModel:(WFParameterEditorModel *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CKComponentHostingView *)hostingView;
-(void)setHostingView:(CKComponentHostingView *)arg1 ;
-(void)parameterAttributesDidChange:(id)arg1 ;
-(void)setContainingViewController:(UIViewController *)arg1 ;
-(UIViewController *)containingViewController;
-(void)updateModel:(id)arg1 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)component:(id)arg1 updatedParameterState:(id)arg2 ;
-(double)lastWidth;
-(void)setLastWidth:(double)arg1 ;
@end

