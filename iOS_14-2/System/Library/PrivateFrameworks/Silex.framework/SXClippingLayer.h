/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXLayer.h>

@class CALayer;

@interface SXClippingLayer : SXLayer {

	CALayer* _contentLayer;
	unsigned long long _clippingMode;
	CGRect _contentFrame;

}

@property (nonatomic,retain) CALayer * contentLayer;                       //@synthesize contentLayer=_contentLayer - In the implementation block
@property (assign,nonatomic) unsigned long long clippingMode;              //@synthesize clippingMode=_clippingMode - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                          //@synthesize contentFrame=_contentFrame - In the implementation block
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)layoutSublayers;
-(void)setContentLayer:(CALayer *)arg1 ;
-(CALayer *)contentLayer;
-(unsigned long long)clippingMode;
-(void)layoutForMasking;
-(void)layoutForContentsRect;
-(void)setClippingMode:(unsigned long long)arg1 ;
@end

