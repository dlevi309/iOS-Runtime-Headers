/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ARCameraAlignmentData : NSObject <ARResultData, NSSecureCoding> {

	double _timestamp;
	SCD_Struct_AR1 _cameraTransform;

}

@property (assign,nonatomic) double timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 cameraTransform;              //@synthesize cameraTransform=_cameraTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(SCD_Struct_AR1)cameraTransform;
-(void)setCameraTransform:(SCD_Struct_AR1)arg1 ;
@end

