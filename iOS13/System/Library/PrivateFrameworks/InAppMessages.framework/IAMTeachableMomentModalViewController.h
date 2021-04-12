/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <UIKitCore/UIViewController.h>

@protocol IAMViewControllerMetricsDelegate;
@class IAMModalBackground, ICIAMMessageContent, AVPlayerLooper, CAGradientLayer, UIView, UIStackView;

@interface IAMTeachableMomentModalViewController : UIViewController {

	IAMModalBackground* _background;
	ICIAMMessageContent* _content;
	id<IAMViewControllerMetricsDelegate> _metricsDelegate;
	AVPlayerLooper* _looper;
	CAGradientLayer* _backgroundGradientLayer;
	UIView* _assetView;
	UIStackView* _ctaStackView;

}

@property (nonatomic,retain) AVPlayerLooper * looper;                                                  //@synthesize looper=_looper - In the implementation block
@property (nonatomic,retain) CAGradientLayer * backgroundGradientLayer;                                //@synthesize backgroundGradientLayer=_backgroundGradientLayer - In the implementation block
@property (nonatomic,retain) UIView * assetView;                                                       //@synthesize assetView=_assetView - In the implementation block
@property (nonatomic,retain) UIStackView * ctaStackView;                                               //@synthesize ctaStackView=_ctaStackView - In the implementation block
@property (nonatomic,retain) IAMModalBackground * background;                                          //@synthesize background=_background - In the implementation block
@property (nonatomic,retain) ICIAMMessageContent * content;                                            //@synthesize content=_content - In the implementation block
@property (assign,nonatomic,__weak) id<IAMViewControllerMetricsDelegate> metricsDelegate;              //@synthesize metricsDelegate=_metricsDelegate - In the implementation block
-(id)init;
-(IAMModalBackground *)background;
-(ICIAMMessageContent *)content;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)setBackground:(IAMModalBackground *)arg1 ;
-(void)setContent:(ICIAMMessageContent *)arg1 ;
-(void)setAssetView:(UIView *)arg1 ;
-(UIView *)assetView;
-(AVPlayerLooper *)looper;
-(void)setLooper:(AVPlayerLooper *)arg1 ;
-(void)setMetricsDelegate:(id<IAMViewControllerMetricsDelegate>)arg1 ;
-(id<IAMViewControllerMetricsDelegate>)metricsDelegate;
-(void)setBackgroundGradientLayer:(CAGradientLayer *)arg1 ;
-(CAGradientLayer *)backgroundGradientLayer;
-(void)setCtaStackView:(UIStackView *)arg1 ;
-(UIStackView *)ctaStackView;
-(void)_handleBackgroundTapGesture:(id)arg1 ;
@end

