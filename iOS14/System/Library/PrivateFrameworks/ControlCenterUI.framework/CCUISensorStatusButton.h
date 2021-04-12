/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSString, CCUISensorActivityData, UILabel, UIView, UIImageView;

@interface CCUISensorStatusButton : UIButton {

	NSString* _bundleIdentifier;
	CCUISensorActivityData* _sensorActivityData;
	UILabel* _descriptionLabel;
	UIView* _indicatorView;
	UIImageView* _settingsLaunchIndicatorImageView;

}

@property (nonatomic,copy) CCUISensorActivityData * sensorActivityData;                   //@synthesize sensorActivityData=_sensorActivityData - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                  //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIView * indicatorView;                                      //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,retain) UIImageView * settingsLaunchIndicatorImageView;              //@synthesize settingsLaunchIndicatorImageView=_settingsLaunchIndicatorImageView - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(id)_imageSymbolConfiguration;
-(BOOL)scalesLargeContentImage;
-(NSString *)bundleIdentifier;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)showsLargeContentViewer;
-(UIView *)indicatorView;
-(void)setIndicatorView:(UIView *)arg1 ;
-(id)largeContentTitle;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithSensorActivityData:(id)arg1 ;
-(double)_indicatorsWidth;
-(void)_configureDescriptionLabelIfNecessary;
-(void)_configureIndicatorViewIfNecessary;
-(void)_configureSettingsLaunchIndicatorImageView;
-(void)_layoutIndicatorViewIfNecessary;
-(void)_layoutDescriptionLabelIfNecessary;
-(void)_layoutSettingsLaunchIndicatorImageView;
-(id)_cameraIndicatorImage;
-(id)_micIndicatorImage;
-(id)_plainCircleImage;
-(id)_fontForTitleLabel;
-(id)sensorDescription;
-(id)_rightChevronImage;
-(CCUISensorActivityData *)sensorActivityData;
-(void)setSensorActivityData:(CCUISensorActivityData *)arg1 ;
-(UIImageView *)settingsLaunchIndicatorImageView;
-(void)setSettingsLaunchIndicatorImageView:(UIImageView *)arg1 ;
@end

