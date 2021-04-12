/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLineSpacing:(double)arg1 ;
-(void)setLabelViews:(NSArray *)arg1 ;
-(NSArray *)labelViews;
@end

