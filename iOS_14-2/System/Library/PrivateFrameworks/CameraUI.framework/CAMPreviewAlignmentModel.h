/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMPreviewAlignmentModelObserver;
#import <CameraUI/CameraUI-Structs.h>
@class CMDeviceMotion;

@interface CAMPreviewAlignmentModel : NSObject {

	BOOL _aligned;
	id<CAMPreviewAlignmentModelObserver> _observer;
	double _opacity;
	CMDeviceMotion* __referenceDeviceMotion;
	CATransform3D _alignmentTransform;

}

@property (assign,setter=_setAlignmentTransform:,nonatomic) CATransform3D alignmentTransform;                        //@synthesize alignmentTransform=_alignmentTransform - In the implementation block
@property (assign,setter=_setAligned:,getter=isAligned,nonatomic) BOOL aligned;                                      //@synthesize aligned=_aligned - In the implementation block
@property (assign,setter=_setOpacity:,nonatomic) double opacity;                                                     //@synthesize opacity=_opacity - In the implementation block
@property (setter=_setReferenceDeviceMotion:,nonatomic,retain) CMDeviceMotion * _referenceDeviceMotion;              //@synthesize _referenceDeviceMotion=__referenceDeviceMotion - In the implementation block
@property (assign,nonatomic,__weak) id<CAMPreviewAlignmentModelObserver> observer;                                   //@synthesize observer=_observer - In the implementation block
+(double)desiredUpdateInterval;
-(void)setObserver:(id<CAMPreviewAlignmentModelObserver>)arg1 ;
-(id)init;
-(id<CAMPreviewAlignmentModelObserver>)observer;
-(double)opacity;
-(CATransform3D)alignmentTransform;
-(void)reset;
-(void)applyDeviceMotion:(id)arg1 ;
-(void)_setAlignmentTransform:(CATransform3D)arg1 ;
-(void)_setAligned:(BOOL)arg1 ;
-(CMDeviceMotion *)_referenceDeviceMotion;
-(void)_setReferenceDeviceMotion:(id)arg1 ;
-(void)_setOpacity:(double)arg1 ;
-(BOOL)isAligned;
@end

