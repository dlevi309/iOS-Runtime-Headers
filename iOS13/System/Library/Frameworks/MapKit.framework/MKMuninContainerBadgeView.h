/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIImageView, UILabel;

@interface MKMuninContainerBadgeView : UIView {

	UIVisualEffectView* _backgroundView;
	UIImageView* _glyphView;
	UILabel* _label;

}

@property (assign,nonatomic,__weak) UIVisualEffectView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * glyphView;                          //@synthesize glyphView=_glyphView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label;                                  //@synthesize label=_label - In the implementation block
-(BOOL)isHidden;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)glyphView;
-(void)setGlyphView:(UIImageView *)arg1 ;
@end

