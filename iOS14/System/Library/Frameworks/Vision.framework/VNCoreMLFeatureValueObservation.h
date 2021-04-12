/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class MLFeatureValue, NSString;

@interface VNCoreMLFeatureValueObservation : VNObservation {

	MLFeatureValue* _featureValue;
	NSString* _featureName;

}

@property (nonatomic,copy,readonly) MLFeatureValue * featureValue;              //@synthesize featureValue=_featureValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureName;                     //@synthesize featureName=_featureName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)featureName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 featureName:(id)arg2 featureValue:(id)arg3 ;
-(MLFeatureValue *)featureValue;
@end

