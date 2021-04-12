/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/Fx3DAPI.h>
#import <libobjc.A.dylib/Fx3DAPI_v2.h>
#import <libobjc.A.dylib/Fx3DAPI_v3.h>
#import <libobjc.A.dylib/PROAPIObject.h>

@class NSString;

@interface OZFxPlug3DAPI : NSObject <Fx3DAPI, Fx3DAPI_v2, Fx3DAPI_v3, PROAPIObject> {

	atomic<bool> _is3D;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)is3D;
-(BOOL)isUsingCamera;
-(id)cameraMatrixAtTime:(double)arg1 ;
-(id)layerMatrixAtTime:(double)arg1 ;
-(double)focalLengthAtTime:(double)arg1 ;
-(id)worldToFilmMatrix;
-(id)worldToObjectMatrix;
-(id)worldToEyeMatrix;
-(double)focalLengthAtFxTime:(/*function pointer*/void**)arg1 ;
-(void)_setCameraMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setWorldToFilmMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setLayerMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setWorldToLayerMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setWorldToObjectMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setWorldToEyeMatrix:(PCMatrix44Tmpl<double>)arg1 ;
-(void)_setIs3D:(BOOL)arg1 ;
-(void)_setFocalLength:(double)arg1 ;
-(id)worldToLayerMatrix;
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
@end

