/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UIViewController.h>

@class NSString, UILabel, UIActivityIndicatorView;

@interface WFChooseNetworkHeaderViewController : UIViewController {

	BOOL _animating;
	NSString* _title;
	UILabel* _label;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (assign,nonatomic,__weak) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,copy) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL animating;                                                      //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label;                                              //@synthesize label=_label - In the implementation block
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)animating;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
@end

