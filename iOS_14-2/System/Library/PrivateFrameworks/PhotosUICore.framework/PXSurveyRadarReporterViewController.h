/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class OBTrayButton, UILabel, UIButton, NSString;

@interface PXSurveyRadarReporterViewController : OBWelcomeController {

	/*^block*/id __completionHandler;
	OBTrayButton* _notNowButton;
	UILabel* _detailLabel;
	UIButton* _readReleaseAgreementButton;
	NSString* _radarTitle;

}

@property (setter=_setCompletionHandler:,nonatomic,copy) id _completionHandler;              //@synthesize _completionHandler=__completionHandler - In the implementation block
@property (nonatomic,retain) OBTrayButton * notNowButton;                                    //@synthesize notNowButton=_notNowButton - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                                          //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIButton * readReleaseAgreementButton;                          //@synthesize readReleaseAgreementButton=_readReleaseAgreementButton - In the implementation block
@property (nonatomic,retain) NSString * radarTitle;                                          //@synthesize radarTitle=_radarTitle - In the implementation block
-(id)initForPhotosChallengesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRadarTitle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateNotNowButtonColor;
-(void)_didSelectReadReleaseAgreementButton;
-(void)_handleAgreeButton:(id)arg1 ;
-(void)_handleNotNowButton:(id)arg1 ;
-(id)_disclaimerText;
-(OBTrayButton *)notNowButton;
-(void)setNotNowButton:(OBTrayButton *)arg1 ;
-(UIButton *)readReleaseAgreementButton;
-(void)setReadReleaseAgreementButton:(UIButton *)arg1 ;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(NSString *)radarTitle;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(id)_completionHandler;
-(id)attributedDetailText;
-(void)setRadarTitle:(NSString *)arg1 ;
-(UILabel *)detailLabel;
-(void)viewDidLayoutSubviews;
@end

