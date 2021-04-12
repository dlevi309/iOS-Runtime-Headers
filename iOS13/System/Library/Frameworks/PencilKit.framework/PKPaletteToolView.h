/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@class NSString, UIViewController, NSDictionary, UIView, NSLayoutConstraint, UIImageView;

@interface PKPaletteToolView : UIControl <PKEdgeLocatable, PKPaletteViewSizeScaling> {

	unsigned long long _edgeLocation;
	double _scalingFactor;
	NSString* _toolIdentifier;
	UIViewController* _attributeViewController;
	NSDictionary* _toolProperties;
	long long _colorUserInterfaceStyle;
	UIView* _toolLargeShadowView;
	NSLayoutConstraint* _imageViewTopAnchorConstraint;
	NSLayoutConstraint* _imageViewBottomAnchorConstraint;
	NSLayoutConstraint* _imageViewLeftAnchorConstraint;
	NSLayoutConstraint* _imageViewRightAnchorConstraint;
	NSLayoutConstraint* _imageViewWidthAnchorConstraint;
	NSLayoutConstraint* _imageViewHeigthAnchorConstraint;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIView * toolLargeShadowView;                                      //@synthesize toolLargeShadowView=_toolLargeShadowView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewTopAnchorConstraint;                 //@synthesize imageViewTopAnchorConstraint=_imageViewTopAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewBottomAnchorConstraint;              //@synthesize imageViewBottomAnchorConstraint=_imageViewBottomAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewLeftAnchorConstraint;                //@synthesize imageViewLeftAnchorConstraint=_imageViewLeftAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewRightAnchorConstraint;               //@synthesize imageViewRightAnchorConstraint=_imageViewRightAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewWidthAnchorConstraint;               //@synthesize imageViewWidthAnchorConstraint=_imageViewWidthAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewHeigthAnchorConstraint;              //@synthesize imageViewHeigthAnchorConstraint=_imageViewHeigthAnchorConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) NSString * toolIdentifier;                                       //@synthesize toolIdentifier=_toolIdentifier - In the implementation block
@property (nonatomic,readonly) UIViewController * attributeViewController;                      //@synthesize attributeViewController=_attributeViewController - In the implementation block
@property (nonatomic,readonly) NSString * toolName; 
@property (nonatomic,copy) NSDictionary * toolProperties;                                       //@synthesize toolProperties=_toolProperties - In the implementation block
@property (assign,nonatomic) long long colorUserInterfaceStyle;                                 //@synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long edgeLocation;                                   //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                              //@synthesize scalingFactor=_scalingFactor - In the implementation block
+(id)toolViewWithIdentifier:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)updateConstraints;
-(void)setSelected:(BOOL)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(double)scalingFactor;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(void)setScalingFactor:(double)arg1 ;
-(long long)colorUserInterfaceStyle;
-(void)setToolProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)toolProperties;
-(id)initWithToolIdentifier:(id)arg1 toolProperties:(id)arg2 ;
-(id)initWithToolIdentifier:(id)arg1 ;
-(NSString *)toolIdentifier;
-(double)_toolSelectedOffset;
-(void)_reloadToolImage;
-(UIViewController *)attributeViewController;
-(void)_updateToolImageShadows;
-(UIView *)toolLargeShadowView;
-(void)_reloadToolImageSizeConstraints;
-(CGSize)_smallShadowOffset;
-(CGSize)_largeShadowOffset;
-(NSLayoutConstraint *)imageViewWidthAnchorConstraint;
-(NSLayoutConstraint *)imageViewHeigthAnchorConstraint;
-(NSLayoutConstraint *)imageViewBottomAnchorConstraint;
-(NSLayoutConstraint *)imageViewTopAnchorConstraint;
-(NSLayoutConstraint *)imageViewLeftAnchorConstraint;
-(NSLayoutConstraint *)imageViewRightAnchorConstraint;
-(NSString *)toolName;
-(void)setToolLargeShadowView:(UIView *)arg1 ;
-(void)setImageViewTopAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageViewBottomAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageViewLeftAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageViewRightAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageViewWidthAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageViewHeigthAnchorConstraint:(NSLayoutConstraint *)arg1 ;
@end

