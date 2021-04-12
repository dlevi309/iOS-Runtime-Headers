/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <SiriUI/SiriUIContentPlatterViewControllerContaining.h>

@class SiriUIContentPlatterViewController, UIViewController, NSString;

@interface SiriUINavigationContentViewController : UIViewController <SiriUIContentPlatterViewControllerContaining> {

	UIViewController* _contentViewController;

}

@property (nonatomic,retain) UIViewController * contentViewController;                                         //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,getter=isContentLayoutEnabled,nonatomic) BOOL contentLayoutEnabled; 
@property (nonatomic,readonly) SiriUIContentPlatterViewController * contentPlatterViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)contentViewController;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)loadView;
-(id)title;
-(BOOL)isContentLayoutEnabled;
-(void)setContentLayoutEnabled:(BOOL)arg1 ;
-(id)_navigationContentView;
-(SiriUIContentPlatterViewController *)contentPlatterViewController;
-(BOOL)hasContentAtPoint:(CGPoint)arg1 ;
-(void)contentViewDidUpdateSize;
@end

