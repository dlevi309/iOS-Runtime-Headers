/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class VNImageprint, NSString, NSData;

@interface VNImageprintObservation : VNObservation {

	BOOL _imageprintValid;
	VNImageprint* _imageprint;
	NSString* _imageprintVersion;

}

@property (nonatomic,retain) VNImageprint * imageprint;                        //@synthesize imageprint=_imageprint - In the implementation block
@property (nonatomic,readonly) BOOL imageprintValid;                           //@synthesize imageprintValid=_imageprintValid - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageprintVersion;              //@synthesize imageprintVersion=_imageprintVersion - In the implementation block
@property (nonatomic,readonly) NSData * rawImageprintDescriptor; 
+(BOOL)supportsSecureCoding;
+(id)observationWithImageprint:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)calculateDistanceFromImageprintObservation:(id)arg1 ;
-(BOOL)isImageprintValid;
-(id)initWithRawImageprintDescriptor:(id)arg1 ;
-(NSData *)rawImageprintDescriptor;
-(VNImageprint *)imageprint;
-(void)setImageprint:(VNImageprint *)arg1 ;
-(BOOL)imageprintValid;
-(NSString *)imageprintVersion;
@end

