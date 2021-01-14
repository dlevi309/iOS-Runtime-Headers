/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <NewsArticles/NewsArticles-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@interface NewsArticles.TextSizeControlViewController : UIViewController <UIPopoverPresentationControllerDelegate> {

	 commandCenter;
	 tracker;
	 styler;
	 divider;
	 stackView;
	 increaseButton;
	 increaseAction;
	 decreaseButton;
	 decreaseAction;

}

@property (assign,nonatomic) CGSize preferredContentSize; 
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

