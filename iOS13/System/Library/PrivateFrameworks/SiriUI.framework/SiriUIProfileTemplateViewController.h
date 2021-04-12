/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUIBaseTemplateViewController.h>
#import <SiriUI/SiriUILabelStackTemplateViewDelegate.h>

@class SiriUIProfileTemplateView, NSString;

@interface SiriUIProfileTemplateViewController : SiriUIBaseTemplateViewController <SiriUILabelStackTemplateViewDelegate>

@property (nonatomic,retain) id<SiriUIProfileTemplateModel> templateModel; 
@property (nonatomic,retain) SiriUIProfileTemplateView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(Class)templateViewClass;
-(BOOL)labelStackTemplateViewShouldLayoutCompressed:(id)arg1 ;
@end

