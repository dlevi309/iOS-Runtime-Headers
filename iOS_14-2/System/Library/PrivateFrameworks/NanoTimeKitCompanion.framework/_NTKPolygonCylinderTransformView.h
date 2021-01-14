/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableDictionary;

@interface _NTKPolygonCylinderTransformView : UIView {

	unsigned long long _numberOfFaces;
	double _interiorAngle;
	double _exteriorAngle;
	NSMutableDictionary* _faceViews;
	unsigned long long _numberOfVisibleFaces;
	double _faceDistanceToCenter;

}

@property (nonatomic,readonly) unsigned long long numberOfFaces;                     //@synthesize numberOfFaces=_numberOfFaces - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfVisibleFaces;              //@synthesize numberOfVisibleFaces=_numberOfVisibleFaces - In the implementation block
@property (nonatomic,readonly) double faceDistanceToCenter;                          //@synthesize faceDistanceToCenter=_faceDistanceToCenter - In the implementation block
@property (nonatomic,readonly) double rotationAnglePerFace; 
+(Class)layerClass;
-(unsigned long long)numberOfFaces;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithNumberOfFaces:(unsigned long long)arg1 ;
-(unsigned long long)numberOfVisibleFaces;
-(void)setView:(id)arg1 forFaceAtIndex:(unsigned long long)arg2 ;
-(id)viewForFaceAtIndex:(unsigned long long)arg1 ;
-(void)enumerateFaceViewsWithBlock:(/*^block*/id)arg1 ;
-(double)rotationAnglePerFace;
-(double)faceDistanceToCenter;
-(CATransform3D)_transformForFaceIndex:(unsigned long long)arg1 ;
@end

