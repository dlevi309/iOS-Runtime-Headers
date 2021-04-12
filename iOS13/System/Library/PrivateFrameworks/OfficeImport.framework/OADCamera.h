/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {

	OADRotation3D* mRotation;
	int mCameraType;
	float mFieldOfView;
	float mZoom;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)cameraType;
-(id)rotation;
-(void)setRotation:(id)arg1 ;
-(void)setZoom:(float)arg1 ;
-(float)zoom;
-(float)fieldOfView;
-(void)setCameraType:(int)arg1 ;
-(void)setFieldOfView:(float)arg1 ;
@end

