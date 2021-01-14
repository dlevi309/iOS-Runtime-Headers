/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
*/

#import <WorkflowUIServices/WorkflowUIServices-Structs.h>
#import <WorkflowUIServices/WFWidgetFloatingView.h>

@protocol WFWidgetCellDelegate;
@class NSString, NSProgress, WFWidgetFloatingViewConfiguration, UITextView, UIImageView, WFWorkflowProgressView, NSTimer;

@interface WFWidgetCell : WFWidgetFloatingView {

	BOOL _enabled;
	BOOL _completingSuccessfully;
	BOOL _isRTL;
	id<WFWidgetCellDelegate> _delegate;
	NSString* _workflowIdentifier;
	NSProgress* _progress;
	long long _runningState;
	WFWidgetFloatingViewConfiguration* _currentConfiguration;
	UITextView* _nameView;
	UIImageView* _iconView;
	WFWorkflowProgressView* _progressView;
	NSTimer* _clearCompletedTimer;
	CGSize _iconViewSize;

}

@property (nonatomic,retain) WFWidgetFloatingViewConfiguration * currentConfiguration;              //@synthesize currentConfiguration=_currentConfiguration - In the implementation block
@property (assign,nonatomic) BOOL isRTL;                                                            //@synthesize isRTL=_isRTL - In the implementation block
@property (nonatomic,retain) UITextView * nameView;                                                 //@synthesize nameView=_nameView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                                //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) CGSize iconViewSize;                                                   //@synthesize iconViewSize=_iconViewSize - In the implementation block
@property (nonatomic,readonly) WFWorkflowProgressView * progressView;                               //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NSTimer * clearCompletedTimer;                                         //@synthesize clearCompletedTimer=_clearCompletedTimer - In the implementation block
@property (assign,nonatomic,__weak) id<WFWidgetCellDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * workflowIdentifier;                                  //@synthesize workflowIdentifier=_workflowIdentifier - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                 //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long runningState;                                                //@synthesize runningState=_runningState - In the implementation block
@property (assign,nonatomic) BOOL completingSuccessfully;                                           //@synthesize completingSuccessfully=_completingSuccessfully - In the implementation block
-(BOOL)enabled;
-(CGSize)iconViewSize;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(id)init;
-(id<WFWidgetCellDelegate>)delegate;
-(BOOL)isRTL;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setNameView:(UITextView *)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setIsRTL:(BOOL)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<WFWidgetCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)iconView;
-(void)setCurrentConfiguration:(WFWidgetFloatingViewConfiguration *)arg1 ;
-(void)setIconView:(UIImageView *)arg1 ;
-(WFWidgetFloatingViewConfiguration *)currentConfiguration;
-(void)setRunningState:(long long)arg1 ;
-(UITextView *)nameView;
-(void)setProgress:(NSProgress *)arg1 ;
-(WFWorkflowProgressView *)progressView;
-(void)handleTap:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isMultiline;
-(long long)runningState;
-(NSString *)workflowIdentifier;
-(void)configureWithWorkflow:(id)arg1 cornerRadius:(double)arg2 sizeClass:(unsigned long long)arg3 ;
-(BOOL)touchIsInView:(id)arg1 event:(id)arg2 ;
-(BOOL)touchesContainNonIndirectTouch:(id)arg1 ;
-(void)resetToEmptyState;
-(void)resetProgressState;
-(BOOL)completingSuccessfully;
-(void)setCompletingSuccessfully:(BOOL)arg1 ;
-(void)setIconViewSize:(CGSize)arg1 ;
-(NSTimer *)clearCompletedTimer;
-(void)setClearCompletedTimer:(NSTimer *)arg1 ;
@end

