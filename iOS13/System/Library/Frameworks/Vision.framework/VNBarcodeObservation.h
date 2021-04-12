/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRectangleObservation.h>

@class NSString, CIBarcodeDescriptor, NSDictionary;

@interface VNBarcodeObservation : VNRectangleObservation {

	NSString* _cachedPayloadStringValue;
	NSString* _symbology;
	CIBarcodeDescriptor* _barcodeDescriptor;
	NSDictionary* _acbsBarcodeInfo;

}

@property (setter=setACBSBarcodeInfo:,nonatomic,copy) NSDictionary * acbsBarcodeInfo;              //@synthesize acbsBarcodeInfo=_acbsBarcodeInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * symbology;                                          //@synthesize symbology=_symbology - In the implementation block
@property (nonatomic,readonly) CIBarcodeDescriptor * barcodeDescriptor;                            //@synthesize barcodeDescriptor=_barcodeDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSString * payloadStringValue; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CIBarcodeDescriptor *)barcodeDescriptor;
-(id)initWithRequestRevision:(unsigned long long)arg1 symbology:(id)arg2 descriptor:(id)arg3 topLeft:(CGPoint)arg4 bottomLeft:(CGPoint)arg5 bottomRight:(CGPoint)arg6 topRight:(CGPoint)arg7 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 symbology:(id)arg2 descriptor:(id)arg3 boundingBox:(CGRect)arg4 ;
-(NSString *)payloadStringValue;
-(NSString *)symbology;
-(NSDictionary *)acbsBarcodeInfo;
-(void)setACBSBarcodeInfo:(id)arg1 ;
@end

