/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface _TVHeaderColumnView : UIView {

	NSArray* _labelViews;
	double _lineSpacing;

}

@property (nonatomic,copy) NSArray * labelViews;              //@synthesize labelViews=_labelViews - In the implementation block
@property (assign,nonatomic) double lineSpacing;              //@synthesize lineSpacing=_lineSpacing - In the implementation block
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(NSArray *)labelViews;
-(void)setLabelViews:(NSArray *)arg1 ;
@end

