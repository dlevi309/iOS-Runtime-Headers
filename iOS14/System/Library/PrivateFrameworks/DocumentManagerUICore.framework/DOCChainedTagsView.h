/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIColor;

@interface DOCChainedTagsView : UIView {

	NSArray* _tagColors;
	UIColor* _borderColor;
	double _knockOutBorderWidth;
	unsigned long long _spacing;
	double _tagDimension;
	CGPoint _alignmentOffset;

}

@property (nonatomic,retain) NSArray * tagColors;                     //@synthesize tagColors=_tagColors - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                   //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double knockOutBorderWidth;              //@synthesize knockOutBorderWidth=_knockOutBorderWidth - In the implementation block
@property (assign,nonatomic) unsigned long long spacing;              //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) double tagDimension;                     //@synthesize tagDimension=_tagDimension - In the implementation block
@property (assign,nonatomic) CGPoint alignmentOffset;                 //@synthesize alignmentOffset=_alignmentOffset - In the implementation block
+(double)horizontalSpacingForSpace:(unsigned long long)arg1 tagDiameter:(double)arg2 ;
+(CGSize)sizeForDiameter:(double)arg1 horizontalSpacing:(unsigned long long)arg2 tags:(id)arg3 ;
+(void)drawTagsInContext:(CGContextRef)arg1 diameter:(double)arg2 horizontalSpacing:(unsigned long long)arg3 layoutDirection:(long long)arg4 tagColors:(id)arg5 ringColor:(id)arg6 borderColor:(id)arg7 knockOutBorderWidth:(double)arg8 ;
-(unsigned long long)spacing;
-(void)setSpacing:(unsigned long long)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(double)horizontalSpacing;
-(UIColor *)borderColor;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)sizeToFit;
-(void)setBorderColor:(UIColor *)arg1 ;
-(double)tagDimension;
-(NSArray *)tagColors;
-(double)knockOutBorderWidth;
-(void)setTagColors:(NSArray *)arg1 ;
-(void)setknockOutBorderWidth:(double)arg1 ;
-(void)setTagDimension:(double)arg1 ;
-(void)setKnockOutBorderWidth:(double)arg1 ;
-(CGPoint)alignmentOffset;
-(void)setAlignmentOffset:(CGPoint)arg1 ;
@end

