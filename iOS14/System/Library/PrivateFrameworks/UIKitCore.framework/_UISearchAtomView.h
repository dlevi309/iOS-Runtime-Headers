/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIAtomTextViewAtomLayout.h>

@class UIColor, UILabel, UIImageView, _UISearchAtomBackgroundView, NSArray, NSLayoutConstraint, UIFont, NSString;

@interface _UISearchAtomView : UIView <_UIAtomTextViewAtomLayout> {

	SCD_Struct_UI34 _flags;
	UIColor* _atomBackgroundColor;
	UILabel* _textLabel;
	UIImageView* _leadingImage;
	_UISearchAtomBackgroundView* _backgroundView;
	NSArray* _defaultConstraints;
	NSLayoutConstraint* _imageBaselineConstraint;
	NSLayoutConstraint* _imageCenterYConstraint;
	NSArray* _withImageConstraints;
	NSArray* _withoutImageConstraints;

}

@property (nonatomic,retain) _UISearchAtomBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,copy) NSArray * defaultConstraints;                                //@synthesize defaultConstraints=_defaultConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageBaselineConstraint;              //@synthesize imageBaselineConstraint=_imageBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageCenterYConstraint;               //@synthesize imageCenterYConstraint=_imageCenterYConstraint - In the implementation block
@property (nonatomic,copy) NSArray * withImageConstraints;                              //@synthesize withImageConstraints=_withImageConstraints - In the implementation block
@property (nonatomic,copy) NSArray * withoutImageConstraints;                           //@synthesize withoutImageConstraints=_withoutImageConstraints - In the implementation block
@property (retain) UILabel * textLabel;                                                 //@synthesize textLabel=_textLabel - In the implementation block
@property (retain) UIImageView * leadingImage;                                          //@synthesize leadingImage=_leadingImage - In the implementation block
@property (nonatomic,retain) UIColor * atomBackgroundColor;                             //@synthesize atomBackgroundColor=_atomBackgroundColor - In the implementation block
@property (nonatomic,retain) UIFont * atomFont; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long selectionStyle; 
@property (nonatomic,readonly) CGRect selectionBounds; 
@property (nonatomic,readonly) long long baseWritingDirection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultFont;
+(id)defaultAtomBackgroundColorForTraitCollection:(id)arg1 ;
+(BOOL)requiresConstraintBasedLayout;
-(void)_updateColors;
-(id)viewForLastBaselineLayout;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIFont *)atomFont;
-(void)setBackgroundView:(_UISearchAtomBackgroundView *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(_UISearchAtomBackgroundView *)backgroundView;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(UIImageView *)leadingImage;
-(void)updateConstraints;
-(void)setDefaultConstraints:(NSArray *)arg1 ;
-(void)setImageCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setWithImageConstraints:(NSArray *)arg1 ;
-(void)setWithoutImageConstraints:(NSArray *)arg1 ;
-(UIColor *)atomBackgroundColor;
-(NSArray *)defaultConstraints;
-(NSLayoutConstraint *)imageBaselineConstraint;
-(NSLayoutConstraint *)imageCenterYConstraint;
-(NSArray *)withImageConstraints;
-(NSArray *)withoutImageConstraints;
-(void)setLeadingImage:(UIImageView *)arg1 ;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)setAtomFont:(UIFont *)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setAtomBackgroundColor:(UIColor *)arg1 ;
-(CGRect)selectionBounds;
-(void)setSelectionStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)isEnabled;
-(UILabel *)textLabel;
-(long long)selectionStyle;
@end

