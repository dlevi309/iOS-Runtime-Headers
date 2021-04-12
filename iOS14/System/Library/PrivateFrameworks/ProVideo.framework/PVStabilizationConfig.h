/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PVStabilizationConfig : NSObject <NSSecureCoding, NSCopying> {

	int _fillMode;
	CGRect _cleanAperture;
	CGRect _cropRect;
	SCD_Struct_PV47 _homography;

}

@property (assign,nonatomic) SCD_Struct_PV47 homography;                    //@synthesize homography=_homography - In the implementation block
@property (assign,nonatomic) CGRect cleanAperture;                          //@synthesize cleanAperture=_cleanAperture - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                               //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) int fillMode;                                  //@synthesize fillMode=_fillMode - In the implementation block
@property (nonatomic,readonly) CGRect normalizedCleanAperture; 
@property (nonatomic,readonly) BOOL isValid; 
+(BOOL)supportsSecureCoding;
+(id)configWithHomography:(SCD_Struct_PV47)arg1 cleanAperture:(CGRect)arg2 cropRect:(CGRect)arg3 fillMode:(int)arg4 ;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(int)fillMode;
-(void)setFillMode:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isValid;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isValidWithReason:(out id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)cleanAperture;
-(void)setCleanAperture:(CGRect)arg1 ;
-(SCD_Struct_PV47)homography;
-(CGRect)normalizedCleanAperture;
-(id)initWithHomography:(SCD_Struct_PV47)arg1 cleanAperture:(CGRect)arg2 cropRect:(CGRect)arg3 fillMode:(int)arg4 ;
-(void)setHomography:(SCD_Struct_PV47)arg1 ;
@end

