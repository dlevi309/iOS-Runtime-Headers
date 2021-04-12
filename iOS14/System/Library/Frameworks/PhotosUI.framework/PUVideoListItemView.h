/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NSLocale, NSDateFormatter, PHImageRequestOptions, UIImage, NSString, UILabel, NSArray;

@interface PUVideoListItemView : UIView {

	UIImageView* _videoThumbnailView;
	NSLocale* _locale;
	NSDateFormatter* _dateFormatter;
	BOOL _needsUpdateConstraints;
	BOOL _isPerformingUpdates;
	PHImageRequestOptions* __imageRequestOptions;
	UIImage* _videoThumbnail;
	NSString* _title;
	NSString* _subtitle;
	NSString* _sizeInGB;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _sizeLabel;
	NSArray* _constraints;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) UIImage * videoThumbnail;                                    //@synthesize videoThumbnail=_videoThumbnail - In the implementation block
@property (nonatomic,copy) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * sizeInGB;                                           //@synthesize sizeInGB=_sizeInGB - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                     //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * sizeLabel;                                         //@synthesize sizeLabel=_sizeLabel - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (setter=_setConstraints:,nonatomic,copy) NSArray * constraints;                 //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,readonly) PHImageRequestOptions * _imageRequestOptions;              //@synthesize _imageRequestOptions=__imageRequestOptions - In the implementation block
@property (nonatomic,readonly) UIImageView * videoThumbnailView; 
-(UILabel *)titleLabel;
-(id)_dateFormatter;
-(void)_setConstraints:(id)arg1 ;
-(NSArray *)constraints;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)sizeLabel;
-(void)setSizeLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_invalidateConstraints;
-(UIEdgeInsets)contentInsets;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)sizeInGB;
-(PHImageRequestOptions *)_imageRequestOptions;
-(id)_currentLocale;
-(UILabel *)subtitleLabel;
-(void)updateConstraints;
-(void)_updateConstraintsIfNeeded;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)updateItemViewWithAsset:(id)arg1 ;
-(BOOL)isSubtitleDisplayable;
-(void)setVideoThumbnail:(UIImage *)arg1 ;
-(void)setSizeInGB:(NSString *)arg1 ;
-(id)_titleFromDate:(id)arg1 ;
-(id)_subtitleForAsset:(id)arg1 ;
-(id)_createTextLabel;
-(UIImageView *)videoThumbnailView;
-(UIImage *)videoThumbnail;
-(NSString *)title;
@end

