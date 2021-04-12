/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)frame;
-(id)initWithImage:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
@end

