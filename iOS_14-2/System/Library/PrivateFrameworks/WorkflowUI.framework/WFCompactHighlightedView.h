/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>

@class NSArray, UIView, NSString;

@interface WFCompactHighlightedView : UIView <MTVisualStylingRequiring> {

	UIView* _contentView;
	UIView* _backgroundView;
	UIView* _contentDimmingView;

}

@property (assign,nonatomic,__weak) UIView * backgroundView;                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) UIView * contentDimmingView;                          //@synthesize contentDimmingView=_contentDimmingView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(NSArray *)requiredVisualStyleCategories;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setContentDimmingView:(UIView *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)didAddSubview:(id)arg1 ;
-(UIView *)contentView;
-(UIView *)contentDimmingView;
@end

