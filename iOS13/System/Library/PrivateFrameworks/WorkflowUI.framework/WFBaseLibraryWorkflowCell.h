/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFBaseCollectionViewCell.h>
#import <libobjc.A.dylib/WFUIKitUserInterface.h>

@protocol WFBaseLibraryWorkflowCellDelegate, WFBaseLibraryWorkflowCellMetrics;
@class WFWorkflowReference, NSString, WFWorkflowIcon, WFLibraryCancelButton, WFFloatingView, CALayer, UIView, UIViewController;

@interface WFBaseLibraryWorkflowCell : WFBaseCollectionViewCell <WFUIKitUserInterface> {

	BOOL _progressing;
	id<WFBaseLibraryWorkflowCellDelegate> _delegate;
	id<WFBaseLibraryWorkflowCellMetrics> _layoutMetrics;
	WFWorkflowReference* _workflowReference;
	NSString* _workflowName;
	NSString* _workflowDescription;
	NSString* _workflowAssociatedAppBundleIdentifier;
	WFWorkflowIcon* _workflowIcon;
	double _progress;
	WFLibraryCancelButton* _cancelButton;
	WFFloatingView* _floatingView;
	CALayer* _iconLayer;
	UIView* _maskedBackgroundView;
	CALayer* _backgroundLayer;

}

@property (nonatomic,readonly) UIView * editButton; 
@property (nonatomic,__weak,readonly) WFLibraryCancelButton * cancelButton;                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) WFFloatingView * floatingView;                                    //@synthesize floatingView=_floatingView - In the implementation block
@property (nonatomic,readonly) CALayer * iconLayer;                                              //@synthesize iconLayer=_iconLayer - In the implementation block
@property (nonatomic,readonly) UIView * maskedBackgroundView;                                    //@synthesize maskedBackgroundView=_maskedBackgroundView - In the implementation block
@property (nonatomic,readonly) CALayer * backgroundLayer;                                        //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (assign,nonatomic,__weak) id<WFBaseLibraryWorkflowCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id<WFBaseLibraryWorkflowCellMetrics> layoutMetrics;                   //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (nonatomic,copy) WFWorkflowReference * workflowReference;                              //@synthesize workflowReference=_workflowReference - In the implementation block
@property (nonatomic,copy) NSString * workflowName;                                              //@synthesize workflowName=_workflowName - In the implementation block
@property (nonatomic,copy) NSString * workflowDescription;                                       //@synthesize workflowDescription=_workflowDescription - In the implementation block
@property (nonatomic,copy) NSString * workflowAssociatedAppBundleIdentifier;                     //@synthesize workflowAssociatedAppBundleIdentifier=_workflowAssociatedAppBundleIdentifier - In the implementation block
@property (nonatomic,copy) WFWorkflowIcon * workflowIcon;                                        //@synthesize workflowIcon=_workflowIcon - In the implementation block
@property (assign,getter=isProgressing,nonatomic) BOOL progressing;                              //@synthesize progressing=_progressing - In the implementation block
@property (nonatomic,readonly) double progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,readonly) UIView * view; 
-(id<WFBaseLibraryWorkflowCellDelegate>)delegate;
-(void)setDelegate:(id<WFBaseLibraryWorkflowCellDelegate>)arg1 ;
-(double)progress;
-(UIView *)view;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIViewController *)viewController;
-(WFLibraryCancelButton *)cancelButton;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)cancelButtonPressed:(id)arg1 ;
-(CALayer *)backgroundLayer;
-(UIView *)editButton;
-(WFFloatingView *)floatingView;
-(void)presentAlert:(id)arg1 ;
-(WFWorkflowIcon *)workflowIcon;
-(void)setWorkflowIcon:(WFWorkflowIcon *)arg1 ;
-(WFWorkflowReference *)workflowReference;
-(id<WFBaseLibraryWorkflowCellMetrics>)layoutMetrics;
-(void)setLayoutMetrics:(id<WFBaseLibraryWorkflowCellMetrics>)arg1 ;
-(void)setWorkflowName:(NSString *)arg1 ;
-(void)setWorkflowDescription:(NSString *)arg1 ;
-(NSString *)workflowName;
-(void)setWorkflowReference:(WFWorkflowReference *)arg1 ;
-(void)setWorkflowAssociatedAppBundleIdentifier:(NSString *)arg1 ;
-(void)updateIconImage;
-(BOOL)isProgressing;
-(NSString *)workflowDescription;
-(NSString *)workflowAssociatedAppBundleIdentifier;
-(void)setProgressing:(BOOL)arg1 ;
-(CALayer *)iconLayer;
-(UIView *)maskedBackgroundView;
@end

