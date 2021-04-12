/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFeature.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CIQRCodeDescriptor, NSString;

@interface CIQRCodeFeature : CIFeature <NSSecureCoding, NSCopying> {

	CGRect bounds;
	CGPoint topLeft;
	CGPoint topRight;
	CGPoint bottomLeft;
	CGPoint bottomRight;
	CIQRCodeDescriptor* symbolDescriptor;

}

@property (readonly) CGRect bounds; 
@property (readonly) CGPoint topLeft; 
@property (readonly) CGPoint topRight; 
@property (readonly) CGPoint bottomLeft; 
@property (readonly) CGPoint bottomRight; 
@property (readonly) NSString * messageString; 
@property (readonly) CIQRCodeDescriptor * symbolDescriptor; 
+(BOOL)supportsSecureCoding;
+(id)featureWithInternalRepresentation:(SCD_Struct_CI23*)arg1 ;
-(CGRect)bounds;
-(CGPoint)bottomLeft;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPoint)topLeft;
-(CGPoint)topRight;
-(id)initWithInternalRepresentation:(SCD_Struct_CI23*)arg1 ;
-(id)type;
-(CGPoint)bottomRight;
-(id)initWithCoder:(id)arg1 ;
-(CIQRCodeDescriptor *)symbolDescriptor;
-(NSString *)messageString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

