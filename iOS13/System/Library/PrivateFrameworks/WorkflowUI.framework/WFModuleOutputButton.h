/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIButton.h>

@class WFModuleOutputModel;

@interface WFModuleOutputButton : UIButton {

	WFModuleOutputModel* _model;

}

@property (nonatomic,retain) WFModuleOutputModel * model;              //@synthesize model=_model - In the implementation block
-(WFModuleOutputModel *)model;
-(void)setModel:(WFModuleOutputModel *)arg1 ;
-(void)tintColorDidChange;
-(void)updateImages;
@end

