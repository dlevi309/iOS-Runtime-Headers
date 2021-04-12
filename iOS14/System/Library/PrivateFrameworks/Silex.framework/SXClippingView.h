/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, SXClippingLayer;

@interface SXClippingView : UIView {

	UIView* _contentView;
	unsigned long long _clippingMode;
	CGSize _contentSize;
	CGRect _contentFrame;

}

@property (nonatomic,readonly) SXClippingLayer * layer; 
@property (nonatomic,readonly) UIView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                         //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                          //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) unsigned long long clippingMode;              //@synthesize clippingMode=_clippingMode - In the implementation block
+(Class)layerClass;
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(CGSize)contentSize;
-(id)initWithContentView:(id)arg1 ;
-(UIView *)contentView;
-(unsigned long long)clippingMode;
-(void)setClippingMode:(unsigned long long)arg1 ;
@end

