/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFImportQuestionViewControllerDelegate.h>

@protocol WFGalleryImportQuestionViewDelegate;
@class WFImportQuestionViewController, NSString;

@interface WFGalleryImportQuestionView : UIView <WFImportQuestionViewControllerDelegate> {

	id<WFGalleryImportQuestionViewDelegate> _delegate;
	WFImportQuestionViewController* _importQuestionViewController;
	CGSize _contentSize;

}

@property (nonatomic,retain) WFImportQuestionViewController * importQuestionViewController;              //@synthesize importQuestionViewController=_importQuestionViewController - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                         //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic,__weak) id<WFGalleryImportQuestionViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(id<WFGalleryImportQuestionViewDelegate>)delegate;
-(CGSize)contentSize;
-(void)setDelegate:(id<WFGalleryImportQuestionViewDelegate>)arg1 ;
-(WFImportQuestionViewController *)importQuestionViewController;
-(void)setImportQuestionViewController:(WFImportQuestionViewController *)arg1 ;
-(void)importQuestionViewController:(id)arg1 didChangeContentSize:(CGSize)arg2 ;
-(id)initWithImportQuestion:(id)arg1 presenter:(id)arg2 ;
@end

