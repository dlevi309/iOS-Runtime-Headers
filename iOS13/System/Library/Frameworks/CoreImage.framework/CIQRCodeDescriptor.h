/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPayload:(id)arg1 symbolVersion:(long long)arg2 maskPattern:(unsigned char)arg3 errorCorrectionLevel:(long long)arg4 ;
-(NSData *)errorCorrectedPayload;
-(long long)symbolVersion;
-(unsigned char)maskPattern;
-(long long)errorCorrectionLevel;
@end

