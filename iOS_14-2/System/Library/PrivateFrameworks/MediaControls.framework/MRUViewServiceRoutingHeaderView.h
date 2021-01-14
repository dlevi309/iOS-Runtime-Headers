/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class NSString, UIImage, MRUVisualStylingProvider, UIImageView, UILabel, UIView;

@interface MRUViewServiceRoutingHeaderView : UIView <MRUVisualStylingProviderObserver> {

	NSString* _title;
	UIImage* _image;
	MRUVisualStylingProvider* _stylingProvider;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UIView* _separatorView;

}

@property (nonatomic,retain) UIImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                                  //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIImage * image;                                           //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIView *)separatorView;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateVisualStyling;
-(NSString *)title;
-(void)setSeparatorView:(UIView *)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)visualStylingProviderDidChange:(id)arg1 ;
-(void)updateContentSizeCategory;
@end

