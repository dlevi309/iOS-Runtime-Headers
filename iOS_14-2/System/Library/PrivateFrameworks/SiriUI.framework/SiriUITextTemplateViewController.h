/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

