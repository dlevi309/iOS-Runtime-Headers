/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class MPArtworkCatalog, UIImage, MRUVisualStylingProvider, UIView, UIImageView, MRUShadowView, MSVTimer, NSString;

@interface MRUArtworkView : UIView <MRUVisualStylingProviderObserver> {

	BOOL _showPlaceholder;
	MPArtworkCatalog* _catalog;
	UIImage* _artworkImage;
	UIImage* _placeholderImage;
	UIImage* _iconImage;
	MRUVisualStylingProvider* _stylingProvider;
	long long _style;
	UIView* _placeholderBackground;
	UIImageView* _placeholderImageView;
	MRUShadowView* _artworkShadowView;
	UIImageView* _artworkImageView;
	MRUShadowView* _iconShadowView;
	UIImageView* _iconView;
	MSVTimer* _artworkTimer;
	long long _failedRetryCount;

}

@property (nonatomic,retain) UIView * placeholderBackground;                          //@synthesize placeholderBackground=_placeholderBackground - In the implementation block
@property (nonatomic,retain) UIImageView * placeholderImageView;                      //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) MRUShadowView * artworkShadowView;                       //@synthesize artworkShadowView=_artworkShadowView - In the implementation block
@property (nonatomic,retain) UIImageView * artworkImageView;                          //@synthesize artworkImageView=_artworkImageView - In the implementation block
@property (nonatomic,retain) MRUShadowView * iconShadowView;                          //@synthesize iconShadowView=_iconShadowView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                  //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) MSVTimer * artworkTimer;                                 //@synthesize artworkTimer=_artworkTimer - In the implementation block
@property (assign,nonatomic) long long failedRetryCount;                              //@synthesize failedRetryCount=_failedRetryCount - In the implementation block
@property (nonatomic,retain) MPArtworkCatalog * catalog;                              //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,retain) UIImage * artworkImage;                                  //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                              //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                                     //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) long long style;                                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL showPlaceholder;                                    //@synthesize showPlaceholder=_showPlaceholder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPArtworkCatalog *)catalog;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)iconImage;
-(BOOL)showPlaceholder;
-(void)setArtworkTimer:(MSVTimer *)arg1 ;
-(void)prepareForReuse;
-(void)setCatalog:(MPArtworkCatalog *)arg1 ;
-(void)updateStyle;
-(void)layoutSubviews;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)placeholderImage;
-(void)setIconImage:(UIImage *)arg1 ;
-(UIView *)placeholderBackground;
-(UIImageView *)placeholderImageView;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(MSVTimer *)artworkTimer;
-(UIImageView *)artworkImageView;
-(void)setStyle:(long long)arg1 ;
-(void)updateVisibility;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(void)setShowPlaceholder:(BOOL)arg1 ;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(void)updateVisualStyling;
-(long long)style;
-(UIImage *)artworkImage;
-(void)dealloc;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)setArtworkImageView:(UIImageView *)arg1 ;
-(void)visualStylingProviderDidChange:(id)arg1 ;
-(CGRect)artworkFrame;
-(void)setFailedRetryCount:(long long)arg1 ;
-(long long)failedRetryCount;
-(BOOL)isSquareArtwork;
-(BOOL)isSquare:(CGSize)arg1 ;
-(void)setPlaceholderBackground:(UIView *)arg1 ;
-(MRUShadowView *)artworkShadowView;
-(void)setArtworkShadowView:(MRUShadowView *)arg1 ;
-(MRUShadowView *)iconShadowView;
-(void)setIconShadowView:(MRUShadowView *)arg1 ;
@end

