/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class WFWorkflowIcon, NSData, UIImageView;

@interface WFWorkflowWizardNameIconButton : UIButton {

	WFWorkflowIcon* _icon;
	NSData* _customImageData;
	UIImageView* _backgroundImageView;

}

@property (assign,nonatomic,__weak) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,readonly) WFWorkflowIcon * icon;                               //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSData * customImageData;                            //@synthesize customImageData=_customImageData - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(WFWorkflowIcon *)icon;
-(UIImageView *)backgroundImageView;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(NSData *)customImageData;
-(void)setIcon:(id)arg1 customImageData:(id)arg2 ;
@end

