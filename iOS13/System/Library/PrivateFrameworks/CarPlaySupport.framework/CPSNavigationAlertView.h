/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CPSLinearFocusProviding.h>

@class CPNavigationAlert, CPSAbridgableLabel, UIImageView, CPSNavigationAlertButtonView, CPSNavigationAlertProgressView, NSString;

@interface CPSNavigationAlertView : UIView <CPSLinearFocusProviding> {

	CPNavigationAlert* _navigationAlert;
	CPSAbridgableLabel* _titleLabel;
	CPSAbridgableLabel* _subtitleLabel;
	UIImageView* _imageView;
	CPSNavigationAlertButtonView* _buttonView;
	CPSNavigationAlertProgressView* _progressView;

}

@property (nonatomic,retain) CPSAbridgableLabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * subtitleLabel;                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) CPSNavigationAlertButtonView * buttonView;                  //@synthesize buttonView=_buttonView - In the implementation block
@property (nonatomic,retain) CPSNavigationAlertProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) CPNavigationAlert * navigationAlert;                      //@synthesize navigationAlert=_navigationAlert - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(CPSAbridgableLabel *)titleLabel;
-(id)preferredFocusEnvironments;
-(UIImageView *)imageView;
-(void)setTitleLabel:(CPSAbridgableLabel *)arg1 ;
-(void)startAnimating;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setSubtitleLabel:(CPSAbridgableLabel *)arg1 ;
-(CPSAbridgableLabel *)subtitleLabel;
-(CPNavigationAlert *)navigationAlert;
-(CPSNavigationAlertProgressView *)progressView;
-(void)setProgressView:(CPSNavigationAlertProgressView *)arg1 ;
-(CPSNavigationAlertButtonView *)buttonView;
-(void)setButtonView:(CPSNavigationAlertButtonView *)arg1 ;
-(void)updateNavigationAlert:(id)arg1 ;
-(id)_linearFocusItems;
-(id)initWithFrame:(CGRect)arg1 navigationAlert:(id)arg2 templateDelegate:(id)arg3 buttonDelegate:(id)arg4 ;
@end

