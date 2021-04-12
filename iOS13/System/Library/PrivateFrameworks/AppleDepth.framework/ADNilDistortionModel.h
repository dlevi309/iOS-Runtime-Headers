/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <libobjc.A.dylib/ADLensDistortionModel.h>

@class NSString;

@interface ADNilDistortionModel : NSObject <ADLensDistortionModel>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)distortPixels:(unsigned long long)arg1 undistortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outDistortedPixels:(CGPoint*)arg4 ;
-(void)undistortPixels:(unsigned long long)arg1 distortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outUndistortedPixels:(CGPoint*)arg4 ;
@end

