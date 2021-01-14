/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXCMMPosterHeaderViewSpec, PXCMMImageView, PXGradientView, UILabel, UIImageView, PXCMMPosterHeaderViewModel, NSString;

@interface PXCMMPosterHeaderView : UIView <PXChangeObserver> {

	PXCMMPosterHeaderViewSpec* _spec;
	PXCMMImageView* _imageView;
	PXGradientView* _topGradientView;
	PXGradientView* _bottomGradientView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _statusLabel;
	UIImageView* _statusCheckmark;
	PXCMMPosterHeaderViewModel* _viewModel;
	long long _presentationStyle;

}

@property (nonatomic,readonly) long long presentationStyle;                       //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) PXCMMPosterHeaderViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3 ;
+(void)preheatSharedValuesForPresentationStyle:(long long)arg1 ;
-(void)_updateTitle;
-(long long)presentationStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(PXCMMPosterHeaderViewModel *)viewModel;
-(void)_updateStatusString;
-(void)layoutSubviews;
-(void)setViewModel:(PXCMMPosterHeaderViewModel *)arg1 ;
-(void)_performLayoutWithSize:(CGSize)arg1 ;
-(id)test_subtitle;
-(id)test_statusString;
-(BOOL)test_showStatusCheckmark;
-(void)_updateFonts;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPresentationStyle:(long long)arg1 ;
-(id)test_title;
-(void)_updateSubtitle;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

