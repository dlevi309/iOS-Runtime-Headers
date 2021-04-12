/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUIBaseTemplateViewController.h>
#import <SiriUI/SiriUIMapTemplateViewDelegate.h>

@class SiriUIMapTemplateView, NSString;

@interface SiriUIMapTemplateViewController : SiriUIBaseTemplateViewController <SiriUIMapTemplateViewDelegate>

@property (nonatomic,retain) SiriUIMapTemplateView * view; 
@property (nonatomic,retain) id<SiriUIMapTemplateModel> templateModel; 
@property (assign,nonatomic,__weak) id<SiriUIMapTemplateViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)prepareForDismissal;
-(Class)templateViewClass;
-(void)mapTemplateView:(id)arg1 didModifyPlacemark:(id)arg2 ;
-(void)mapTemplateViewDidSelectMap:(id)arg1 ;
@end

