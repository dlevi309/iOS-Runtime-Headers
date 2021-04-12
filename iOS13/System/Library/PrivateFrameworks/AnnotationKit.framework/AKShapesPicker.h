/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKModernToolbarPicker.h>

@class NSArray;

@interface AKShapesPicker : AKModernToolbarPicker {

	NSArray* _shapes;
	long long _style;

}

@property (nonatomic,copy) NSArray * shapes;              //@synthesize shapes=_shapes - In the implementation block
@property (assign) long long style;                       //@synthesize style=_style - In the implementation block
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(NSArray *)shapes;
-(void)setShapes:(NSArray *)arg1 ;
-(void)_shapeButtonPressed:(id)arg1 ;
-(void)_updateCurrentAppearanceIfNeeded;
-(id)initWithFrame:(CGRect)arg1 shapeTags:(id)arg2 ;
@end

