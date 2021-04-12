/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIQRCodeDescriptor : CIBarcodeDescriptor {

	NSData* errorCorrectedPayload;
	long long symbolVersion;
	unsigned char maskPattern;
	long long errorCorrectionLevel;

}

@property (readonly) NSData * errorCorrectedPayload; 
@property (readonly) long long symbolVersion; 
@property (readonly) unsigned char maskPattern; 
@property (readonly) long long errorCorrectionLevel; 
+(BOOL)supportsSecureCoding;
+(id)descriptorWithPayload:(id)arg1 symbolVersion:(long long)arg2 maskPattern:(unsigned char)arg3 errorCorrectionLevel:(long long)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isValid;
-(NSData *)errorCorrectedPayload;
-(id)initWithPayload:(id)arg1 symbolVersion:(long long)arg2 maskPattern:(unsigned char)arg3 errorCorrectionLevel:(long long)arg4 ;
-(long long)errorCorrectionLevel;
-(long long)symbolVersion;
-(unsigned char)maskPattern;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

