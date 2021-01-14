/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	long long _routeLabelAxis;
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
@property (assign,nonatomic) long long routeLabelAxis;                                     //@synthesize routeLabelAxis=_routeLabelAxis - In the implementation block
-(void)setRoute:(MPAVRoute *)arg1 ;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(MPAVRoute *)route;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)hitRectInsets;
-(void)setForcesUppercaseText:(BOOL)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)accessoryImage;
-(void)setAccessoryImage:(UIImage *)arg1 ;
-(BOOL)forcesUppercaseText;
-(void)setAccessoryImageSpacing:(double)arg1 ;
-(void)setRouteLabelHidden:(BOOL)arg1 ;
-(void)setRouteLabelAxis:(long long)arg1 ;
-(double)accessoryImageSpacing;
-(BOOL)isRouteLabelHidden;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(long long)routeLabelAxis;
-(void)setAlpha:(double)arg1 ;
-(NSString *)routeTitle;
-(UIFont *)font;
-(void)setHighlighted:(BOOL)arg1 ;
@end

