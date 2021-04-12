/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIListCollectionViewCell.h>

@class VUIImageView, NSString, VUILabel, VUISeparatorView;

@interface VUILibraryMenuItemViewCell : VUIListCollectionViewCell {

	VUIImageView* _imageView;
	BOOL _hideChevron;
	BOOL _shouldAppearAsHeader;
	NSString* _title;
	NSString* _imageName;
	VUILabel* _titleLabel;
	VUISeparatorView* _topSeparatorView;
	VUISeparatorView* _bottomSeparatorView;

}

@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * imageName;                                  //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,readonly) VUILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUISeparatorView * topSeparatorView;                   //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,readonly) VUISeparatorView * bottomSeparatorView;              //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (assign,nonatomic) BOOL hideChevron;                                      //@synthesize hideChevron=_hideChevron - In the implementation block
@property (assign,nonatomic) BOOL shouldAppearAsHeader;                             //@synthesize shouldAppearAsHeader=_shouldAppearAsHeader - In the implementation block
-(VUILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(void)layoutSubviews;
-(VUISeparatorView *)topSeparatorView;
-(VUISeparatorView *)bottomSeparatorView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setHideChevron:(BOOL)arg1 ;
-(void)setShouldAppearAsHeader:(BOOL)arg1 ;
-(BOOL)hideChevron;
-(BOOL)shouldAppearAsHeader;
@end

