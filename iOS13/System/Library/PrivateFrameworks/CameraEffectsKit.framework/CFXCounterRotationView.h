/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>

@interface CFXCounterRotationView : UIView {

	double _zRotation;

}

@property (assign,nonatomic) double zRotation;                         //@synthesize zRotation=_zRotation - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform; 
+(Class)layerClass;
-(double)zRotation;
-(void)setZRotation:(double)arg1 ;
-(id)snapshotLayer;
@end

