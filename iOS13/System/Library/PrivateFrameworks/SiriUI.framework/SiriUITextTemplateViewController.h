/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUITemplateViewController.h>
#import <SiriUI/SiriUILabelStackTemplateViewDelegate.h>

@class SiriUITextTemplateView, NSString;

@interface SiriUITextTemplateViewController : SiriUITemplateViewController <SiriUILabelStackTemplateViewDelegate>

@property (nonatomic,retain) SiriUITextTemplateView * view; 
@property (nonatomic,retain) id<SiriUITextTemplateModel> templateModel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(BOOL)labelStackTemplateViewShouldLayoutCompressed:(id)arg1 ;
-(void)_textTemplateViewDisclosed:(id)arg1 ;
@end

