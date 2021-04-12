/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUISettingTemplateViewController.h>

@class SiriUISelectionTemplateView;

@interface SiriUISelectionTemplateViewController : SiriUISettingTemplateViewController

@property (assign,nonatomic,__weak) id<SiriUISelectionTemplateViewControllerDelegate> delegate; 
@property (nonatomic,retain) id<SiriUISelectionTemplateModel> templateModel; 
@property (nonatomic,retain) SiriUISelectionTemplateView * view; 
@property (assign,nonatomic) BOOL selected; 
-(void)loadView;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(Class)templateViewClass;
-(void)_didSelectChoiceFromSender:(id)arg1 ;
@end

