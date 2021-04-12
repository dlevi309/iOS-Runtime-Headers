/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInternalRepresentation:(SCD_Struct_CI23*)arg1 ;
-(CGRect)bounds;
-(CGPoint)topLeft;
-(CGPoint)topRight;
-(CGPoint)bottomLeft;
-(CGPoint)bottomRight;
-(NSString *)messageString;
-(CIQRCodeDescriptor *)symbolDescriptor;
@end

