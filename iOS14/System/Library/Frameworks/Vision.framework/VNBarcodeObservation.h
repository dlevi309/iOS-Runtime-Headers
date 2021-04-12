/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(CIBarcodeDescriptor *)barcodeDescriptor;
-(id)initWithRequestRevision:(unsigned long long)arg1 symbology:(id)arg2 descriptor:(id)arg3 topLeft:(CGPoint)arg4 bottomLeft:(CGPoint)arg5 bottomRight:(CGPoint)arg6 topRight:(CGPoint)arg7 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 symbology:(id)arg2 descriptor:(id)arg3 boundingBox:(CGRect)arg4 ;
-(NSString *)payloadStringValue;
-(NSDictionary *)acbsBarcodeInfo;
-(void)setACBSBarcodeInfo:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)symbology;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

