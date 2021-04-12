/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <libobjc.A.dylib/ADLensDistortionModel.h>

@class NSData, NSString;

@interface ADMagnificationForRadiusLensDistortionModel : NSObject <ADLensDistortionModel> {

	NSData* _lensDistortionLookupTable;
	NSData* _inverseLensDistortionLookupTable;
	CGPoint _distortionCenter;

}

@property (nonatomic,readonly) CGPoint distortionCenter;                               //@synthesize distortionCenter=_distortionCenter - In the implementation block
@property (nonatomic,readonly) NSData * lensDistortionLookupTable;                     //@synthesize lensDistortionLookupTable=_lensDistortionLookupTable - In the implementation block
@property (nonatomic,readonly) NSData * inverseLensDistortionLookupTable;              //@synthesize inverseLensDistortionLookupTable=_inverseLensDistortionLookupTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)lensDistortionLookupTable;
-(NSData *)inverseLensDistortionLookupTable;
-(id)initWithDistortionCenter:(CGPoint)arg1 lensDistortionLookupTable:(id)arg2 inverseLensDistortionLookupTable:(id)arg3 ;
-(void)distortPixels:(unsigned long long)arg1 undistortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outDistortedPixels:(CGPoint*)arg4 ;
-(void)undistortPixels:(unsigned long long)arg1 distortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outUndistortedPixels:(CGPoint*)arg4 ;
-(CGPoint)distortionCenter;
-(void)applyDistortionModelToPixels:(unsigned long long)arg1 inPixels:(const CGPoint*)arg2 intrinsicsMatrix:(SCD_Struct_AD12)arg3 referenceDimensions:(CGSize)arg4 magnificationLookupTable:(id)arg5 outPixels:(CGPoint*)arg6 ;
@end

