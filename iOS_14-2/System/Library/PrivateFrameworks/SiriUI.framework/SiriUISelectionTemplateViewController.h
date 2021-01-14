/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUISettingTemplateViewController.h>

@class SiriUISelectionTemplateView;

@interface SiriUISelectionTemplateViewController : SiriUISettingTemplateViewController

@property (assign,nonatomic,__weak) id<SiriUISelectionTemplateViewControllerDelegate> delegate; 
@property (nonatomic,retain) id<SiriUISelectionTemplateModel> templateModel; 
@property (nonatomic,retain) SiriUISelectionTemplateView * view; 
@property (assign,nonatomic) BOOL selected; 
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)loadView;
-(Class)templateViewClass;
-(void)_didSelectChoiceFromSender:(id)arg1 ;
@end

