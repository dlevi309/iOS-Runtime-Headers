/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, CAGradientLayer;

@interface AFUISiriCompactGradientView : UIView {

	BOOL _isVisible;
	double _gradientHeight;
	NSString* _gradientType;
	double _gradientStartOpacity;
	double _gradientEndOpacity;
	CGPoint _gradientOrigin;

}

@property (nonatomic,readonly) CAGradientLayer * layer; 
@property (assign,nonatomic) double gradientHeight;                    //@synthesize gradientHeight=_gradientHeight - In the implementation block
@property (assign,nonatomic) CGPoint gradientOrigin;                   //@synthesize gradientOrigin=_gradientOrigin - In the implementation block
@property (nonatomic,retain) NSString * gradientType;                  //@synthesize gradientType=_gradientType - In the implementation block
@property (assign,nonatomic) double gradientStartOpacity;              //@synthesize gradientStartOpacity=_gradientStartOpacity - In the implementation block
@property (assign,nonatomic) double gradientEndOpacity;                //@synthesize gradientEndOpacity=_gradientEndOpacity - In the implementation block
+(Class)layerClass;
-(void)layoutSubviews;
-(NSString *)gradientType;
-(void)setGradientType:(NSString *)arg1 ;
-(double)gradientHeight;
-(void)setGradientHeight:(double)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateGradientOpacity;
-(id)_fadeInAnimation;
-(id)_fadeOutAnimation;
-(id)initWithGradientType:(id)arg1 ;
-(void)setGradientStartOpacity:(double)arg1 ;
-(void)setGradientEndOpacity:(double)arg1 ;
-(CGPoint)gradientOrigin;
-(void)setGradientOrigin:(CGPoint)arg1 ;
-(double)gradientStartOpacity;
-(double)gradientEndOpacity;
@end

