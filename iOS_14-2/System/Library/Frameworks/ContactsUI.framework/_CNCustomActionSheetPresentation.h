/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIActionSheetPresentationControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/CNCustomPresentation.h>

@class UIView, UIViewController, NSString;

@interface _CNCustomActionSheetPresentation : NSObject <UIActionSheetPresentationControllerDelegate, UIViewControllerTransitioningDelegate, CNCustomPresentation> {

	UIView* _sourceView;
	/*^block*/id _dismissHandler;
	UIViewController* _viewController;
	unsigned long long _permittedArrowDirections;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UIView * sourceView;                                      //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                        //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,copy) id dismissHandler;                                          //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                        //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) unsigned long long permittedArrowDirections;              //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewController:(UIViewController *)arg1 ;
-(void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setDismissHandler:(id)arg1 ;
-(UIView *)sourceView;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)prepareForPresentationOfController:(id)arg1 ;
-(id)dismissHandler;
-(UIViewController *)viewController;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(CGRect)sourceRect;
-(unsigned long long)permittedArrowDirections;
-(void)setPermittedArrowDirections:(unsigned long long)arg1 ;
-(id)presentedViewController;
@end

