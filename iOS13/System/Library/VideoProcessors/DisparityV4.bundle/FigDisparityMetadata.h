/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


#import <DisparityV4/DisparityV4-Structs.h>
@class NSArray;

@interface FigDisparityMetadata : NSObject {

	unsigned short _version;
	float _baseline;
	float _telePixelSizeInMillimeters;
	float _widePixelSizeInMillimeters;
	NSArray* _teleLensDistortionCoefficients;
	NSArray* _wideLensDistortionCoefficients;
	NSArray* _teleInverseLensDistortionCoefficients;
	NSArray* _wideInverseLensDistortionCoefficients;
	CGPoint _teleLensDistortionOpticalCenter;
	CGPoint _wideLensDistortionOpticalCenter;
	SCD_Struct_St15 _teleIntrinsicMatrix;
	SCD_Struct_St15 _wideIntrinsicMatrix;
	SCD_Struct_Fi29 _teleExtrinsicMatrix;
	SCD_Struct_Fi29 _wideExtrinsicMatrix;

}

@property (assign,nonatomic) unsigned short version;                                     //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) float baseline;                                             //@synthesize baseline=_baseline - In the implementation block
@property (assign,nonatomic) float telePixelSizeInMillimeters;                           //@synthesize telePixelSizeInMillimeters=_telePixelSizeInMillimeters - In the implementation block
@property (assign,nonatomic) float widePixelSizeInMillimeters;                           //@synthesize widePixelSizeInMillimeters=_widePixelSizeInMillimeters - In the implementation block
@property (assign,nonatomic) SCD_Struct_St15 teleIntrinsicMatrix;                        //@synthesize teleIntrinsicMatrix=_teleIntrinsicMatrix - In the implementation block
@property (assign,nonatomic) SCD_Struct_St15 wideIntrinsicMatrix;                        //@synthesize wideIntrinsicMatrix=_wideIntrinsicMatrix - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi29 teleExtrinsicMatrix;                        //@synthesize teleExtrinsicMatrix=_teleExtrinsicMatrix - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi29 wideExtrinsicMatrix;                        //@synthesize wideExtrinsicMatrix=_wideExtrinsicMatrix - In the implementation block
@property (nonatomic,copy) NSArray * teleLensDistortionCoefficients;                     //@synthesize teleLensDistortionCoefficients=_teleLensDistortionCoefficients - In the implementation block
@property (nonatomic,copy) NSArray * wideLensDistortionCoefficients;                     //@synthesize wideLensDistortionCoefficients=_wideLensDistortionCoefficients - In the implementation block
@property (nonatomic,copy) NSArray * teleInverseLensDistortionCoefficients;              //@synthesize teleInverseLensDistortionCoefficients=_teleInverseLensDistortionCoefficients - In the implementation block
@property (nonatomic,copy) NSArray * wideInverseLensDistortionCoefficients;              //@synthesize wideInverseLensDistortionCoefficients=_wideInverseLensDistortionCoefficients - In the implementation block
@property (assign,nonatomic) CGPoint teleLensDistortionOpticalCenter;                    //@synthesize teleLensDistortionOpticalCenter=_teleLensDistortionOpticalCenter - In the implementation block
@property (assign,nonatomic) CGPoint wideLensDistortionOpticalCenter;                    //@synthesize wideLensDistortionOpticalCenter=_wideLensDistortionOpticalCenter - In the implementation block
-(id)description;
-(unsigned short)version;
-(void)setVersion:(unsigned short)arg1 ;
-(void)setBaseline:(float)arg1 ;
-(float)baseline;
-(SCD_Struct_St15)teleIntrinsicMatrix;
-(SCD_Struct_St15)wideIntrinsicMatrix;
-(SCD_Struct_Fi29)teleExtrinsicMatrix;
-(SCD_Struct_Fi29)wideExtrinsicMatrix;
-(float)telePixelSizeInMillimeters;
-(float)widePixelSizeInMillimeters;
-(NSArray *)teleLensDistortionCoefficients;
-(NSArray *)wideLensDistortionCoefficients;
-(NSArray *)teleInverseLensDistortionCoefficients;
-(NSArray *)wideInverseLensDistortionCoefficients;
-(CGPoint)teleLensDistortionOpticalCenter;
-(CGPoint)wideLensDistortionOpticalCenter;
-(void)setTeleExtrinsicMatrix:(SCD_Struct_Fi29)arg1 ;
-(void)setTeleIntrinsicMatrix:(SCD_Struct_St15)arg1 ;
-(void)setTeleInverseLensDistortionCoefficients:(NSArray *)arg1 ;
-(void)setTeleLensDistortionCoefficients:(NSArray *)arg1 ;
-(void)setTeleLensDistortionOpticalCenter:(CGPoint)arg1 ;
-(void)setTelePixelSizeInMillimeters:(float)arg1 ;
-(void)setWideExtrinsicMatrix:(SCD_Struct_Fi29)arg1 ;
-(void)setWideIntrinsicMatrix:(SCD_Struct_St15)arg1 ;
-(void)setWideInverseLensDistortionCoefficients:(NSArray *)arg1 ;
-(void)setWideLensDistortionCoefficients:(NSArray *)arg1 ;
-(void)setWideLensDistortionOpticalCenter:(CGPoint)arg1 ;
-(void)setWidePixelSizeInMillimeters:(float)arg1 ;
@end

