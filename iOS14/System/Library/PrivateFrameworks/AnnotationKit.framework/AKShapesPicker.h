/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)shapes;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)setShapes:(NSArray *)arg1 ;
-(void)_shapeButtonPressed:(id)arg1 ;
-(void)_updateCurrentAppearanceIfNeeded;
-(id)initWithFrame:(CGRect)arg1 shapeTags:(id)arg2 ;
@end

