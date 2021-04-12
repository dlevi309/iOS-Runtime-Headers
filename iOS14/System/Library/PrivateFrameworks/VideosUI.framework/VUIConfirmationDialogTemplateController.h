/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_setupTimer;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(NSTimer *)dismissTimer;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)dealloc;
-(void)updateWithViewElement:(id)arg1 ;
-(void)_dismissConfirmation:(id)arg1 ;
-(VUIConfirmationDialogTemplateView *)templateView;
@end

