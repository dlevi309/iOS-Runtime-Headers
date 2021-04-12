/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PKDrawingAdjustmentKnob;

@interface PKSpaceInsertionView : UIView {

	CGPathRef _lassoPath;
	CGPoint _handleLocation;
	double _scale;
	PKDrawingAdjustmentKnob* _knobHandle;
	BOOL _isDragging;
	unsigned long long _insertionType;

}

@property (assign,nonatomic) unsigned long long insertionType;              //@synthesize insertionType=_insertionType - In the implementation block
@property (assign,nonatomic) BOOL isDragging;                               //@synthesize isDragging=_isDragging - In the implementation block
-(unsigned long long)insertionType;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isDragging;
-(void)setInsertionType:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setIsDragging:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 insertionType:(unsigned long long)arg2 path:(CGPathRef)arg3 handleLocation:(CGPoint)arg4 scale:(double)arg5 ;
@end

