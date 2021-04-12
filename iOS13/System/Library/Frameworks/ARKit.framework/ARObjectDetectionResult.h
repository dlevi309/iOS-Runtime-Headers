/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ARReferenceObject;

@interface ARObjectDetectionResult : NSObject <NSCopying, NSSecureCoding> {

	ARReferenceObject* _referenceObject;
	SCD_Struct_AR1 _visionTransform;

}

@property (assign,nonatomic) SCD_Struct_AR1 visionTransform;                   //@synthesize visionTransform=_visionTransform - In the implementation block
@property (nonatomic,retain) ARReferenceObject * referenceObject;              //@synthesize referenceObject=_referenceObject - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setReferenceObject:(ARReferenceObject *)arg1 ;
-(ARReferenceObject *)referenceObject;
-(SCD_Struct_AR1)visionTransform;
-(void)setVisionTransform:(SCD_Struct_AR1)arg1 ;
@end

