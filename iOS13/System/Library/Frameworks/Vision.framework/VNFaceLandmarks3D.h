/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceLandmarks.h>

@class VNFaceLandmarkRegion3D;

@interface VNFaceLandmarks3D : VNFaceLandmarks {

	VNFaceLandmarkRegion3D* _allPoints;
	os_unfair_lock_s _allPointsLock;
	VNFaceLandmarkRegion3D* _faceContour;
	os_unfair_lock_s _faceContourLock;
	VNFaceLandmarkRegion3D* _leftEye;
	os_unfair_lock_s _leftEyeLock;
	VNFaceLandmarkRegion3D* _rightEye;
	os_unfair_lock_s _rightEyeLock;
	VNFaceLandmarkRegion3D* _leftEyebrow;
	os_unfair_lock_s _leftEyebrowLock;
	VNFaceLandmarkRegion3D* _rightEyebrow;
	os_unfair_lock_s _rightEyebrowLock;
	VNFaceLandmarkRegion3D* _nose;
	os_unfair_lock_s _noseLock;
	VNFaceLandmarkRegion3D* _noseCrest;
	os_unfair_lock_s _noseCrestLock;
	VNFaceLandmarkRegion3D* _medianLine;
	os_unfair_lock_s _medianLineLock;
	VNFaceLandmarkRegion3D* _outerLips;
	os_unfair_lock_s _outerLipsLock;
	VNFaceLandmarkRegion3D* _innerLips;
	os_unfair_lock_s _innerLipsLock;

}

@property (readonly) VNFaceLandmarkRegion3D * allPoints;                 //@synthesize allPoints=_allPoints - In the implementation block
@property (readonly) VNFaceLandmarkRegion3D * faceContour;               //@synthesize faceContour=_faceContour - In the implementation block
@property (readonly) VNFaceLandmarkRegion3D * leftEye;                   //@synthesize leftEye=_leftEye - In the implementation block
@property (readonly) VNFaceLandmarkRegion3D * rightEye;                  //@synthesize rightEye=_rightEye - In the implementation block
@property (readonly) VNFaceLandmarkRegion3D * leftEyebrow;               //@synthesize leftEyebrow=_leftEyebrow - In the implementation block
@property (readonly) VNFaceLandmarkRegion3D * rightEyebrow;              //@synthesize rightEyebrow=_rightEyebrow - In the implementation block
@property (readonly) VNFaceLandmarkRegion3D * nose;                      //@synthesize nose=_nose - In the implementation block
@property (readonly) VNFaceLandmarkRegion3D * noseCrest;                 //@synthesize noseCrest=_noseCrest - In the implementation block
@property (readonly) VNFaceLandmarkRegion3D * medianLine;                //@synthesize medianLine=_medianLine - In the implementation block
@property (readonly) VNFaceLandmarkRegion3D * outerLips;                 //@synthesize outerLips=_outerLips - In the implementation block
@property (readonly) VNFaceLandmarkRegion3D * innerLips;                 //@synthesize innerLips=_innerLips - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(VNFaceLandmarkRegion3D *)leftEye;
-(VNFaceLandmarkRegion3D *)rightEye;
-(VNFaceLandmarkRegion3D *)allPoints;
-(VNFaceLandmarkRegion3D *)faceContour;
-(VNFaceLandmarkRegion3D *)innerLips;
-(VNFaceLandmarkRegion3D *)leftEyebrow;
-(VNFaceLandmarkRegion3D *)medianLine;
-(VNFaceLandmarkRegion3D *)nose;
-(VNFaceLandmarkRegion3D *)noseCrest;
-(VNFaceLandmarkRegion3D *)outerLips;
-(VNFaceLandmarkRegion3D *)rightEyebrow;
-(void)_initLocks;
-(void*)_createPointArray:(const int*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 pointsData:(id)arg2 pointCount:(unsigned long long)arg3 userFacingBBox:(CGRect)arg4 alignedBBox:(Geometry2D_rect2D_)arg5 landmarkScore:(float)arg6 ;
@end

