/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_performCaptureAnimation;
-(void)setLayoutStyle:(long long)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)layoutStyle;
-(UIView *)_backgroundView;
-(void)finishIncrementingWithCompletionHandler:(/*^block*/id)arg1 ;
-(UILabel *)_countLabel;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(void)_updateCountLabelWithNumberOfPhotos;
-(void)layoutSubviews;
-(void)_commonCAMAvalancheIndicatorViewInitializationWithLayoutStyle:(long long)arg1 ;
-(long long)_numberOfPhotos;
-(void)reset;
-(id)initWithCoder:(id)arg1 ;
-(void)_updateAttributes;
-(long long)incrementWithCaptureAnimation:(BOOL)arg1 ;
@end

