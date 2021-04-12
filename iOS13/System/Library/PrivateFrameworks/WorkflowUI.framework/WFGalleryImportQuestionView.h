/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<WFGalleryImportQuestionViewDelegate>)delegate;
-(void)setDelegate:(id<WFGalleryImportQuestionViewDelegate>)arg1 ;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(WFImportQuestionViewController *)importQuestionViewController;
-(void)setImportQuestionViewController:(WFImportQuestionViewController *)arg1 ;
-(void)importQuestionViewController:(id)arg1 didChangeContentSize:(CGSize)arg2 ;
-(id)initWithImportQuestion:(id)arg1 presenter:(id)arg2 ;
@end

