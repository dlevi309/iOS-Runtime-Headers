/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIInputViewController.h>

@class UIViewController, NSString;

@interface CKKeyboardContentViewController : UIInputViewController {

	UIViewController* _viewController;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)viewDidLoad;
-(id)initWithViewController:(id)arg1 identifier:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)loadView;
-(NSString *)identifier;
-(void)viewDidLayoutSubviews;
@end

