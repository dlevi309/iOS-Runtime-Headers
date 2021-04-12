/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol HUWallpaperPhotoCellDelegate;
@class NSString, UIImageView, UIActivityIndicatorView, UIView, UIButton, UILabel, UIStackView, CAShapeLayer, NSLayoutConstraint, UIImage;

@interface HUWallpaperPhotoCell : UICollectionViewCell {

	BOOL _busy;
	BOOL _empty;
	BOOL _removable;
	BOOL _showBorder;
	NSString* _assetIdentifier;
	double _cornerRadius;
	long long _contentMode;
	id<HUWallpaperPhotoCellDelegate> _delegate;
	UIImageView* _imageView;
	UIActivityIndicatorView* _spinnerView;
	UIView* _selectionOverlayView;
	UIButton* _deleteButton;
	UILabel* _choosePhotoLabel;
	UIStackView* _stackView;
	CAShapeLayer* _borderLayer;
	NSLayoutConstraint* _imageWidthConstraint;

}

@property (nonatomic,retain) UIImageView * imageView;                                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;                         //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) UIView * selectionOverlayView;                                 //@synthesize selectionOverlayView=_selectionOverlayView - In the implementation block
@property (nonatomic,retain) UIButton * deleteButton;                                       //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) UILabel * choosePhotoLabel;                                    //@synthesize choosePhotoLabel=_choosePhotoLabel - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                       //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * borderLayer;                                    //@synthesize borderLayer=_borderLayer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageWidthConstraint;                     //@synthesize imageWidthConstraint=_imageWidthConstraint - In the implementation block
@property (nonatomic,copy) NSString * assetIdentifier;                                      //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) BOOL busy;                                                     //@synthesize busy=_busy - In the implementation block
@property (assign,nonatomic) BOOL empty;                                                    //@synthesize empty=_empty - In the implementation block
@property (assign,nonatomic) BOOL removable;                                                //@synthesize removable=_removable - In the implementation block
@property (assign,nonatomic) BOOL showBorder;                                               //@synthesize showBorder=_showBorder - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                           //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) long long contentMode;                                         //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic,__weak) id<HUWallpaperPhotoCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HUWallpaperPhotoCellDelegate>)delegate;
-(void)setDelegate:(id<HUWallpaperPhotoCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setContentMode:(long long)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIStackView *)stackView;
-(double)cornerRadius;
-(void)updateView;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(UIButton *)deleteButton;
-(BOOL)empty;
-(void)setImageView:(UIImageView *)arg1 ;
-(long long)contentMode;
-(void)setStackView:(UIStackView *)arg1 ;
-(BOOL)busy;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(NSString *)assetIdentifier;
-(void)setShowBorder:(BOOL)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(CAShapeLayer *)borderLayer;
-(void)setBorderLayer:(CAShapeLayer *)arg1 ;
-(void)setBusy:(BOOL)arg1 ;
-(BOOL)removable;
-(void)setRemovable:(BOOL)arg1 ;
-(void)deleteButtonPressed;
-(NSLayoutConstraint *)imageWidthConstraint;
-(void)setImageWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)showBorder:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)choosePhotoLabel;
-(UIView *)selectionOverlayView;
-(BOOL)showBorder;
-(void)setSelectionOverlayView:(UIView *)arg1 ;
-(void)setChoosePhotoLabel:(UILabel *)arg1 ;
@end

