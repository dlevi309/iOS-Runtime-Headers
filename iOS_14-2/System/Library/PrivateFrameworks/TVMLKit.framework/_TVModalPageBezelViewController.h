/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)contentSize;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)contentViewController;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setBezelCornerRadius:(double)arg1 ;
-(void)setBezelBackgroundColor:(UIColor *)arg1 ;
-(double)bezelCornerRadius;
-(UIColor *)bezelBackgroundColor;
@end

