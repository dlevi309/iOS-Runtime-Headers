/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIControl.h>

@class MPRouteLabel, UIImageView, UIFont, MPAVRoute, NSString, UIColor, UIImage;

@interface MPRouteButton : UIControl {

	MPRouteLabel* _routeLabel;
	UIImageView* _accessoryImageView;
	double _alphaOverride;
	BOOL _routeLabelHidden;
	BOOL _forcesUppercaseText;
	double _accessoryImageSpacing;
	UIFont* _font;
	MPAVRoute* _route;
	NSString* _routeTitle;
	UIColor* _overrideColor;
	UIEdgeInsets _hitRectInsets;

}

@property (nonatomic,retain) UIImage * accessoryImage; 
@property (assign,nonatomic) double accessoryImageSpacing;                                 //@synthesize accessoryImageSpacing=_accessoryImageSpacing - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                                   //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (nonatomic,retain) MPAVRoute * route;                                            //@synthesize route=_route - In the implementation block
@property (nonatomic,copy,readonly) NSString * routeTitle;                                 //@synthesize routeTitle=_routeTitle - In the implementation block
@property (assign,getter=isRouteLabelHidden,nonatomic) BOOL routeLabelHidden;              //@synthesize routeLabelHidden=_routeLabelHidden - In the implementation block
@property (assign,nonatomic) BOOL forcesUppercaseText;                                     //@synthesize forcesUppercaseText=_forcesUppercaseText - In the implementation block
@property (nonatomic,retain) UIColor * overrideColor;                                      //@synthesize overrideColor=_overrideColor - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)setRoute:(MPAVRoute *)arg1 ;
-(MPAVRoute *)route;
-(NSString *)routeTitle;
-(UIImage *)accessoryImage;
-(void)setAccessoryImage:(UIImage *)arg1 ;
-(void)setAccessoryImageSpacing:(double)arg1 ;
-(void)setForcesUppercaseText:(BOOL)arg1 ;
-(void)setRouteLabelHidden:(BOOL)arg1 ;
-(double)accessoryImageSpacing;
-(UIEdgeInsets)hitRectInsets;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(BOOL)isRouteLabelHidden;
-(BOOL)forcesUppercaseText;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
@end

