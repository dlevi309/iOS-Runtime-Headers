/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) long long tagColor;                         //@synthesize tagColor=_tagColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)checked;
-(void)updateColors;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(CALayer *)checkmarkLayer;
-(CGSize)dotSize;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(CAShapeLayer *)dotLayer;
-(void)setTagColor:(long long)arg1 ;
-(long long)tagColor;
-(void)updateLayoutOfLayers;
-(CAShapeLayer *)noneDotLayer;
-(void)setDotSize:(CGSize)arg1 ;
@end

