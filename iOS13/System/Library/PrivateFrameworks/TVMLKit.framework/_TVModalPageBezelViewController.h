/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIColor, UIViewController;

@interface _TVModalPageBezelViewController : UIViewController {

	double _bezelCornerRadius;
	UIColor* _bezelBackgroundColor;
	UIViewController* _contentViewController;
	CGSize _contentSize;

}

@property (assign,nonatomic) double bezelCornerRadius;                              //@synthesize bezelCornerRadius=_bezelCornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * bezelBackgroundColor;                        //@synthesize bezelBackgroundColor=_bezelBackgroundColor - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                    //@synthesize contentSize=_contentSize - In the implementation block
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(UIViewController *)contentViewController;
-(void)viewDidLayoutSubviews;
-(void)setBezelCornerRadius:(double)arg1 ;
-(void)setBezelBackgroundColor:(UIColor *)arg1 ;
-(double)bezelCornerRadius;
-(UIColor *)bezelBackgroundColor;
@end

