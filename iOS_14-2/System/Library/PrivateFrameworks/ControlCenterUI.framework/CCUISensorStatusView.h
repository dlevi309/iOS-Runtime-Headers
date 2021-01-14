/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CCUISensorStatusButton;

@interface CCUISensorStatusView : UIView {

	BOOL _displayingSensorStatus;
	CCUISensorStatusButton* _cameraSensorStatusButton;
	CCUISensorStatusButton* _micSensorStatusButton;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) CCUISensorStatusButton * cameraSensorStatusButton;                        //@synthesize cameraSensorStatusButton=_cameraSensorStatusButton - In the implementation block
@property (nonatomic,retain) CCUISensorStatusButton * micSensorStatusButton;                           //@synthesize micSensorStatusButton=_micSensorStatusButton - In the implementation block
@property (assign,getter=isDisplayingSensorStatus,nonatomic) BOOL displayingSensorStatus;              //@synthesize displayingSensorStatus=_displayingSensorStatus - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                  //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)resetStatusForSensorType:(unsigned long long)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(CCUISensorStatusButton *)cameraSensorStatusButton;
-(BOOL)isDisplayingSensorStatus;
-(CCUISensorStatusButton *)micSensorStatusButton;
-(void)_openPreferencesForBundleIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCameraSensorStatusButton:(CCUISensorStatusButton *)arg1 ;
-(void)setDisplayingSensorStatus:(BOOL)arg1 ;
-(void)_handleSensorStatusButtonTap:(id)arg1 ;
-(void)setMicSensorStatusButton:(CCUISensorStatusButton *)arg1 ;
-(void)configureStatusForSensorType:(unsigned long long)arg1 sensorActivityData:(id)arg2 ;
@end

