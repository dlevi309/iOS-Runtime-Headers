/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSString;

@interface VNPixelBufferObservation : VNObservation {

	CVBufferRef _pixelBuffer;
	NSString* _featureName;

}

@property (nonatomic,readonly) CVBufferRef pixelBuffer;                  //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureName;              //@synthesize featureName=_featureName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CVBufferRef)pixelBuffer;
-(NSString *)featureName;
-(id)initWithRequestRevision:(unsigned long long)arg1 featureName:(id)arg2 CVPixelBuffer:(CVBufferRef)arg3 ;
@end

