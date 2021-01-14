/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthVisualization.framework/HealthVisualization
*/

#import <HealthVisualization/HealthVisualization-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface HealthVisualization.DiagramImageView : UIImageView {

	 imageRenderer;
	 delegate;
	 lastUsedTransformer;
	 lastUsedModelSpace;

}

@property (readonly,nonatomic) CGSize intrinsicContentSize; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGRect bounds; 
-(CGRect)bounds;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(CGRect)frame;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

