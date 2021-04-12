/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAnimating:(BOOL)arg1 ;
-(id)init;
-(BOOL)animating;
-(void)setTitle:(NSString *)arg1 ;
-(void)viewDidLoad;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)label;
-(NSString *)title;
@end

