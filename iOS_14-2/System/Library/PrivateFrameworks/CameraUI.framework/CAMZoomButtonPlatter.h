/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSString, UIImageView, CAMZoomButton;

@interface CAMZoomButtonPlatter : UIView {

	double _zoomFactor;
	NSArray* _zoomFactors;
	NSString* _contentSizeCategory;
	UIImageView* __platterBackgroundView;
	NSArray* __allButtons;
	CAMZoomButton* __zoomButton1;
	CAMZoomButton* __zoomButton2;
	CAMZoomButton* __zoomButton3;

}

@property (nonatomic,readonly) UIImageView * _platterBackgroundView;              //@synthesize _platterBackgroundView=__platterBackgroundView - In the implementation block
@property (nonatomic,readonly) NSArray * _allButtons;                             //@synthesize _allButtons=__allButtons - In the implementation block
@property (nonatomic,readonly) CAMZoomButton * _zoomButton1;                      //@synthesize _zoomButton1=__zoomButton1 - In the implementation block
@property (nonatomic,readonly) CAMZoomButton * _zoomButton2;                      //@synthesize _zoomButton2=__zoomButton2 - In the implementation block
@property (nonatomic,readonly) CAMZoomButton * _zoomButton3;                      //@synthesize _zoomButton3=__zoomButton3 - In the implementation block
@property (assign,nonatomic) double zoomFactor;                                   //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (nonatomic,readonly) CAMZoomButton * zoomFactorButton; 
@property (nonatomic,copy) NSArray * zoomFactors;                                 //@synthesize zoomFactors=_zoomFactors - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;                        //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) long long orientation; 
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(double)zoomFactor;
-(NSString *)contentSizeCategory;
-(void)layoutSubviews;
-(void)setZoomFactor:(double)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(NSArray *)_allButtons;
-(UIImageView *)_platterBackgroundView;
-(void)setZoomFactors:(NSArray *)arg1 ;
-(void)setZoomFactor:(double)arg1 animated:(BOOL)arg2 ;
-(id)nearestZoomButtonForTouch:(id)arg1 ;
-(double)baseZoomFactorForButton:(id)arg1 ;
-(NSArray *)zoomFactors;
-(void)_updateForContentSize;
-(void)_updateButtonsAnimated:(BOOL)arg1 ;
-(CAMZoomButton *)_zoomButton2;
-(id)_createPlatterImageForContentSize:(id)arg1 ;
-(CAMZoomButton *)zoomFactorButton;
-(CAMZoomButton *)_zoomButton1;
-(CAMZoomButton *)_zoomButton3;
@end

