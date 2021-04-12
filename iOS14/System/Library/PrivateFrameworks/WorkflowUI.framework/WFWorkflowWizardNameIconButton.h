/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFIconButton.h>

@class WFWorkflowIcon, NSData, UIImageView;

@interface WFWorkflowWizardNameIconButton : WFIconButton {

	WFWorkflowIcon* _icon;
	NSData* _customImageData;
	UIImageView* _backgroundImageView;

}

@property (assign,nonatomic,__weak) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,readonly) WFWorkflowIcon * icon;                               //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSData * customImageData;                            //@synthesize customImageData=_customImageData - In the implementation block
-(UIImageView *)backgroundImageView;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(WFWorkflowIcon *)icon;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(NSData *)customImageData;
-(void)redrawIcon;
-(void)setIcon:(id)arg1 customImageData:(id)arg2 ;
@end

