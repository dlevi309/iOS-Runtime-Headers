/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(double)minimumHeight;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updatePlaceholder;
-(void)_callCompletion;
-(void)setBlurDisabled:(BOOL)arg1 ;
-(void)setShowPlaceholder:(BOOL)arg1 ;
-(void)configureWithSummary:(id)arg1 maximumHeight:(double)arg2 barHeight:(double)arg3 synchronous:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isBlurDisabled;
-(void)_updateImageWithImage:(id)arg1 ;
-(void)_generateImageForSummary:(id)arg1 barHeight:(double)arg2 maximumHeight:(double)arg3 synchronous:(BOOL)arg4 ;
-(void)_updatePlaceholderImage;
-(BOOL)showPlaceholder;
@end

