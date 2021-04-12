/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
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
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(WFAction *)action;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(long long)accessibilityContainerType;
-(void)layoutSubviews;
-(void)setAction:(WFAction *)arg1 ;
-(void)setProgressBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)progressBackgroundColor;
-(UIView *)progressView;
-(void)setProgressView:(UIView *)arg1 ;
-(void)actionRunningStateDidChange:(id)arg1 ;
@end

