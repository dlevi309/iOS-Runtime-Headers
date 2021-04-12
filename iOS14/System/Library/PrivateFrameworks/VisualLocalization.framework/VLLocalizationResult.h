/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VisualLocalization.framework/VisualLocalization
*/

#import <VisualLocalization/VisualLocalization-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class VLLocalizationDebugInfo;

@interface VLLocalizationResult : NSObject <NSCopying, NSSecureCoding> {

	float _confidence;
	double _timestamp;
	VLLocalizationDebugInfo* _debugInfo;
	SCD_Struct_VL1 _location;
	SCD_Struct_VL2 _transform;
	SCD_Struct_VL3 _covariance;

}

@property (nonatomic,readonly) unsigned long long timestamp; 
@property (nonatomic,readonly) double inputTimestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VL1 location;                          //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VL2 transform;                         //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) float confidence;                                 //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VL3 covariance;                        //@synthesize covariance=_covariance - In the implementation block
@property (nonatomic,readonly) VLLocalizationDebugInfo * debugInfo;              //@synthesize debugInfo=_debugInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(float)confidence;
-(id)init;
-(unsigned long long)timestamp;
-(SCD_Struct_VL1)location;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_VL2)transform;
-(SCD_Struct_VL3)covariance;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(VLLocalizationDebugInfo *)debugInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 pose:(const SCD_Struct_VL4*)arg2 debugInfo:(id)arg3 ;
-(double)inputTimestamp;
@end

