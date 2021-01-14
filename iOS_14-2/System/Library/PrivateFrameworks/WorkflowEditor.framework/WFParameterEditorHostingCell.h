/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/CKComponentProvider.h>
#import <libobjc.A.dylib/CKComponentHostingViewDelegate.h>
#import <libobjc.A.dylib/WFParameterEventObserver.h>

@protocol WFParameterEditorHostingCellDelegate;
@class UIViewController, WFParameterEditorModel, CKComponentHostingView, NSString;

@interface WFParameterEditorHostingCell : UITableViewCell <CKComponentProvider, CKComponentHostingViewDelegate, WFParameterEventObserver> {

	id<WFParameterEditorHostingCellDelegate> _delegate;
	UIViewController* _containingViewController;
	WFParameterEditorModel* _model;
	CKComponentHostingView* _hostingView;
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
-(WFParameterEditorModel *)model;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setHostingView:(CKComponentHostingView *)arg1 ;
-(id<WFParameterEditorHostingCellDelegate>)delegate;
-(void)setDelegate:(id<WFParameterEditorHostingCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setModel:(WFParameterEditorModel *)arg1 ;
-(CKComponentHostingView *)hostingView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateContext;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateModel:(id)arg1 ;
-(void)parameterAttributesDidChange:(id)arg1 ;
-(UIViewController *)containingViewController;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)setContainingViewController:(UIViewController *)arg1 ;
-(void)updatedParameterState:(id)arg1 ;
-(double)lastWidth;
-(void)setLastWidth:(double)arg1 ;
@end

