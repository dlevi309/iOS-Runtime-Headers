/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGRect)frame;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(int)blendMode;
-(BOOL)fixedFrame;
-(void)setFixedFrame:(BOOL)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
@end

