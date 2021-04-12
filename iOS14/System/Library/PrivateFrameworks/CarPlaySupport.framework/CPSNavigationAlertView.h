/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL useRightHandDriveFocusGuide; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CPSAbridgableLabel *)titleLabel;
-(void)setSubtitleLabel:(CPSAbridgableLabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(CPSAbridgableLabel *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)preferredFocusEnvironments;
-(UIImageView *)imageView;
-(CPSAbridgableLabel *)subtitleLabel;
-(CPNavigationAlert *)navigationAlert;
-(void)startAnimating;
-(void)setProgressView:(CPSNavigationAlertProgressView *)arg1 ;
-(void)setButtonView:(CPSNavigationAlertButtonView *)arg1 ;
-(CPSNavigationAlertProgressView *)progressView;
-(CPSNavigationAlertButtonView *)buttonView;
-(void)updateNavigationAlert:(id)arg1 ;
-(id)_linearFocusItems;
-(id)initWithFrame:(CGRect)arg1 navigationAlert:(id)arg2 templateDelegate:(id)arg3 buttonDelegate:(id)arg4 ;
@end

