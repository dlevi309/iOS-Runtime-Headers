/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)_highlight;
-(UIFontMetrics *)fontMetrics;
-(void)setFontMetrics:(UIFontMetrics *)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setFaceView:(UIView *)arg1 ;
-(UIView *)faceView;
-(void)_fontSizeDidChange;
-(void)setCalloutName:(NSString *)arg1 ;
-(NSString *)calloutName;
-(NTKCFaceContainerView *)faceContainerView;
-(void)setFontAdjustingAttributes;
-(void)setCalloutImage:(UIImage *)arg1 ;
-(void)setFaceContainerView:(NTKCFaceContainerView *)arg1 ;
-(UIImage *)calloutImage;
@end

