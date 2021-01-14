/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIImage, PKSpendingSummary;

@interface PKSpendingSummaryChartBarView : UIView {

	UIImageView* _bar;
	UIImageView* _placeholder;
	UIImage* _image;
	UIImage* _placeholderImage;
	double _barHeight;
	double _maximumHeight;
	PKSpendingSummary* _summary;
	/*^block*/id _imageCompletion;
	AQ _generationCounter;
	BOOL _showPlaceholder;
	BOOL _blurDisabled;
	double _minimumHeight;

}

@property (assign,nonatomic) BOOL showPlaceholder;                                 //@synthesize showPlaceholder=_showPlaceholder - In the implementation block
@property (assign,getter=isBlurDisabled,nonatomic) BOOL blurDisabled;              //@synthesize blurDisabled=_blurDisabled - In the implementation block
@property (nonatomic,readonly) double minimumHeight;                               //@synthesize minimumHeight=_minimumHeight - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(double)minimumHeight;
-(void)_updatePlaceholder;
-(BOOL)showPlaceholder;
-(void)layoutSubviews;
-(void)_callCompletion;
-(void)configureWithSummary:(id)arg1 maximumHeight:(double)arg2 barHeight:(double)arg3 synchronous:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isBlurDisabled;
-(void)_updatePlaceholderImage;
-(void)setShowPlaceholder:(BOOL)arg1 ;
-(void)_updateImageWithImage:(id)arg1 ;
-(void)_generateImageForSummary:(id)arg1 barHeight:(double)arg2 maximumHeight:(double)arg3 synchronous:(BOOL)arg4 ;
-(void)setBlurDisabled:(BOOL)arg1 ;
@end

