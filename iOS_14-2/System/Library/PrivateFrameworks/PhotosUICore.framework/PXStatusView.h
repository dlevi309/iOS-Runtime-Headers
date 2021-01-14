/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXStatusViewDelegate;
@class PXContentUnavailableView, PXStatusViewModel, UIAlertController, NSString;

@interface PXStatusView : UIView <PXChangeObserver> {

	PXContentUnavailableView* _contentUnavailabilityView;
	PXStatusViewModel* _viewModel;
	id<PXStatusViewDelegate> _delegate;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) UIAlertController * alertController;                   //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) PXStatusViewModel * viewModel;                         //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<PXStatusViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateTitle;
-(id)init;
-(id<PXStatusViewDelegate>)delegate;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(PXStatusViewModel *)viewModel;
-(UIAlertController *)alertController;
-(void)setDelegate:(id<PXStatusViewDelegate>)arg1 ;
-(void)setViewModel:(PXStatusViewModel *)arg1 ;
-(void)_updateButtonTitle;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)_updateMessage;
-(void)_handleButtonAction;
-(id)test_title;
-(id)test_message;
-(id)test_actionTitle;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

