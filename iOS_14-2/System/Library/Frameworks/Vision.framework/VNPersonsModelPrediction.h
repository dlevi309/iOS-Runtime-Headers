/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class VNFaceObservation;

@interface VNPersonsModelPrediction : NSObject <NSCopying, NSSecureCoding> {

	VNFaceObservation* _faceObservation;
	id<NSObject><NSCopying><NSSecureCoding> _predictedPersonUniqueIdentifier;
	float _confidence;

}

@property (nonatomic,readonly) VNFaceObservation * faceObservation;                                                       //@synthesize faceObservation=_faceObservation - In the implementation block
@property (nonatomic,copy,readonly) id<NSObject><NSCopying><NSSecureCoding> predictedPersonUniqueIdentifier;              //@synthesize predictedPersonUniqueIdentifier=_predictedPersonUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) float confidence;                                                                          //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(float)confidence;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFaceObservation:(id)arg1 predictedPersonUniqueIdentifier:(id)arg2 confidence:(float)arg3 ;
-(VNFaceObservation *)faceObservation;
-(id<NSObject><NSCopying><NSSecureCoding>)predictedPersonUniqueIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

