/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class WFAction, UIColor, NSProgress, UIView, NSString;

@interface WFModuleView : UIView <WFActionEventObserver> {

	BOOL _showing;
	WFAction* _action;
	UIColor* _progressBackgroundColor;
	NSProgress* _progress;
	UIView* _progressView;

}

@property (nonatomic,retain) NSProgress * progress;                          //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic,__weak) UIView * progressView;                   //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic,__weak) WFAction * action;                       //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UIColor * progressBackgroundColor;              //@synthesize progressBackgroundColor=_progressBackgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)accessibilityLabel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSProgress *)progress;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setProgressView:(UIView *)arg1 ;
-(UIView *)progressView;
-(long long)accessibilityContainerType;
-(void)setProgressBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)progressBackgroundColor;
-(void)dealloc;
-(void)actionRunningStateDidChange:(id)arg1 ;
@end

