/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setZoom:(float)arg1 ;
-(float)zoom;
-(void)setRotation:(id)arg1 ;
-(id)init;
-(id)rotation;
-(void)setFieldOfView:(float)arg1 ;
-(int)cameraType;
-(id)description;
-(unsigned long long)hash;
-(void)setCameraType:(int)arg1 ;
-(float)fieldOfView;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

