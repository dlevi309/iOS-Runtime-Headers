/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CAGradientLayer;

@interface PRXScrollShadowView : UIView {

	CAGradientLayer* _maskLayer;
	unsigned long long _edge;

}

@property (nonatomic,readonly) CAGradientLayer * gradientLayer; 
@property (assign,nonatomic) unsigned long long edge;                        //@synthesize edge=_edge - In the implementation block
+(Class)layerClass;
-(unsigned long long)edge;
-(CAGradientLayer *)gradientLayer;
-(void)setEdge:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

