/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@interface PKSpaceInsertionView : UIView {

	CGPathRef _lassoPath;
	CGPoint _handleLocation;
	double _scale;
	BOOL _isDragging;
	unsigned long long _insertionType;

}

@property (assign,nonatomic) unsigned long long insertionType;              //@synthesize insertionType=_insertionType - In the implementation block
@property (assign,nonatomic) BOOL isDragging;                               //@synthesize isDragging=_isDragging - In the implementation block
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isDragging;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 insertionType:(unsigned long long)arg2 path:(CGPathRef)arg3 handleLocation:(CGPoint)arg4 scale:(double)arg5 ;
-(void)setIsDragging:(BOOL)arg1 ;
-(unsigned long long)insertionType;
-(void)setInsertionType:(unsigned long long)arg1 ;
@end

