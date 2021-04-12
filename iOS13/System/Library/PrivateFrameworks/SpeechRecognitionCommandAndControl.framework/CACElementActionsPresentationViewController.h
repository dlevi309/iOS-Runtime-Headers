/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/CACViewController.h>

@protocol CACElementActionsPresentationViewControllerDelegate;
@class AXElement, UIAlertController, NSString;

@interface CACElementActionsPresentationViewController : UIViewController <UIPopoverPresentationControllerDelegate, CACViewController> {

	AXElement* _element;
	id<CACElementActionsPresentationViewControllerDelegate> _elementActionsDelegate;
	UIAlertController* _alertController;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UIAlertController * alertController;                                                                //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic,__weak) id<CACElementActionsPresentationViewControllerDelegate> elementActionsDelegate;              //@synthesize elementActionsDelegate=_elementActionsDelegate - In the implementation block
@property (nonatomic,retain) AXElement * element;                                                                                //@synthesize element=_element - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                                                                  //@synthesize sourceRect=_sourceRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long zOrder; 
@property (nonatomic,readonly) BOOL isOverlay; 
+(BOOL)canShowElementActionsForElement:(id)arg1 ;
+(id)_elementActionManager;
-(id)init;
-(AXElement *)element;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGRect)sourceRect;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(BOOL)isOverlay;
-(void)setElement:(AXElement *)arg1 ;
-(long long)zOrder;
-(void)setElementActionsDelegate:(id<CACElementActionsPresentationViewControllerDelegate>)arg1 ;
-(id)actionForAXAction:(id)arg1 ;
-(void)performHideWithCompletion:(/*^block*/id)arg1 ;
-(id<CACElementActionsPresentationViewControllerDelegate>)elementActionsDelegate;
@end

