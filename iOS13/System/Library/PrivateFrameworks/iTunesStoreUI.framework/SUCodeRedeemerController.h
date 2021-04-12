/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CRCodeRedeemerControllerDelegate.h>

@protocol SUCodeRedeemerControllerDelegate;
@class UIVisualEffectView, CRCodeRedeemerController, NSString;

@interface SUCodeRedeemerController : UIViewController <CRCodeRedeemerControllerDelegate> {

	BOOL _cameraflipDirection;
	id<SUCodeRedeemerControllerDelegate> _delegate;
	UIVisualEffectView* _visualEffectView;
	CRCodeRedeemerController* _codeRedeemerController;

}

@property (assign,nonatomic) BOOL cameraflipDirection;                                          //@synthesize cameraflipDirection=_cameraflipDirection - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;                           //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) CRCodeRedeemerController * codeRedeemerController;                 //@synthesize codeRedeemerController=_codeRedeemerController - In the implementation block
@property (assign,nonatomic,__weak) id<SUCodeRedeemerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)cameraSupported;
-(id)init;
-(id<SUCodeRedeemerControllerDelegate>)delegate;
-(void)setDelegate:(id<SUCodeRedeemerControllerDelegate>)arg1 ;
-(void)cancel;
-(void)_setup;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(UIVisualEffectView *)visualEffectView;
-(void)_setChildViewController:(id)arg1 ;
-(void)startSession;
-(void)codeRedeemerController:(id)arg1 didEndWithInfo:(id)arg2 ;
-(void)codeRedeemerControllerDidCancel:(id)arg1 ;
-(void)recognitionError;
-(void)recognitionSuccess;
-(void)toggleCameraWithCompletion:(/*^block*/id)arg1 ;
-(CRCodeRedeemerController *)codeRedeemerController;
-(void)_enableBlur;
-(void)_disableBlur;
-(BOOL)cameraflipDirection;
-(void)setCameraflipDirection:(BOOL)arg1 ;
-(void)_setupCodeRedeemerController;
-(void)_setupFlipVisualEffectView;
-(void)setCodeRedeemerController:(CRCodeRedeemerController *)arg1 ;
@end

