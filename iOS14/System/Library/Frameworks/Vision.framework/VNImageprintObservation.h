/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(VNImageprint *)imageprint;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)calculateDistanceFromImageprintObservation:(id)arg1 ;
-(BOOL)isImageprintValid;
-(id)initWithRawImageprintDescriptor:(id)arg1 ;
-(NSData *)rawImageprintDescriptor;
-(void)setImageprint:(VNImageprint *)arg1 ;
-(BOOL)imageprintValid;
-(NSString *)imageprintVersion;
-(BOOL)isEqual:(id)arg1 ;
@end

