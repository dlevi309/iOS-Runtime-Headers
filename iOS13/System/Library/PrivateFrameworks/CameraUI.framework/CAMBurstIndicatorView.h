/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIView, UILabel;

@interface CAMBurstIndicatorView : UIView {

	long long _layoutStyle;
	NSString* _contentSizeCategory;
	UIView* __backgroundView;
	UILabel* __countLabel;
	long long __numberOfPhotos;

}

@property (nonatomic,readonly) UIView * _backgroundView;                //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * _countLabel;                   //@synthesize _countLabel=__countLabel - In the implementation block
@property (nonatomic,readonly) long long _numberOfPhotos;               //@synthesize _numberOfPhotos=__numberOfPhotos - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                     //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;              //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(CGSize)intrinsicContentSize;
-(void)_updateAttributes;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)_backgroundView;
-(void)layoutSubviews;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(UILabel *)_countLabel;
-(long long)_numberOfPhotos;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(void)_performCaptureAnimation;
-(long long)incrementWithCaptureAnimation:(BOOL)arg1 ;
-(void)finishIncrementingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateCountLabelWithNumberOfPhotos;
-(void)_commonCAMAvalancheIndicatorViewInitializationWithLayoutStyle:(long long)arg1 ;
@end

