/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/Fx3DAPI.h>
#import <libobjc.A.dylib/Fx3DAPI_v2.h>
#import <libobjc.A.dylib/Fx3DAPI_v3.h>
#import <libobjc.A.dylib/PROAPIObject.h>

@class NSString;

@interface OZFxPlug3DAPI : NSObject <Fx3DAPI, Fx3DAPI_v2, Fx3DAPI_v3, PROAPIObject> {

	BOOL _is3D;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isUsingCamera;
-(BOOL)is3D;
-(id)cameraMatrixAtTime:(double)arg1 ;
-(id)layerMatrixAtTime:(double)arg1 ;
-(double)focalLengthAtTime:(double)arg1 ;
-(id)worldToFilmMatrix;
-(id)worldToObjectMatrix;
-(id)worldToEyeMatrix;
-(double)focalLengthAtFxTime:(/*function pointer*/void**)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
-(void)_setCameraMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setWorldToFilmMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setLayerMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setWorldToLayerMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setWorldToObjectMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setWorldToEyeMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setIs3D:(BOOL)arg1 ;
-(void)_setFocalLength:(double)arg1 ;
-(id)worldToLayerMatrix;
@end

