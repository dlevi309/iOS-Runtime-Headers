/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>

@class NSTimer, VUIConfirmationDialogTemplateView;

@interface VUIConfirmationDialogTemplateController : UIViewController {

	BOOL _setTimer;
	NSTimer* _dismissTimer;

}

@property (nonatomic,readonly) NSTimer * dismissTimer;                                        //@synthesize dismissTimer=_dismissTimer - In the implementation block
@property (nonatomic,readonly) VUIConfirmationDialogTemplateView * templateView; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_setupTimer;
-(VUIConfirmationDialogTemplateView *)templateView;
-(void)updateWithViewElement:(id)arg1 ;
-(void)_dismissConfirmation:(id)arg1 ;
-(NSTimer *)dismissTimer;
@end

