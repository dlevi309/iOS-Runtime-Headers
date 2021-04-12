/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIImageView, NSLayoutConstraint, NTKCFaceContainerView, NSString, UIImage, UIFontMetrics, UIView;

@interface _NTKCGalleryCollectionCell : UICollectionViewCell {

	UILabel* _nameLabel;
	UIImageView* _nameImageView;
	NSLayoutConstraint* _nameBaselineConstraint;
	NSLayoutConstraint* _leadingImageConstraint;
	NSLayoutConstraint* _trailingImageConstraint;
	NSLayoutConstraint* _centerConstraint;
	NTKCFaceContainerView* _faceContainerView;
	NSString* _calloutName;
	UIImage* _calloutImage;
	UIFontMetrics* _fontMetrics;

}

@property (nonatomic,retain) UIView * faceView; 
@property (nonatomic,retain) NTKCFaceContainerView * faceContainerView;              //@synthesize faceContainerView=_faceContainerView - In the implementation block
@property (nonatomic,copy) NSString * calloutName;                                   //@synthesize calloutName=_calloutName - In the implementation block
@property (nonatomic,retain) UIImage * calloutImage;                                 //@synthesize calloutImage=_calloutImage - In the implementation block
@property (assign,nonatomic) BOOL active; 
@property (nonatomic,retain) UIFontMetrics * fontMetrics;                            //@synthesize fontMetrics=_fontMetrics - In the implementation block
+(id)reuseIdentifier;
+(CGSize)itemSizeWithCalloutName:(BOOL)arg1 andCalloutImage:(BOOL)arg2 ;
+(id)nonLuxoReuseIdentifier;
+(id)luxoReuseIdentifier;
-(void)dealloc;
-(void)setActive:(BOOL)arg1 ;
-(void)prepareForReuse;
-(BOOL)active;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)setSelected:(BOOL)arg1 ;
-(void)_highlight;
-(UIView *)faceView;
-(void)setFaceView:(UIView *)arg1 ;
-(void)_fontSizeDidChange;
-(NSString *)calloutName;
-(NTKCFaceContainerView *)faceContainerView;
-(void)setCalloutName:(NSString *)arg1 ;
-(void)setFontAdjustingAttributes;
-(void)setCalloutImage:(UIImage *)arg1 ;
-(void)setFaceContainerView:(NTKCFaceContainerView *)arg1 ;
-(UIImage *)calloutImage;
-(UIFontMetrics *)fontMetrics;
-(void)setFontMetrics:(UIFontMetrics *)arg1 ;
@end

