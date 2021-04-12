/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedImage.h>

@interface CUINamedLayerImage : CUINamedImage {

	CGRect _frame;
	double _opacity;
	int _blendMode;
	BOOL _fixedFrame;

}

@property (assign,nonatomic) CGRect frame;                 //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double opacity;               //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) BOOL fixedFrame;              //@synthesize fixedFrame=_fixedFrame - In the implementation block
-(int)blendMode;
-(BOOL)fixedFrame;
-(void)setFixedFrame:(BOOL)arg1 ;
-(double)opacity;
-(CGRect)frame;
-(void)setOpacity:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
@end

