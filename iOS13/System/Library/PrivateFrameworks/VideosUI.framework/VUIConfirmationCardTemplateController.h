/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>

@class IKViewElement, NSTimer, VUIConfirmationCardView;

@interface VUIConfirmationCardTemplateController : UIViewController {

	BOOL _setTimer;
	IKViewElement* _viewElement;
	NSTimer* _dismissTimer;

}

@property (nonatomic,retain) IKViewElement * viewElement;                       //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) NSTimer * dismissTimer;                          //@synthesize dismissTimer=_dismissTimer - In the implementation block
@property (nonatomic,readonly) VUIConfirmationCardView * cardView; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(VUIConfirmationCardView *)cardView;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)_setupTimer;
-(void)updateWithViewElement:(id)arg1 ;
-(void)_dismissConfirmation:(id)arg1 ;
-(NSTimer *)dismissTimer;
@end

