/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/DOCTagIconView.h>

@class CAShapeLayer, CALayer, NSString;

@interface DOCTagDotView : UIView <DOCTagIconView> {

	BOOL _checked;
	long long _tagColor;
	CAShapeLayer* _noneDotLayer;
	CAShapeLayer* _dotLayer;
	CALayer* _checkmarkLayer;
	CGSize _dotSize;

}

@property (nonatomic,readonly) CAShapeLayer * noneDotLayer;              //@synthesize noneDotLayer=_noneDotLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * dotLayer;                  //@synthesize dotLayer=_dotLayer - In the implementation block
@property (nonatomic,readonly) CALayer * checkmarkLayer;                 //@synthesize checkmarkLayer=_checkmarkLayer - In the implementation block
@property (assign,nonatomic) BOOL checked;                               //@synthesize checked=_checked - In the implementation block
@property (assign,nonatomic) CGSize dotSize;                             //@synthesize dotSize=_dotSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long tagColor;                         //@synthesize tagColor=_tagColor - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)checked;
-(void)updateColors;
-(CALayer *)checkmarkLayer;
-(void)setDotSize:(CGSize)arg1 ;
-(void)setTagColor:(long long)arg1 ;
-(void)updateLayoutOfLayers;
-(long long)tagColor;
-(CAShapeLayer *)dotLayer;
-(CAShapeLayer *)noneDotLayer;
-(CGSize)dotSize;
@end

