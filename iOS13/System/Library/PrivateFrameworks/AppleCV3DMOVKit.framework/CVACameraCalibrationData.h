/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <AppleCV3DMOVKit/AppleCV3DMOVKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, AVCameraCalibrationData, NSData;

@interface CVACameraCalibrationData : NSObject <NSSecureCoding> {

	float _pixelSize;
	NSString* _streamID;
	double _timestamp;
	NSDictionary* _calibrationDictionary;
	AVCameraCalibrationData* _calibrationData;
	NSData* _lensDistortionLookupTable;
	NSData* _inverseLensDistortionLookupTable;
	CGSize _intrinsicMatrixReferenceDimensions;
	CGPoint _lensDistortionCenter;
	SCD_Struct_CV3 _intrinsicMatrix;
	SCD_Struct_CV4 _extrinsicMatrix;

}

@property (nonatomic,retain) NSString * streamID;                                    //@synthesize streamID=_streamID - In the implementation block
@property (assign) double timestamp;                                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSDictionary * calibrationDictionary;                   //@synthesize calibrationDictionary=_calibrationDictionary - In the implementation block
@property (nonatomic,retain) AVCameraCalibrationData * calibrationData;              //@synthesize calibrationData=_calibrationData - In the implementation block
@property (assign,nonatomic) SCD_Struct_CV3 intrinsicMatrix;                         //@synthesize intrinsicMatrix=_intrinsicMatrix - In the implementation block
@property (assign,nonatomic) CGSize intrinsicMatrixReferenceDimensions;              //@synthesize intrinsicMatrixReferenceDimensions=_intrinsicMatrixReferenceDimensions - In the implementation block
@property (assign,nonatomic) SCD_Struct_CV4 extrinsicMatrix;                         //@synthesize extrinsicMatrix=_extrinsicMatrix - In the implementation block
@property (assign,nonatomic) float pixelSize;                                        //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,retain) NSData * lensDistortionLookupTable;                     //@synthesize lensDistortionLookupTable=_lensDistortionLookupTable - In the implementation block
@property (nonatomic,retain) NSData * inverseLensDistortionLookupTable;              //@synthesize inverseLensDistortionLookupTable=_inverseLensDistortionLookupTable - In the implementation block
@property (assign,nonatomic) CGPoint lensDistortionCenter;                           //@synthesize lensDistortionCenter=_lensDistortionCenter - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(SCD_Struct_CV3)intrinsicMatrix;
-(CGSize)intrinsicMatrixReferenceDimensions;
-(NSData *)lensDistortionLookupTable;
-(NSData *)inverseLensDistortionLookupTable;
-(CGPoint)lensDistortionCenter;
-(AVCameraCalibrationData *)calibrationData;
-(void)updateProperties:(id)arg1 ;
-(float)pixelSize;
-(void)setPixelSize:(float)arg1 ;
-(NSString *)streamID;
-(void)setStreamID:(NSString *)arg1 ;
-(SCD_Struct_CV4)extrinsicMatrix;
-(void)setCalibrationData:(AVCameraCalibrationData *)arg1 ;
-(id)initWithAVCameraCalibrationData:(id)arg1 timestamp:(double)arg2 streamID:(id)arg3 ;
-(void)setIntrinsicMatrix:(SCD_Struct_CV3)arg1 ;
-(void)setIntrinsicMatrixReferenceDimensions:(CGSize)arg1 ;
-(void)setExtrinsicMatrix:(SCD_Struct_CV4)arg1 ;
-(void)setLensDistortionLookupTable:(NSData *)arg1 ;
-(void)setInverseLensDistortionLookupTable:(NSData *)arg1 ;
-(void)setLensDistortionCenter:(CGPoint)arg1 ;
-(void)setCalibrationDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)calibrationDictionary;
@end

