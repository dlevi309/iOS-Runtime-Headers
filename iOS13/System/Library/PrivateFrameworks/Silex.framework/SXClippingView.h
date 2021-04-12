/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)contentSize;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)setContentFrame:(CGRect)arg1 ;
-(unsigned long long)clippingMode;
-(void)setClippingMode:(unsigned long long)arg1 ;
@end

