/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_setupTimer;
-(void)viewWillAppear:(BOOL)arg1 ;
-(VUIConfirmationCardView *)cardView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(NSTimer *)dismissTimer;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)dealloc;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)_dismissConfirmation:(id)arg1 ;
@end

