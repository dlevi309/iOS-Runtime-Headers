/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PUImportAddToAlbumsToolbarViewDelegate;
@class NSString, UIButton, UILabel;

@interface PUImportAddToAlbumsToolbarView : UIView {

	NSString* _destinationCollectionTitle;
	UIButton* _destinationButton;
	id<PUImportAddToAlbumsToolbarViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _destinationLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * destinationLabel;                                              //@synthesize destinationLabel=_destinationLabel - In the implementation block
@property (nonatomic,retain) NSString * destinationCollectionTitle;                                   //@synthesize destinationCollectionTitle=_destinationCollectionTitle - In the implementation block
@property (nonatomic,readonly) UIButton * destinationButton;                                          //@synthesize destinationButton=_destinationButton - In the implementation block
@property (assign,nonatomic,__weak) id<PUImportAddToAlbumsToolbarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UILabel *)titleLabel;
-(id)accessibilityLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UILabel *)destinationLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(id<PUImportAddToAlbumsToolbarViewDelegate>)delegate;
-(unsigned long long)accessibilityTraits;
-(void)buttonPressed:(id)arg1 ;
-(void)_setupSubviews;
-(void)setDelegate:(id<PUImportAddToAlbumsToolbarViewDelegate>)arg1 ;
-(CGRect)accessibilityFrame;
-(void)_setupButton;
-(void)_updateButtonText;
-(void)setDestinationCollectionTitle:(NSString *)arg1 ;
-(void)_animateButtonAlpha:(double)arg1 ;
-(void)buttonTouchDragInside:(id)arg1 ;
-(void)buttonTouchDragOutside:(id)arg1 ;
-(NSString *)destinationCollectionTitle;
-(UIButton *)destinationButton;
-(void)buttonTouchDown:(id)arg1 ;
-(void)setDestinationLabel:(UILabel *)arg1 ;
@end

