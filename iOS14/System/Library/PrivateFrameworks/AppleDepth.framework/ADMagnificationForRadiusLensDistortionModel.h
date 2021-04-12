/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic) CGPoint distortionCenter;                               //@synthesize distortionCenter=_distortionCenter - In the implementation block
@property (nonatomic,retain) NSData * lensDistortionLookupTable;                     //@synthesize lensDistortionLookupTable=_lensDistortionLookupTable - In the implementation block
@property (nonatomic,retain) NSData * inverseLensDistortionLookupTable;              //@synthesize inverseLensDistortionLookupTable=_inverseLensDistortionLookupTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scale:(float)arg1 ;
-(void)crop:(CGRect)arg1 ;
-(NSData *)lensDistortionLookupTable;
-(NSData *)inverseLensDistortionLookupTable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDistortionCenter:(CGPoint)arg1 ;
-(CGPoint)distortionCenter;
-(id)initWithDistortionCenter:(CGPoint)arg1 lensDistortionLookupTable:(id)arg2 inverseLensDistortionLookupTable:(id)arg3 ;
-(void)setLensDistortionLookupTable:(NSData *)arg1 ;
-(void)setInverseLensDistortionLookupTable:(NSData *)arg1 ;
-(void)distortPixels:(unsigned long long)arg1 undistortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outDistortedPixels:(CGPoint*)arg4 ;
-(void)undistortPixels:(unsigned long long)arg1 distortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outUndistortedPixels:(CGPoint*)arg4 ;
-(void)adjustForImageRotation:(long long)arg1 forDimensions:(CGSize)arg2 ;
-(void)applyDistortionModelToPixels:(unsigned long long)arg1 inPixels:(const CGPoint*)arg2 intrinsicsMatrix:(SCD_Struct_AD22)arg3 referenceDimensions:(CGSize)arg4 magnificationLookupTable:(id)arg5 outPixels:(CGPoint*)arg6 ;
@end

