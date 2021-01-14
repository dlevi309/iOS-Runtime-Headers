/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/MTVisualStylingProviderObservingPrivate.h>

@class NSString, MTVisualStylingProvider, CCUICAPackageView, UILabel;

@interface MediaControlsRoundButton : UIControl <MTVisualStylingProviderObservingPrivate> {

	BOOL _labelHidden;
	NSString* _title;
	NSString* _packageName;
	NSString* _glyphState;
	MTVisualStylingProvider* _visualStylingProvider;
	long long _axis;
	CCUICAPackageView* _packageView;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) CCUICAPackageView * packageView;                              //@synthesize packageView=_packageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * packageName;                                         //@synthesize packageName=_packageName - In the implementation block
@property (nonatomic,copy) NSString * glyphState;                                          //@synthesize glyphState=_glyphState - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;              //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
@property (assign,nonatomic) long long axis;                                               //@synthesize axis=_axis - In the implementation block
@property (nonatomic,readonly) CGRect imageFrame; 
@property (assign,getter=isLabelHidden,nonatomic) BOOL labelHidden;                        //@synthesize labelHidden=_labelHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)setAxis:(long long)arg1 ;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)_contentSizeCategoryDidChange;
-(long long)axis;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(BOOL)isLabelHidden;
-(void)setLabelHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPackageView:(CCUICAPackageView *)arg1 ;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(CGRect)imageFrame;
-(NSString *)glyphState;
-(CCUICAPackageView *)packageView;
-(void)setGlyphState:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)packageName;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setPackageName:(NSString *)arg1 ;
-(void)_updateLabelVisualStyling;
-(void)_updatePackageColors;
@end

