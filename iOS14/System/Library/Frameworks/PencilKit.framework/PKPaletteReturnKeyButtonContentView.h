/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, TUICandidateLabel, NSLayoutConstraint, NSString, UIImageView, UIColor;

@interface PKPaletteReturnKeyButtonContentView : UIView {

	UIStackView* _stackView;
	TUICandidateLabel* _label;
	NSLayoutConstraint* _labelHeightConstraint;
	NSLayoutConstraint* _labelWidthConstraint;
	BOOL _useCompactLayout;
	NSString* _text;
	long long _layoutOrientation;
	UIImageView* _imageView;

}

@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long layoutOrientation;              //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL useCompactLayout;                    //@synthesize useCompactLayout=_useCompactLayout - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(long long)layoutOrientation;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setText:(NSString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setLayoutOrientation:(long long)arg1 ;
-(NSString *)text;
-(void)_updateUI;
-(void)setUseCompactLayout:(BOOL)arg1 ;
-(BOOL)useCompactLayout;
@end

